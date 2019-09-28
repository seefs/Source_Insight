import jieba
import pickle
import jieba.analyse
import re
import os, sys
import pymysql

names = {}
linenames = []
all_names = []
all_sentence = []#用来保存分词结果

#text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/baifamonv.TXT'
#text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/bibuhua.txt'
#text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/bihualiuzhao.txt'
#text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/feifengqinglong.txt'
#text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/fenglei.txt'
text_path = 'E:/Desktop/NLP/xiaojshuo_data/liangyusheng/huanjian.txt'


f = open(text_path,'r',errors='ignore')

#match_str = '(。|！|\!|\.|？|\?)'
match_str = '(。|！|，|\!|\.|？|\?)'
match_str = r"([.。!！?？；;，,\s+])"


#进行分词
for line in f.readlines():#逐行读取文本
    line_sents = re.split(match_str,line)         # 保留分割符
    new_sents = []
    
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
    
#print(all_sentence)



# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
# 使用cursor()方法获取操作游标 
cursor = db.cursor()

unique_len = 0
unique_base_str = ""
unique_str = ""
sql = ""
for i in range(len(all_sentence)):
    unique_list = all_sentence[i]
#    print(unique_list)

#    for j in range(len(unique_list)):
#        sent = unique_list[j]
#        print(sent)

# SQL 插入语句
    unique_len = len(unique_list)
    if unique_len < 3 :
        continue
    unique_str = unique_list[0]
    unique_base_str = unique_list[0]
    for j in range(unique_len-1):
        unique_str = unique_str + "_" + unique_list[j+1]
        unique_base_str = unique_base_str + unique_list[j+1]
#    sql = """INSERT INTO sentence_mini_all(CID,CCOUNT, 
    sql = """INSERT INTO sentence_mini_all(CCOUNT, 
             PSTR, CSTR, NSTR)
             VALUES (""" +  str(unique_len) +",'" + unique_base_str  +"','" + unique_str + "','')"
# str(i+1) + "," 
#    print(sql)

    try:
#        执行sql语句
       cursor.execute(sql)
#        提交到数据库执行
       db.commit()
    except:
#        如果发生错误则回滚
       db.rollback()
#
             
# 关闭数据库连接
db.close()



