
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
from _layer import mark_slice                    # 分块标记
from _tool  import convert_to_unicode


# In[1]:

# path
curPath      = os.path.abspath(os.path.dirname(__file__))
#rootPath    = os.path.split(curPath)[0]
dataPath     = os.path.join(curPath, "data")
csvPath      = os.path.join(dataPath, "csv")
#vocabPath    = os.path.join(csvPath,  "vocab")
vocabPath    = os.path.join(csvPath,  "vocab_bl")
#preprocessPath = os.path.join(csvPath,  "preprocess")
preprocessPath = os.path.join(csvPath,  "preprocess_bl")
markPath     = os.path.join(csvPath, "mark")
debugPath    = os.path.join(dataPath, "debug")

# file
train_csv_file  = os.path.join(csvPath, "atec_nlp_sim_train.csv")
test_csv_file   = os.path.join(csvPath, "atec_nlp_sim_test.csv")
vocab_file      = os.path.join(vocabPath, 'token_id.csv')             #不直接用
pre_train_file  = os.path.join(preprocessPath, "train_y.csv")  #只检查了一个文件
pre_test_file   = os.path.join(preprocessPath, "test_y.csv")  #只检查了一个文件
text_split_file = os.path.join(debugPath, 'text_split_{}.txt')




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
        
    result_list = [[],[],[],[]]
    for _t1, _t2, _p, _py, _y in zip(t1, t2, p, py, y):
        text1 = ''.join(_t1).replace('[S]', '').replace('0', '')
        text2 = ''.join(_t2).replace('[S]', '').replace('0', '')
        result_str = '%s->%s    %s\n    ["%s", "%s"],' % (_y, _py, _p, text1, text2)
        result_list[_y*2 + _py].append(result_str)
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
def save_preprocess_data(train_data, name=None):
    if not os.path.exists(preprocessPath):
        os.mkdir(preprocessPath)
    assert name is not None
    file_name  = os.path.join(preprocessPath, '{}.csv'.format(name))
    np.savetxt(file_name, train_data, fmt='%s')

def load_preprocess_data(data_dtype, name=None):
    assert name is not None
    file_name  = os.path.join(preprocessPath, '{}.csv'.format(name))
    f = open(file_name, 'r')
    return np.loadtxt(f, delimiter=' ', dtype=data_dtype)

def save_vocab_data(token_data, name=None):
    if not os.path.exists(vocabPath):
        os.mkdir(vocabPath)
    assert name is not None
    file_name  = os.path.join(vocabPath, '{}.csv'.format(name))
    np.savetxt(file_name, token_data, fmt='%s')

def load_vocab_data(data_dtype, name=None):
    assert name is not None
    file_name  = os.path.join(vocabPath, '{}.csv'.format(name))
    f = open(file_name, 'r')
    return np.loadtxt(f, delimiter=' ', dtype=data_dtype)

def save_mark_data(mark_data, name=None):
    if not os.path.exists(markPath):
        os.mkdir(markPath)
    assert name is not None
    if mark_data.ndim>2:
        shape_list = (mark_data.shape[0], -1)
        mark_data = tf.reshape(mark_data, shape_list)
    file_name  = os.path.join(markPath, '{}.csv'.format(name))
    np.savetxt(file_name, mark_data, fmt='%s')



# In[3]:

