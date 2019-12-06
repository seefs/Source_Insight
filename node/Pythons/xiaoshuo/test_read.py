import jieba
import pickle
import jieba.analyse
names = {}
linenames = []
all_names = []
sentence = []#用来保存分词结果

#text_path = 'E:/Desktop/NLP/xiaojshuo_data/longzu/longzu1.txt'
text_path = 'E:/Desktop/NLP/xiaojshuo_data/longzu/longzu1_small.txt'


#jieba.load_userdict('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_utf8.txt')

#jieba.analyse.set_stop_words('/Users/XH/Desktop/bishe/stopwords.txt')


#f = open(text_path,'r')
f = open(text_path,'r',errors='ignore')
#f1 = open('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_utf8.txt', encoding='UTF-8' ,errors='ignore')
f1 = open('E:/Desktop/NLP/xiaojshuo_data/longzu/data_name_ansi.txt' ,errors='ignore')


#读取各人物的名字
#for line in f1.readlines():
#    all_names.append(line.strip())
#print(all_names)

#进行分词
for line in f.readlines():#逐行读取文本
    seg_list = jieba.cut(line,cut_all=False)
    unique_list = []
    linenames.append([])
    for i in seg_list:
#        if i not in STOPWORD:
#            unique_list.append(i)
        unique_list.append(i)
        if i in all_names:
            if names.get(i) is None:
                names[i] += 1
    sentence.append(unique_list)
    print(unique_list)
    
#print(names)
#print(sentence)

