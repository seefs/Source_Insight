
import os
import re
import math
import chardet
import datetime
from tqdm import tqdm

from tensorflow.python import keras
from tensorflow.python.keras import backend as K
import pandas as pd
import tensorflow as tf
import numpy as np
import copy

from tensorflow.keras.preprocessing.text import Tokenizer
from tensorflow.keras.preprocessing.sequence import pad_sequences

# Custom Class
from _token import TokenizerChg
from _block import b2mts                         # 分块
from _block import m2n                           # m序列
from _tool  import convert_to_unicode



# In[1]:

# path
curPath      = os.path.abspath(os.path.dirname(__file__))
#rootPath    = os.path.split(curPath)[0]
dataPath     = os.path.join(curPath, "data")
csvPath      = os.path.join(dataPath, "csv")
vocabPath    = os.path.join(csvPath,  "{}",  "vocab")
preprocessPath = os.path.join(csvPath,  "{}",  "preprocess")
redataPath   = os.path.join(csvPath,  "redata_{}")
debugPath    = os.path.join(dataPath, "debug")

# file
sqlite3_file    = os.path.join(dataPath, "sqlite3", "data.db3")
train_csv_file  = os.path.join(csvPath,  "{}", "atec_nlp_sim_train.csv")
test_csv_file   = os.path.join(csvPath,  "{}", "atec_nlp_sim_test.csv")
vocab_file      = os.path.join(vocabPath, 'token_id.csv')    #词备份
pre_train_file  = os.path.join(csvPath,  "{}", "preprocess", "train_y.csv")     #只检查了一个文件, 判断句子是否已解析
pre_test_file   = os.path.join(csvPath,  "{}", "preprocess", "test_y.csv")      #只检查了一个文件, 判断句子是否已解析




# In[2]:

# Load all files from a directory in a DataFrame.
def load_directory_data(directory):
  data = {}
  data["sentence1"] = []
  data["sentence2"] = []
  data["polarity"] = []
  with tf.io.gfile.GFile(directory, "r") as f:
    while True:
      line = convert_to_unicode(f.readline())
      if not line:
        break
      line = line.strip()
      if not line:
        continue
      lines = line.split('\t')
      lines = [x.encode('utf-8').decode('utf-8-sig') for x in lines]
      if len(lines)==4:
        data["sentence1"].append(lines[1].replace(' ', ''))
        data["sentence2"].append(lines[2].replace(' ', ''))
        data["polarity"].append(lines[3])
  return pd.DataFrame.from_dict(data)


# save result
def save_pred_result(t1, t2, p, y, res_string, name=None):
    if not os.path.exists(debugPath):
        os.mkdir(debugPath)
    assert name is not None
    file_name  = os.path.join(debugPath, 'result_{}.txt'.format(name))
    py = tf.cast(tf.argmax(p, -1), tf.int64)
    py = np.array(py)
    y = tf.cast(y, tf.int64)
    y = np.array(y)

    sents_id = 0
    result_list = [[],[],[],[]]
    for _t1, _t2, _p, _py, _y in zip(t1, t2, p, py, y):
        text1 = ''.join(_t1).replace('_S', '').replace('0', '')
        text2 = ''.join(_t2).replace('_S', '').replace('0', '')
        text3 = ' '.join(_t1).replace('_S', '').replace('0', '')
        text4 = ' '.join(_t2).replace('_S', '').replace('0', '')
        result_str = '(%2i)%s->%s    %s\n    ["%s", "%s"],\n    ["%s", "%s"]' % (sents_id, _y, _py, _p, text1, text2, text3, text4)
        result_list[_y*2 + _py].append(result_str)
        sents_id = sents_id+1
    _sum  = len(t1)
    _sum0 = len(result_list[0]) + len(result_list[1])
    _sum1 = len(result_list[3]) + len(result_list[2])
    with open(file_name,'w') as f:
        f.write("result: %s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n" % (name, _sum, _sum0, len(result_list[0]), len(result_list[1]), 
                    _sum1, len(result_list[3]), len(result_list[2])))
        f.write("predict TN 0->0:%d\n" % (len(result_list[0])))
        f.write("predict FP 0->1:%d\n" % (len(result_list[1])))
        f.write("predict TP 1->1:%d\n" % (len(result_list[3])))
        f.write("predict FN 1->0:%d\n" % (len(result_list[2])))
        f.write("pred_sesult: %s\n\n" % (res_string))
        for i in result_list[3]: 
            f.write("%s\n" % (i))
        for i in result_list[0]: 
            f.write("%s\n" % (i))
        for i in result_list[2]: 
            f.write("%s\n" % (i))
        for i in result_list[1]: 
            f.write("%s\n" % (i))
        f.flush()
    print("save {} result cnt={}".format(name, len(y)))

