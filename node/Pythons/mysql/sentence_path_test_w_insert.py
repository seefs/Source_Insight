import pymysql
import re


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )

match_str = '_'
match_sch_str = r'(.*)_6_10_(.*)'


n1 = 0
n2 = 0
n3 = 6
n4 = 10
n5 = 0

r3 = 4

w1 = ""
w2 = ""
w3 = ""
w4 = ""
w5 = ""

list = []          ## 空列表

sql_rd    = "SELECT * FROM sentence_path_test;"
#sql_rdnvl_left = "SELECT nval FROM sentence_path_num WHERE nid=""L%s_%s_%s"");"
#sql_rdnvl_mid = "SELECT nval FROM sentence_path_num WHERE nid=""M%s_%s_%s"");"
#sql_rdnvl_right = "SELECT nval FROM sentence_path_num WHERE nid=""%s_%s_%sR"");"
#sql_wr = "INSERT INTO sentence_path_layer VALUES(\"%s\", 0, 0, %s);"


try:
    cursor = db.cursor()
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        cid =  row[0]
        nstr =  row[4]
        searchObj = re.search(match_sch_str, nstr)

        left_sents = re.split(match_str, searchObj.group(1))
        left_len = len(left_sents)
        if left_len < 2 :
            continue

        right_sents = re.split(match_str, searchObj.group(2))
        right_len = len(right_sents)
        if right_len < 1 :
            continue

        n1 = left_sents[left_len-2]
        n2 = left_sents[left_len-1]
        n5 = right_sents[0]

        cstr =  row[3]
        c_sents = re.split(match_str,cstr)
        c_len = len(c_sents)
        if c_len < left_len+3 :
            continue
            
        w1 = c_sents[left_len-2]
        w2 = c_sents[left_len-1]
        w3 = c_sents[left_len]
        w4 = c_sents[left_len+1]
        w5 = c_sents[left_len+2]
        
#显示单词
#        test = "w1 %s; w2 %s; w3 %s; w4 %s; w5 %s; " % (w1, w2, w3, w4, w5)
#        print (test)
#        test = "n1 %s; n2 %s; n3 %s; n4 %s; n5 %s; " % (str(n1), str(n2), str(n3), str(n4), str(n5))
#        print (test)
#        print ("")
        
        sublist = []          ## 空列表
        sublist.append(cid)
        sublist.append(w3)
        sublist.append("L%s_%s_%s" % (str(n1), str(n2), str(n3)))
        sublist.append("M%s_%s_%s" % (str(n2), str(n3), str(n4)))
        sublist.append("%s_%s_%sR" % (str(n3), str(n4), str(n5)))
        sublist.append("L%s_%s_%s" % (str(n1), str(n2), str(r3)))
        sublist.append("M%s_%s_%s" % (str(n2), str(r3), str(n4)))
        sublist.append("%s_%s_%sR" % (str(r3), str(n4), str(n5)))
        sublist.append("'%s','%s','%s','%s','%s',%s,%s,%s,%s,%s" % (w1, w2, w3, w4, w5, str(n1), str(n2), str(n3), str(n4), str(n5)))
        list.append(sublist)

    #显示列表:
    list_len = len(list);
    for i in range(list_len):
        sublist = list[i]
#        print ("w : %s" %  sublist[8])
    
        sql_wr = """INSERT INTO sentence_path_test_w VALUES(%s,'%s',%s,%s,0,0,
                	(SELECT nval FROM sentence_path_num WHERE nid='%s')+
                	(SELECT nval FROM sentence_path_num WHERE nid='%s')+
                	(SELECT nval FROM sentence_path_num WHERE nid='%s'),
                	(SELECT nval FROM sentence_path_num WHERE nid='%s')+
                	(SELECT nval FROM sentence_path_num WHERE nid='%s')+
                	(SELECT nval FROM sentence_path_num WHERE nid='%s'),
                	0,
                	0,
                	%s);""";
#        print (sql_wr  % (str(sublist[0]), sublist[1], str(n3), str(r3),
#                	    sublist[2], sublist[3], sublist[4], 
#                	    sublist[5], sublist[6], sublist[7], 
#                	    sublist[8]
#                	    ));
        cursor.execute(sql_wr  % (str(sublist[0]), sublist[1], str(n3), str(r3),
                	    sublist[2], sublist[3], sublist[4], 
                	    sublist[5], sublist[6], sublist[7], 
                	    sublist[8]
                	    ))
#        # 提交到数据库执行
        db.commit()

            
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()




