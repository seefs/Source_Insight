# coding=utf-8

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
#import modeling
#import optimization
import tensorflow as tf
import logging  
import logging.handlers
import sys




class BertModel(object):
  def __init__(self, data_x=data_x1):
    
    weight_x = tf.get_variable(
        name='weight_x',
        shape=[1])

    self.output_y = data_x1 + weight_x

  def get_output(self, data_y=data_y):
    return  tf.reduce_mean(tf.square(self.output_y-data_y))
    
  def get_predictions_y(self):
    return self.output_y


class AdamWeightDecayOptimizer(tf.train.Optimizer):
  """A basic Adam optimizer that includes "correct" L2 weight decay."""

  def __init__(self,
               learning_rate,
               weight_decay_rate=0.0,
               beta_1=0.9,
               beta_2=0.999,
               epsilon=1e-6,
               exclude_from_weight_decay=None,
               name="AdamWeightDecayOptimizer"):
    """Constructs a AdamWeightDecayOptimizer."""
    tf.logging.info("***** AdamWeight--init *****")
    super(AdamWeightDecayOptimizer, self).__init__(False, name)

    self.learning_rate = learning_rate
    self.beta_1 = beta_1
    self.beta_2 = beta_2
    self.epsilon = epsilon
    self.exclude_from_weight_decay = exclude_from_weight_decay

  def apply_gradients(self, grads_and_vars, global_step=None, name=None):
    assignments = []
    for (grad, param) in grads_and_vars:
      if grad is None or param is None:
        continue
      param_name = self._get_variable_name(param.name)

      m = tf.get_variable(
          name=param_name + "/adam_m",
          shape=param.shape.as_list(),
          dtype=tf.float32,
          trainable=False,
          initializer=tf.zeros_initializer())
      v = tf.get_variable(
          name=param_name + "/adam_v",
          shape=param.shape.as_list(),
          dtype=tf.float32,
          trainable=False,
          initializer=tf.zeros_initializer())

      # Standard Adam update.
      next_m = (
          tf.multiply(self.beta_1, m) + tf.multiply(1.0 - self.beta_1, grad))
      next_v = (
          tf.multiply(self.beta_2, v) + tf.multiply(1.0 - self.beta_2,
                                                    tf.square(grad)))

      update = next_m / (tf.sqrt(next_v) + self.epsilon)
 
      update_with_lr = self.learning_rate * update

      next_param = param - update_with_lr

      assignments.extend(
          [param.assign(next_param),
           m.assign(next_m),
           v.assign(next_v)])
    return tf.group(*assignments, name=name)


  def _get_variable_name(self, param_name):
    """Get the variable name from the tensor name."""
    m = re.match("^(.*):\\d+$", param_name)
    if m is not None:
      param_name = m.group(1)
    return param_name


def create_optimizer(loss, init_lr, num_train_steps):
  """Creates an optimizer training op."""
  global_step = tf.train.get_or_create_global_step()

  learning_rate = tf.constant(value=init_lr, shape=[], dtype=tf.float32)

  learning_rate = tf.train.polynomial_decay(
      learning_rate,
      global_step,
      num_train_steps,
      end_learning_rate=0.0,
      power=1.0,
      cycle=False)


  optimizer = AdamWeightDecayOptimizer(
      learning_rate=learning_rate,
      beta_1=0.9,
      beta_2=0.999,
      epsilon=1e-6,
      exclude_from_weight_decay=["LayerNorm", "layer_norm", "bias"])


# trainable=TRUE 需要训练的变量
  tvars = tf.trainable_variables()
  grads = tf.gradients(loss, tvars)

  (grads, _) = tf.clip_by_global_norm(grads, clip_norm=1.0)

  train_op = optimizer.apply_gradients(
      zip(grads, tvars), global_step=global_step)

  new_global_step = global_step + 1
  train_op = tf.group(train_op, [global_step.assign(new_global_step)])
  return train_op

def model_fn_builder(learning_rate, num_train_steps):
  """Returns `model_fn` closure for TPUEstimator."""

  def model_fn(features, labels, mode, params):  # pylint: disable=unused-argument
    """The `model_fn` for TPUEstimator."""

    tf.logging.info("*** Features ***")
    for name in sorted(features.keys()):
      tf.logging.info("  name = %s, shape = %s" % (name, features[name].shape))

    data_x = features["data_x"]
    data_y = features["data_y"]

    is_training = (mode == tf.estimator.ModeKeys.TRAIN)

    model = BertModel(data_x=data_x)

    loss = model.get_output(data_y)
    predictions_y = model.get_predictions_y()