# load/save preprocess
def save_np_data(data, fPath=None, fExt='csv', name=None):
    if not os.path.exists(fPath):
        os.mkdir(fPath)
    assert name is not None
    file_name  = os.path.join(fPath, '{}.{}'.format(name, fExt))
    np.savetxt(file_name, data, fmt='%s')
    
def load_np_data(data_dtype, fPath=None, fExt='csv', name=None):
    assert name is not None
    file_name  = os.path.join(fPath, '{}.{}'.format(name, fExt))
    f = open(file_name, 'r')
    return np.loadtxt(f, delimiter=' ', dtype=data_dtype)

# load/save preprocess
def save_preprocess_data(train_data, sub_path=None, name=None):
    save_np_data(train_data, fPath=preprocessPath.format(sub_path), name=name)

def load_preprocess_data(data_dtype, sub_path=None, name=None):
    return load_np_data(data_dtype, fPath=preprocessPath.format(sub_path), name=name)

def save_vocab_data(token_data, sub_path=None, name=None):
    save_np_data(token_data, fPath=vocabPath.format(sub_path), name=name)

def load_vocab_data(data_dtype, sub_path=None, name=None):
    return load_np_data(data_dtype, fPath=vocabPath.format(sub_path), name=name)

def save_re_data(train_data, cnt_info='', name=None):
    save_np_data(train_data, fPath=redataPath.format(cnt_info), name=name)

#def load_re_data(data_dtype, name=None):
#    return load_np_data(data_dtype, fPath=redataPath, name=name)

def save_debug_data(debug_data, name=None):
    save_np_data(debug_data, fPath=debugPath, fExt='txt', name=name)
    
def load_debug_data(data_dtype, name=None):
    return load_np_data(data_dtype, fPath=debugPath, fExt='txt', name=name)



# In[3]:

