import jieba
import pickle
import jieba.analyse
import re
import os, sys
import pymysql



match_str = r"([.。!！?？；;，,\s+])"

#sql_rd = "SELECT `DCXN` FROM `dict_utf8_all` WHERE `DTXT`= \"%s\";"
sql_rd = "SELECT `DCXE` FROM `dict_utf8_update` WHERE `DTXT`= \"%s\";"



def soul_full_split(unique_list, pstr):
#    global unique_list;
#    global unique_len;
    
    line_sents = re.split(match_str,pstr)         # 保留分割符
#    print ("line_sents %s" % (str(line_sents)) )
    
    line_len = len(line_sents)
    for i in range(int((line_len+1)/2)):
        sent = line_sents[2*i]
#        print ("sent %s" % (str(sent)) )
        seg_list = jieba.cut(sent,cut_all=False)
#        print ("seg_list %s" % (str(seg_list)) )
        for j in seg_list:
            unique_list.append(j)
        if 2*i+1< line_len:
            unique_list.append(line_sents[2*i+1])
        
#    unique_len = len(unique_list)
#    print ("unique_list %s" % (str(unique_list)) )
    return;

def soul_full_db(unique_list, number_list):
#    global unique_list;
#    global unique_len;
#    global number_list;
#    global number_len;
# 打开数据库连接
    db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
    # 使用cursor()方法获取操作游标 
    cursor = db.cursor()

    unique_len = len(unique_list)
   
    try:
        for j in range(unique_len):
            unique_str = unique_list[j]
            dcxn = '0';
            # 执行SQL语句
            cursor.execute(sql_rd % (str(unique_str)))
            # 获取所有记录列表
            results = cursor.fetchall()
            for row in results:
                dcxn =  row[0]
#            print ("rd %s %s %s " % (str(j),unique_str, str(dcxn)) )
            number_list.append(dcxn)
    #       print ("%s %s %s" % (str(cnt), str(nstr), str(cstr)) )
    except:
            print ("Error: unable to fetch data")
    # 关闭数据库连接
    db.close()
#    number_len = len(number_list)
    return;




