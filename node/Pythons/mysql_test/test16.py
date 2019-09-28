#encoding=utf-8
from __future__ import unicode_literals
import sys
sys.path.append("../")


import jieba
import jieba.posseg
import jieba.analyse


print('='*40)
print('1. 分词')
print('-'*40)

dt = Tokenizer()

seg_list = dt.getFREQ(0,10)
print("Full Mode: " + "/ ".join(seg_list))  # 全模式
print("FREQ : " + jieba.FREQ)  # 全模式