class LoadData:
    DATA_COLUMN1 = "sentence1"
    DATA_COLUMN2 = "sentence2"
    LABEL_COLUMN = "polarity"

    def __init__(self, sub_path='', sample_size=None, train_enable=True, test_enable=True):
        self.token_chg = TokenizerChg(db_path=sqlite3_file)
        self.tokenizer = Tokenizer(num_words=None)
        self.train_enable  = train_enable
        self.test_enable   = test_enable
        self.sample_size   = sample_size
        self.max_vocab_len = 0
        self.max_seq_len   = 0
        self.sub_path      = sub_path

        # load text
        if self.train_enable and not os.path.isfile(pre_train_file.format(self.sub_path)):
            self._load_data_from_csv()
            self._save_data_to_np()
        elif self.test_enable and not os.path.isfile(pre_test_file.format(self.sub_path)):
            self._load_data_from_csv()
            self._save_data_to_np()
        else:
            self._load_data_from_np()
            
        # text to id
        self._text_to_ids()
        
        # add hide mode
        self._add_hide_mode()

        # 分块用到cnt, 暂时只能这里改dim
        if self.train_enable:
            self.train_cnt1 = tf.expand_dims(self.train_cnt1, -1)
            self.train_cnt2 = tf.expand_dims(self.train_cnt2, -1)
        if self.test_enable:
            self.test_cnt1 = tf.expand_dims(self.test_cnt1, -1)
            self.test_cnt2 = tf.expand_dims(self.test_cnt2, -1)
        
    def _add_hide_mode(self, debug=False):
        # add m2n
        self.max_modes_len = 0
        if self.train_enable:
            #n1
            self.train_n1,self.train_mi1 = m2n(self.train_m1, self.train_cnt1, max_space=5, debug=debug)
            max_nlen = max([len(i) for i in self.train_n1])
            self.max_modes_len = max(self.max_modes_len, max_nlen)
            #n2
            self.train_n2,self.train_mi2 = m2n(self.train_m2, self.train_cnt2, max_space=5, debug=debug)
            max_nlen = max([len(i) for i in self.train_n2])
            self.max_modes_len = max(self.max_modes_len, max_nlen)
            #只保存, 不读
            #save_preprocess_data(self.train_n1, sub_path=self.sub_path,   name='train_n1')
            #save_preprocess_data(self.train_n2, sub_path=self.sub_path,   name='train_n2')
        if self.test_enable:
            #n1
            self.test_n1,self.test_mi1 = m2n(self.test_m1, self.test_cnt1, max_space=5, debug=debug)
            max_nlen = max([len(i) for i in self.test_n1])
            self.max_modes_len = max(self.max_modes_len, max_nlen)
            #n2
            self.test_n2,self.test_mi2 = m2n(self.test_m2, self.test_cnt2, max_space=5, debug=debug)
            max_nlen = max([len(i) for i in self.test_n2])
            self.max_modes_len = max(self.max_modes_len, max_nlen)
            #只保存, 不读
            #save_preprocess_data(self.test_n1, sub_path=self.sub_path,   name='test_n1')
            #save_preprocess_data(self.test_n2, sub_path=self.sub_path,   name='test_n2')
            
        if self.train_enable:
            self.train_n1 = pad_sequences(self.train_n1, maxlen=self.max_modes_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.train_n2 = pad_sequences(self.train_n2, maxlen=self.max_modes_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.train_mi1 = pad_sequences(self.train_mi1, maxlen=self.max_seq_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.train_mi2 = pad_sequences(self.train_mi2, maxlen=self.max_seq_len, dtype='int32', padding='post', truncating='post', value=0.)
        if self.test_enable:
            self.test_n1 = pad_sequences(self.test_n1, maxlen=self.max_modes_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.test_n2 = pad_sequences(self.test_n2, maxlen=self.max_modes_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.test_mi1 = pad_sequences(self.test_mi1, maxlen=self.max_seq_len, dtype='int32', padding='post', truncating='post', value=0.)
            self.test_mi2 = pad_sequences(self.test_mi2, maxlen=self.max_seq_len, dtype='int32', padding='post', truncating='post', value=0.)
            
        
    def _load_data_from_csv(self):
        if self.train_enable:
            train = load_directory_data(train_csv_file.format(self.sub_path))
            (self.train_t1, self.train_t2, self.train_m1, self.train_m2, self.train_cnt1, self.train_cnt2, self.train_y) = self._prepare_and_pad_df(train)
        
        if self.test_enable:
            test  = load_directory_data(test_csv_file.format(self.sub_path))
            (self.test_t1,  self.test_t2,  self.test_m1,  self.test_m2, self.test_cnt1,  self.test_cnt2,  self.test_y) = self._prepare_and_pad_df(test)
    
    def _prepare_and_pad_df(self, input_data):
        # reindex
        input_data = input_data.reindex((input_data[LoadData.DATA_COLUMN1].str.len() + input_data[LoadData.DATA_COLUMN2].str.len()).sort_values().index)
        # head
        if self.sample_size is not None:
            input_data = input_data.head(self.sample_size)
            # input_data = map(lambda df: df.sample(sample_size), [input_data])
        # prepare_cn
        (t1, t2, m1, m2, cnt1, cnt2, y) = self._prepare_cn(input_data)
        # pad
        (t1, t2, m1, m2) = map(self._pad,  [t1, t2, m1, m2])
        return t1, t2, m1, m2, cnt1, cnt2, y
        
    def _load_data_from_np(self):
        if self.train_enable:
            self.train_t1   = load_preprocess_data(np.str, sub_path=self.sub_path, name='train_t1')
            self.train_t2   = load_preprocess_data(np.str, sub_path=self.sub_path, name='train_t2')
            self.train_m1   = load_preprocess_data(np.int, sub_path=self.sub_path, name='train_m1')
            self.train_m2   = load_preprocess_data(np.int, sub_path=self.sub_path, name='train_m2')
            self.train_cnt1 = load_preprocess_data(np.int, sub_path=self.sub_path, name='train_cnt1')
            self.train_cnt2 = load_preprocess_data(np.int, sub_path=self.sub_path, name='train_cnt2')
            self.train_y    = load_preprocess_data(np.int, sub_path=self.sub_path, name='train_y')
            self.max_seq_len = len(self.train_m1[0])
            self.sents_len  = len(self.train_m1)
        if self.test_enable:
            self.test_t1    = load_preprocess_data(np.str, sub_path=self.sub_path, name='test_t1')
            self.test_t2    = load_preprocess_data(np.str, sub_path=self.sub_path, name='test_t2')
            self.test_m1    = load_preprocess_data(np.int, sub_path=self.sub_path, name='test_m1')
            self.test_m2    = load_preprocess_data(np.int, sub_path=self.sub_path, name='test_m2')
            self.test_cnt1  = load_preprocess_data(np.int, sub_path=self.sub_path, name='test_cnt1')
            self.test_cnt2  = load_preprocess_data(np.int, sub_path=self.sub_path, name='test_cnt2')
            self.test_y     = load_preprocess_data(np.int, sub_path=self.sub_path, name='test_y')
            self.max_seq_len = len(self.test_m1[0])
            self.sents_len  = len(self.test_m1)

    def _save_data_to_np(self):
        if self.train_enable:
            self.sents_len  = len(self.train_m1)
            save_preprocess_data(self.train_t1, sub_path=self.sub_path,   name='train_t1')
            save_preprocess_data(self.train_t2, sub_path=self.sub_path,   name='train_t2')
            save_preprocess_data(self.train_m1, sub_path=self.sub_path,   name='train_m1')
            save_preprocess_data(self.train_m2, sub_path=self.sub_path,   name='train_m2')
            save_preprocess_data(self.train_cnt1, sub_path=self.sub_path, name='train_cnt1')
            save_preprocess_data(self.train_cnt2, sub_path=self.sub_path, name='train_cnt2')
            save_preprocess_data(self.train_y, sub_path=self.sub_path,    name='train_y')
        if self.test_enable:
            self.sents_len  = len(self.test_m1)
            save_preprocess_data(self.test_t1, sub_path=self.sub_path,   name='test_t1')
            save_preprocess_data(self.test_t2, sub_path=self.sub_path,   name='test_t2')
            save_preprocess_data(self.test_m1, sub_path=self.sub_path,   name='test_m1')
            save_preprocess_data(self.test_m2, sub_path=self.sub_path,   name='test_m2')
            save_preprocess_data(self.test_cnt1, sub_path=self.sub_path, name='test_cnt1')
            save_preprocess_data(self.test_cnt2, sub_path=self.sub_path, name='test_cnt2')
            save_preprocess_data(self.test_y, sub_path=self.sub_path,    name='test_y')

    def _prepare_cn(self, df):
        t1, t2, m1, m2, cnt1, cnt2, y = [], [], [], [], [], [], []
        with tqdm(total=df.shape[0], unit_scale=True) as pbar:
            for ndx, row in df.iterrows():
                text1, text2, label = row[LoadData.DATA_COLUMN1], row[LoadData.DATA_COLUMN2], row[LoadData.LABEL_COLUMN]
                tokens1 = self.token_chg.tokens_mode2(text=text1)
                tokens2 = self.token_chg.tokens_mode2(text=text2)
                #print("tmp_list:", tokens1)
                modes1  = [int(mode) for item in tokens1 for mode in item[1:]]
                modes2  = [int(mode) for item in tokens2 for mode in item[1:]]
                self.max_seq_len = max(self.max_seq_len, len(modes1), len(modes2))
                #用modes计算总长
                tokens1 = [item[0] if pos==0 else '_S' for item in tokens1 for pos in range(len(item[1:]))]
                tokens2 = [item[0] if pos==0 else '_S' for item in tokens2 for pos in range(len(item[1:]))]
                #print("\ntmp_list:", tokens1)
                t1.append(tokens1)
                t2.append(tokens2)
                m1.append(modes1)
                m2.append(modes2)
                cnt1.append(len(modes1))
                cnt2.append(len(modes2))
                y.append(int(label))
                pbar.update()
        return np.array(t1), np.array(t2), np.array(m1), np.array(m2), np.array(cnt1), np.array(cnt2), np.array(y)
    
    def _text_to_ids(self):
        # token 转换为 token_id
        #   先fit全部token, 否则id不准; token会自动排序, 英文在前面('_S')
        #   现在不能改变词之后重新训练(id不对应)
        if os.path.isfile(vocab_file.format(self.sub_path)):
            self._token_arr = load_vocab_data(np.str, sub_path=self.sub_path, name='token_id')
            self.tokenizer.fit_on_texts(self._token_arr)
        else:
            if self.train_enable:
                self.tokenizer.fit_on_texts(self.train_t1.flatten())
                self.tokenizer.fit_on_texts(self.train_t2.flatten())
            if self.test_enable:
                self.tokenizer.fit_on_texts(self.test_t1.flatten())
                self.tokenizer.fit_on_texts(self.test_t2.flatten())
            
            #print("--token--word_counts", self.tokenizer.word_counts)         #数量统计--list
            #print("--token--word_docs", self.tokenizer.word_docs)             #数量统计--dick
            #print("--token--word_index", self.tokenizer.word_index)           #字到index--dick
            #print("--token--document_count", self.tokenizer.document_count)   #总数
            self._token_arr = np.array(list(self.tokenizer.word_index))
            save_vocab_data(self._token_arr, sub_path=self.sub_path, name='token_id')
        self.max_vocab_len = len(self.tokenizer.word_counts) + 1               #实际总数(去重)
        
        # token_id
        if self.train_enable:
            self.train_x1 = self._prepare_token_ids(self.train_t1)
            self.train_x2 = self._prepare_token_ids(self.train_t2)
            (self.train_x1, self.train_x2) = map(self._pad,  [self.train_x1, self.train_x2])
        if self.test_enable:
            self.test_x1  = self._prepare_token_ids(self.test_t1)
            self.test_x2  = self._prepare_token_ids(self.test_t2)
            (self.test_x1, self.test_x2) = map(self._pad,  [self.test_x1, self.test_x2])
            
    def _prepare_token_ids(self, _t):
        # result:
        #   format [[n1],[n2],..]
        token_ids = [self.tokenizer.texts_to_sequences(_row) for _row in _t]
        token_ids = [[i for t in item for i in t] for item in token_ids]
        return np.array(token_ids)
        
    def _pad(self, ids):
        x= []
        for i in range(len(ids)):
            tids = ids[i]
            tids_len = len(tids)
            tids = tids[:min(tids_len, self.max_seq_len)]
            if (self.max_seq_len - tids_len)>0:
                tids = np.concatenate([tids, [0] * (self.max_seq_len - tids_len)])
            x.append(np.array(tids))
        return np.array(x)
    
    def get_train_data(self):
        return (self.train_x1,     self.train_x2,       #编号
                self.train_m1,     self.train_m2,       #类型
                self.train_mi1,    self.train_mi2,
                self.train_n1,     self.train_n2,       #类型+隐藏类型
                self.train_cnt1,   self.train_cnt2)
                
    def get_test_data(self):
        return (self.test_x1,     self.test_x2,         #编号
                self.test_m1,     self.test_m2,         #类型
                self.test_mi1,    self.test_mi2,
                self.test_n1,     self.test_n2,         #类型+隐藏类型
                self.test_cnt1,   self.test_cnt2)
                
    def get_train_slices(self):
        return (self.train_x1,     self.train_x2,       #编号
                self.train_m1,     self.train_m2,       #类型
                self.train_mi1,    self.train_mi2,
                self.train_n1,     self.train_n2,       #类型+隐藏类型
                self.train_cnt1,   self.train_cnt2, 
                self.train_y)
                
    def get_test_slices(self):
        return (self.test_x1,     self.test_x2,         #编号
                self.test_m1,     self.test_m2,         #类型
                self.test_mi1,    self.test_mi2,
                self.test_n1,     self.test_n2,         #类型+隐藏类型
                self.test_cnt1,   self.test_cnt2, 
                self.test_y)
                
    def show_data_shape(self):
        if self.train_enable:
            #print("========== train_t1", self.train_t1.shape)         # 中文字符 (用不上)
            #print("           train_t2", self.train_t2.shape)
            print("           train_x1", self.train_x1.shape)         # 字编号
            print("           train_x2", self.train_x2.shape)
            print("           train_m1", self.train_m1.shape)         # 字类型, 原类型:0~16,17,26 训练时类型:0~16
            print("           train_m2", self.train_m2.shape)
            print("          train_mi1", self.train_mi1.shape)
            print("          train_mi2", self.train_mi2.shape)
            print("           train_n1", self.train_n1.shape)
            print("           train_n2", self.train_n2.shape)
            print("         train_cnt1", self.train_cnt1.shape)       # 字长
            print("         train_cnt2", self.train_cnt2.shape)
            print("            train_y", self.train_y.shape)          # 标签
            
        if self.test_enable:
            #print("=========== test_t1", self.test_t1.shape)          # 中文字符 (用不上)
            #print("            test_t2", self.test_t2.shape)
            print("            test_x1", self.test_x1.shape)          # 字编号
            print("            test_x2", self.test_x2.shape)
            print("            test_m1", self.test_m1.shape)          # 字类型, 原类型:0~16,17,26 训练时类型:0~16
            print("            test_m2", self.test_m2.shape)
            print("           test_mi1", self.test_mi1.shape)
            print("           test_mi2", self.test_mi2.shape)
            print("            test_n1", self.test_n1.shape)
            print("            test_n2", self.test_n2.shape)
            print("          test_cnt1", self.test_cnt1.shape)        # 字长
            print("          test_cnt2", self.test_cnt2.shape)
            print("             test_y", self.test_y.shape)
            
        # 实际字长:
        print("        sents_len", self.sents_len)
        print("        max_vocab", self.max_vocab_len)
        print("      max_seq_len", self.max_seq_len)
        print("    max_modes_len", self.max_modes_len)

#        print("-----------train_m1", self.train_m1)
#        print("-----------train_m2", self.train_m2)

#        print("-----------train_n1", self.train_n1)
#        print("-----------train_n2", self.train_n2)
#        print("-----------train_n1", np.concatenate([self.train_n1,self.train_n2],axis=-1))

#        print("-----------train_t1", self.train_t1)
#        print("-----------train_t2", self.train_t2)
#        print("-----------train_t1", np.concatenate([self.train_t1,self.train_t2],axis=-1))

#        print("            train_y", self.train_y)

                