class LoadData:
    DATA_COLUMN1 = "sentence1"
    DATA_COLUMN2 = "sentence2"
    LABEL_COLUMN = "polarity"

    def __init__(self, token_chg:TokenizerChg, sample_size=None, train_enable=True, test_enable=True):
        self.token_chg = token_chg
        self.tokenizer = Tokenizer(num_words=None)
        #self.use_last_vocab = True
        self.train_enable = train_enable
        self.test_enable  = test_enable
        self.sample_size = sample_size
        self.max_vocab_len = 0
        self.max_seq_len = 0

        # load text
        if self.train_enable and not os.path.isfile(pre_train_file):
            self._load_data_from_csv()
            self._save_data_to_np()
        elif self.test_enable and not os.path.isfile(pre_test_file):
            self._load_data_from_csv()
            self._save_data_to_np()
        else:
            self._load_data_from_np()
            
        # text to id
        self._text_to_ids()
        
        # split block
        self._split_mark_block()

        
    def _load_data_from_csv(self):
        if self.train_enable:
            train = load_directory_data(train_csv_file)
            (self.train_t1, self.train_t2, self.train_m1, self.train_m2, self.train_cnt1, self.train_cnt2, self.train_y) = self._prepare_and_pad_df(train)
        
        if self.test_enable:
            test  = load_directory_data(test_csv_file)
            (self.test_t1,  self.test_t2,  self.test_m1,  self.test_m2, self.test_cnt1,  self.test_cnt2,  self.test_y) = self._prepare_and_pad_df(test)
    
        # 保存分词过程:
        if self.train_enable:
            self._save_tokens_parsing_info(train, fname="train")
        if self.test_enable:
            self._save_tokens_parsing_info(test, fname="test")

    
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
            self.train_t1   = load_preprocess_data(np.str, name='train_t1')
            self.train_t2   = load_preprocess_data(np.str, name='train_t2')
            self.train_m1   = load_preprocess_data(np.int, name='train_m1')
            self.train_m2   = load_preprocess_data(np.int, name='train_m2')
            self.train_cnt1 = load_preprocess_data(np.int, name='train_cnt1')
            self.train_cnt2 = load_preprocess_data(np.int, name='train_cnt2')
            self.train_y    = load_preprocess_data(np.int, name='train_y')
            self.max_seq_len = len(self.train_m1[0])
        if self.test_enable:
            self.test_t1    = load_preprocess_data(np.str, name='test_t1')
            self.test_t2    = load_preprocess_data(np.str, name='test_t2')
            self.test_m1    = load_preprocess_data(np.int, name='test_m1')
            self.test_m2    = load_preprocess_data(np.int, name='test_m2')
            self.test_cnt1  = load_preprocess_data(np.int, name='test_cnt1')
            self.test_cnt2  = load_preprocess_data(np.int, name='test_cnt2')
            self.test_y     = load_preprocess_data(np.int, name='test_y')
            self.max_seq_len = len(self.test_m1[0])

    def _save_data_to_np(self):
        if self.train_enable:
            save_preprocess_data(self.train_t1,   name='train_t1')
            save_preprocess_data(self.train_t2,   name='train_t2')
            save_preprocess_data(self.train_m1,   name='train_m1')
            save_preprocess_data(self.train_m2,   name='train_m2')
            save_preprocess_data(self.train_cnt1, name='train_cnt1')
            save_preprocess_data(self.train_cnt2, name='train_cnt2')
            save_preprocess_data(self.train_y,    name='train_y')
        if self.test_enable:
            save_preprocess_data(self.test_t1,   name='test_t1')
            save_preprocess_data(self.test_t2,   name='test_t2')
            save_preprocess_data(self.test_m1,   name='test_m1')
            save_preprocess_data(self.test_m2,   name='test_m2')
            save_preprocess_data(self.test_cnt1, name='test_cnt1')
            save_preprocess_data(self.test_cnt2, name='test_cnt2')
            save_preprocess_data(self.test_y,    name='test_y')

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
        #   先fit全部token, 否则id不准; token会自动排序, 英文在前面('[S]')
        #   现在不能改变词之后重新训练(id不对应)
        if os.path.isfile(vocab_file):
            self._token_arr = load_vocab_data(np.str, name='token_id')
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
            save_vocab_data(self._token_arr, name='token_id')
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
        
    def _save_tokens_parsing_info(self, df, fname=None):
        if not os.path.exists(debugPath):
            os.mkdir(debugPath)
        assert fname is not None
        file_name  = os.path.join(debugPath, text_split_file.format(fname))
        # 保存分词过程:
        cnt = 0
        if self.sample_size is None:
            sample_size = 1
            sample_step = 0
        else:
            sample_size = self.sample_size
            sample_step = 1
        with open(file_name,'w') as f:
            for ndx, row in df.iterrows():
                text1, text2 = row[LoadData.DATA_COLUMN1], row[LoadData.DATA_COLUMN2]
                for text in [text1, text2]:
                    if cnt>sample_size:
                        break
                    unique_list = self.token_chg.get_jieba_cut_list(text);
                    f.write("句子 %2d: %s\n" % (cnt, text))
                    f.write("jieba  : %s\n" % (unique_list))
                    mode0_list = self.token_chg.tokens_mode0(unique_list)
                    mode1_list = self.token_chg.tokens_mode1(mode0_list)
                    mode2_list = self.token_chg.tokens_mode2(mode1_list)
                    mode3_list = self.token_chg.tokens_mode3(mode2_list)
                    f.write("mode0_list : %s\n" % (mode0_list))
                    f.write("mode1_list : %s\n" % (mode1_list))
                    f.write("mode2_list : %s\n\n" % (mode2_list))
                    f.write("mode3_list : %s\n\n" % (mode3_list))
                    cnt=cnt+sample_step
            f.flush()
        return 0
    
    def _split_mark_block(self):
        if self.train_enable:
            self.train_mark1, self.train_mark2, self.train_block1, self.train_block2, self.train_scale1, self.train_scale2 = b2mts(
                        [self.train_m1, self.train_m2, self.train_cnt1, self.train_cnt2], 
                        self.max_seq_len)
            self.train_mark1 = mark_slice([self.train_mark1, self.train_cnt1])
            self.train_mark2 = mark_slice([self.train_mark2, self.train_cnt2])
            #save_mark_data(self.train_mark1, name='train_mark1')
            #save_mark_data(self.train_mark2, name='train_mark2')
        
        if self.test_enable:
            self.test_mark1, self.test_mark2, self.test_block1, self.test_block2, self.test_scale1, self.test_scale2 = b2mts(
                        [self.test_m1, self.test_m2, self.test_cnt1, self.test_cnt2], 
                        self.max_seq_len)
            self.test_mark1 = mark_slice([self.test_mark1, self.test_cnt1])
            self.test_mark2 = mark_slice([self.test_mark2, self.test_cnt2])
            #save_mark_data(self.test_mark1, name='test_mark1')
            #save_mark_data(self.test_mark2, name='test_mark2')
            #save_mark_data(self.test_block1, name='test_block1')
            #save_mark_data(self.test_block2, name='test_block2')
            #save_mark_data(self.test_scale1, name='test_scale1')
            #save_mark_data(self.test_scale2, name='test_scale2')
            
    def get_train_data(self):
        return (self.train_x1,     self.train_x2,       #编号
                self.train_m1,     self.train_m2,       #类型
                self.train_mark1,  self.train_mark2,    #块标记
                self.train_block1, self.train_block2,   #块ID
                self.train_scale1, self.train_scale2)   #字权重
                
    def get_test_data(self):
        return (self.test_x1,     self.test_x2,         #编号
                self.test_m1,     self.test_m2,         #类型
                self.test_mark1,  self.test_mark2,      #块标记
                self.test_block1, self.test_block2,     #块ID
                self.test_scale1, self.test_scale2)     #字权重


