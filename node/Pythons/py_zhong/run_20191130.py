

import sys
import os
import math
import tensorflow as tf
import numpy as np
from tensorflow.python import keras
from tensorflow.python.keras import backend as K
#import copy



class memory(object):
    def __init__(self, db_path=None, debug_log=False):
        self.token_dict = {}
        self.mem_dict = {}
        self.equal_dict = {}
        self.relation_dict = {}

    def add_token(self, token_list):
        for (txt, mode) in token_list:
            self.token_dict[txt] = mode

    def add_txt(self, txt_list):
        x = [self.token_dict.get(txt,0) for txt in txt_list]
        print('x', x)

    def add_tree(self, pre, next):
        cnt = self.mem_dict.get(pre, 0)
        self.mem_dict[pre+'_next'+str(cnt)]=next
        self.mem_dict[pre]=cnt+1

    def add_equal(self, pre, next):
        cnt = self.equal_dict.get(pre, 0)
        self.equal_dict[pre+'_next'+str(cnt)]=next
        self.equal_dict[pre]=cnt+1
#        print('self.equal_dict', self.equal_dict)
            
    def add_compare(self, pre, next, rel):
        cnt = self.relation_dict.get(pre, 0)
        for i in range(cnt):
            (p, re) = self.relation_dict[pre+'_next'+str(cnt)]
            if p==pre:
                self.relation_dict[pre+'_next'+str(cnt)]=(next, rel)
        else:
            self.relation_dict[pre+'_next'+str(cnt)]=(next, rel)
            self.relation_dict[pre]=cnt+1
#        print('self.relation_dict', self.relation_dict)
            
    def add_question(self, pre):
        cnt = self.equal_dict.get(pre, 0)
        if cnt>0:
            return self.equal_dict.get(pre+'_next'+str(cnt-1), '')
        else:
            cnt = self.relation_dict.get(pre, 0)
            if cnt>0:
                return self.relation_dict.get(pre+'_next'+str(cnt-1), '')
        return 'err'


def run_compare():
    mem = memory()
    mem.add_token([('圆',6),('的',11),('半径',4),('是',13),('14',5),('米',14)])
    mem.add_token([('圆',6),('的',11),('直径',4),('是',13),('圆',6),('的',11),('半径',4),('的',11),('2',5),('倍',12)])
    mem.add_token([('圆',6),('的',11),('直径',4),('是',13),('多少',5)])
#    print('mem.token', mem.token_dict)
    
    # 自动解过分复杂, 还是手动添加了
    mem.add_tree('圆', '半径')
    mem.add_equal('半径', '14米')
    mem.add_tree('圆', '直径')
    mem.add_tree('圆', '半径')
    mem.add_compare('直径', '半径', '2倍')
    ret = mem.add_question('半径')
    print('圆的半径', ret)
    ret = mem.add_question('直径')
    print('圆的直径', ret)



    
run_compare()








