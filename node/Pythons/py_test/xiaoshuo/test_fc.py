import jieba
import pickle
import jieba.analyse
import re
import os, sys

names = {}
linenames = []
all_names = []
all_sentence = []#用来保存分词结果

#text_path = 'E:/Desktop/NLP/xiaojshuo_data/longzu/longzu1.txt'
text_path = 'E:/Desktop/NLP/xiaojshuo_data/longzu/longzu1_small_ansi.txt'

#jieba.load_userdict('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_utf8.txt')

#jieba.analyse.set_stop_words('/Users/XH/Desktop/bishe/stopwords.txt')


#f = open(text_path,'r')
f = open(text_path,'r',errors='ignore')

#f1 = open('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_utf8.txt', encoding='UTF-8' ,errors='ignore')
#f1 = open('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_ansi.txt' ,errors='ignore')

#match_str = '(。|！|\!|\.|？|\?)'
match_str = '(。|！|，|\!|\.|？|\?)'
match_str = r"([.。!！?？；;，,\s+])"


#读取各人物的名字
#for line in f1.readlines():
#    all_names.append(line.strip())
    
#进行分词
for line in f.readlines():#逐行读取文本
    line_sents = re.split(match_str,line)         # 保留分割符
    new_sents = []
#    for i in range(int(len(line_sents)/2)):
##        sent = line_sents[2*i] + line_sents[2*i+1]
#        sent = line_sents[2*i]
#        new_sents.append(sent)
#    print(new_sents)

    
    for i in range(int(len(line_sents)/2)):
        sent = line_sents[2*i]
        seg_list = jieba.cut(sent,cut_all=False)
        unique_list = []
        linenames.append([])
        for i in seg_list:
            unique_list.append(i)
                    
        all_sentence.append(unique_list)
#        print(unique_list)
#        print("unique_list len="+str(len(unique_list)))
    
print(all_sentence)


# 打开文件
fd = os.open("E:/Desktop/NLP/xiaojshuo_data/longzu/test_write.txt",os.O_RDWR|os.O_CREAT)
# 写入字符串
ret = os.write(fd,str(all_sentence).encode())
#ret = os.write(fd,all_sentence)
# 输入返回值
print ("写入的位数为: ")
print  (ret)
print ("写入成功")
# 关闭文件
os.close(fd)
print ("关闭文件成功!!")



