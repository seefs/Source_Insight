
# -*- encoding=utf-8 -*-

import jieba.posseg as pseg
import jieba.analyse


text = "我是商家，开通了花呗，为什么付款人扫码后不能用花呗"
unique = pseg.cut(text)
print('unique:  %s' % str(list(unique)))


text = "我是商家，开通了花呗，为什么付款人扫码后不能用花呗"
unique = jieba.lcut(text,HMM=False)
print('unique:  %s' % str(unique))

    
text = "我是商家，开通了花呗，为什么付款人扫码后不能用花呗"
unique = jieba.cut(text,cut_all=False)
print('unique:  %s' % str(list(unique)))


# 输出:
#    unique:  [pair('我', 'r'), pair('是', 'v'), pair('商家', 'n'), pair('，', 'x'), pair('开通', 'v'), 
#            pair('了', 'ul'), pair('花', 'v'), pair('呗', 'y'), pair('，', 'x'), pair('为什么', 'r'), pair('付款人', 'n'), 
#            pair('扫码', 'n'), pair('后', 'f'), pair('不能', 'v'), pair('用花', 'n'), pair('呗', 'y')]
#
#    unique:  ['我', '是', '商家', '，', '开通', '了', '花', '呗', '，', 
#            '为什么', '付款人', '扫', '码', '后', '不能', '用', '花', '呗']
#
#    unique:  ['我', '是', '商家', '，', '开通', '了', '花', '呗', '，', 
#            '为什么', '付款人', '扫码', '后', '不能', '用花', '呗']



