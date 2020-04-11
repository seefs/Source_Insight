#encoding=utf-8
import jieba
import jieba.posseg as pseg

p = open(r'D:\Save\SI\node\Pythons\py_test\jieba_cut_a.txt', 'r', encoding = 'gbk')
q = open(r'D:\Save\SI\node\Pythons\py_test\jieba_cut_b.txt', 'w', encoding = 'gbk') 

for line in p.readlines():
    words = pseg.cut(line)
    for word, flag in words:
        q.write(str(word) + str(flag) + "  ")
    q.write('\n')
    
