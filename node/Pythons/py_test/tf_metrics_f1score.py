

import numpy as np
import tensorflow as tf


# Calculate evaluation metrics. 
def metric_fn(label_ids, predicted_labels):
    accuracy = tf.metrics.accuracy(label_ids, predicted_labels)
    f1_score = tf.contrib.metrics.f1_score(
        label_ids,
        predicted_labels)
    auc = tf.metrics.auc(
        label_ids,
        predicted_labels)
    recall = tf.metrics.recall(
        label_ids,
        predicted_labels)
    precision = tf.metrics.precision(
        label_ids,
        predicted_labels) 
    true_pos = tf.metrics.true_positives(
        label_ids,
        predicted_labels)
    true_neg = tf.metrics.true_negatives(
        label_ids,
        predicted_labels)   
    false_pos = tf.metrics.false_positives(
        label_ids,
        predicted_labels)  
    false_neg = tf.metrics.false_negatives(
        label_ids,
        predicted_labels)
    return {
        "eval_accuracy": accuracy,
        "f1_score": f1_score,
        "auc": auc,
        "precision": precision,
        "recall": recall,
        "true_positives": true_pos,
        "true_negatives": true_neg,
        "false_positives": false_pos,
        "false_negatives": false_neg
    }



scr_dict_x = [1, 0, 0, 0, 0]
scr_dict_y = [1, 0, 0, 0, 1]



#总的5个(正确4)
print(get_metrics(scr_dict_x, scr_dict_y))