#    tvars = tf.trainable_variables()


    output_spec = None
    if mode == tf.estimator.ModeKeys.TRAIN:
      train_op = create_optimizer(loss, learning_rate, num_train_steps)

      output_spec = tf.contrib.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=loss,
          train_op=train_op,
          scaffold_fn=None)
    elif mode == tf.estimator.ModeKeys.EVAL:

      def metric_fn(loss, data_y,    predictions_y):
        mean_loss = tf.metrics.mean(values=loss, name='example12')
        accuracy = tf.metrics.accuracy(labels=data_y, predictions=predictions_y, name='example13')
        f1_score = tf.contrib.metrics.f1_score(data_y, predictions_y, name='example11')

        return {
            "mean_loss": mean_loss,
            "accuracy": accuracy,
            "f1_score": f1_score,
        }

      eval_metrics = (metric_fn, [loss,  data_y,  predictions_y])
      output_spec = tf.contrib.tpu.TPUEstimatorSpec(
          mode=mode,
          loss=loss,
          eval_metrics=eval_metrics,
          scaffold_fn=scaffold_fn)
    else:
      raise ValueError("Only TRAIN and EVAL modes are supported: %s" % (mode))

    return output_spec

  return model_fn


def input_fn_builder():

  def input_fn(params):
    """The actual input function."""
    batch_size = params["batch_size"]

    #data1
    data_x = [1,1,0,0,0]
    data_y = [1,0,1,1,0]
    
    features = collections.OrderedDict()
    features["data_x"] = tf.train.Feature(int64_list=tf.train.Int64List(value=list(data_x)))
    features["data_y"] = tf.train.Feature(int64_list=tf.train.Int64List(value=list(data_y)))
    tf_example = tf.train.Example(features=tf.train.Features(feature=features))
    tf_example_str = tf_example.SerializeToString()
    
    #data2
    features_out = tf.parse_single_example(tf_example_str,
                   features={
                       'data_x': tf.FixedLenFeature([], tf.int64),
                       'data_y': tf.FixedLenFeature([], tf.int64),
                   })
    d =  {  1 , 2 , 3  } 
#    d = tf.data.Dataset.from_tensors(tf.constant(input_files))

#      d = tf.data.TFRecordDataset(input_files)
#      d = d.repeat()
    return d

  return input_fn




def main(_):
  tf.logging.set_verbosity(tf.logging.INFO)
  
  logger = logging.getLogger('tensorflow') 
  fh=logging.handlers.RotatingFileHandler('log/tmp_text.h', mode = 'a', maxBytes=102400, backupCount=3, encoding='utf-8')  
# formatter = logging.Formatter('%(asctime)s - %(filename)s[line:%(lineno)d] - %(levelname)s - %(message)s')  
  formatter = logging.Formatter('%(levelname)s:tensorflow:%(message)s')  
  fh.setFormatter(formatter)  
  logger.addHandler(fh)
  
  bert_config_file = "config/bert_config.json"
  bert_config = modeling.BertConfig.from_json_file(bert_config_file)

  output_dir = "tmp/pretraining_output"
  tf.gfile.MakeDirs(output_dir)

  is_per_host = tf.contrib.tpu.InputPipelineConfig.PER_HOST_V2
  run_config = tf.contrib.tpu.RunConfig(
      cluster=None,
      master=None,
      model_dir=output_dir,
      save_checkpoints_steps=1000,
      tpu_config=tf.contrib.tpu.TPUConfig(
          iterations_per_loop=1000,
          num_shards=8,
          per_host_input_for_training=is_per_host))

  model_fn = model_fn_builder(learning_rate=5e-5, num_train_steps=20)

  train_batch_size = 32
  estimator = tf.contrib.tpu.TPUEstimator(
      use_tpu=False,
      model_fn=model_fn,
      config=run_config,
      train_batch_size=32,
      eval_batch_size=8)

  train_input_fn = input_fn_builder()
  estimator.train(input_fn=train_input_fn, max_steps=20)

  eval_input_fn = input_fn_builder()
  result = estimator.evaluate(input_fn=eval_input_fn, steps=8)

  output_eval_file = os.path.join(output_dir, "eval_results.txt")
  with tf.gfile.GFile(output_eval_file, "w") as writer:
    tf.logging.info("***** Eval results *****")
    for key in sorted(result.keys()):
      tf.logging.info("  %s = %s", key, str(result[key]))
      writer.write("%s = %s\n" % (key, str(result[key])))



if __name__ == "__main__":
  tf.app.run()
