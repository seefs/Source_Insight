import pymysql
import re
import sys


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )



n1 = 0
n2 = 0
n3 = 0  #6
n4 = 0
n5 = 0

z3 = sys.argv[1]
#r3 = sys.argv[2]  #4
#r4 = sys.argv[3]  #4
#r5 = sys.argv[4]  #4

w1 = ""
w2 = ""
w3 = ""
w4 = ""
w5 = ""

match_str = '_'
#match_sch_str = r'(.*)_'+n3+'_'+n4+'_(.*)'
match_sch_str  = r'(.*)\_.*\_'+z3+'\_.*\_'


#参数测试:
#print (n3 + ' ' + match_sch_str);


list = []          ## 空列表


nid_left  = "L%s_%s_%s"
nid_mid   = "M%s_%s_%s"
nid_right = "%s_%s_%sR"

def select_nval( nid ):
    return "(SELECT nval FROM sentence_path_num WHERE nid='" + nid + "')"

def sum_nval_str(n1, n2, n3, n4, n5):
    return select_nval( nid_left % (n1, n2, n3)) + "+" + select_nval( nid_mid % (n2, n3, n4)) + "+" + select_nval( nid_right % (n3, n4, n5)) 

def sum_nval(n1, n2, n3, n4, n5):
    return sum_nval_str(str(n1), str(n2), str(n3), str(n4), str(n5))


#函数测试:
#print (select_nval("a"));
#print (sum_nval_str("a", "b", "c", "d", "e"));
#print (sum_nval(2, 3, 4, 5, 6));
#print ("n1 %s; n2 %s; n3 %s; n4 %s; n5 %s; " % (str(n1), str(n2), str(n3), str(n4), str(n5)))



sql_rd    = "SELECT * FROM sentence_path_test;"


try:
    cursor = db.cursor()
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        cid =  row[0]
        cstr =  row[3]
        nstr =  row[4]
        searchObj = re.search(match_sch_str, nstr)
#        print ("a5" + match_sch_str)

        left_sents = re.split(match_str, searchObj.group(1))
        left_len = len(left_sents)
        if left_len < 1 :
            continue

#        print ("a3")


        n_sents = re.split(match_str,nstr)
        n_len = len(n_sents)
        if n_len < left_len+4 :
            continue
        n1 = n_sents[left_len-1]
        n2 = n_sents[left_len]
        n3 = n_sents[left_len+1]
        n4 = n_sents[left_len+2]
        n5 = n_sents[left_len+3]
        
        c_sents = re.split(match_str,cstr)
        c_len = len(c_sents)
        if c_len < left_len+4 :
            continue
        w1 = c_sents[left_len-1]
        w2 = c_sents[left_len]
        w3 = c_sents[left_len+1]
        w4 = c_sents[left_len+2]
        w5 = c_sents[left_len+3]
        
#        print ("ab")
#显示单词
#        test = "w1 %s; w2 %s; w3 %s; w4 %s; w5 %s; " % (w1, w2, w3, w4, w5)
#        print (test)
#        test = "n1 %s; n2 %s; n3 %s; n4 %s; n5 %s; " % (str(n1), str(n2), str(n3), str(n4), str(n5))
#        print (test)
#        print ("")
        
        sublist = []          ## 空列表
        sublist.append(cid)
        sublist.append(w3)
        sublist.append("'%s','%s','%s','%s','%s',%s,%s,%s,%s,%s" % (w1, w2, w3, w4, w5, str(n1), str(n2), str(n3), str(n4), str(n5)))
        sublist.append(n1)
        sublist.append(n2)
        sublist.append(n3)
        sublist.append(n4)
        sublist.append(n5)
        list.append(sublist)
#        print ("a4")

    #显示列表:
    list_len = len(list);
    for i in range(list_len):
        sublist = list[i]
        n1 = sublist[3]
        n2 = sublist[4]
        n3 = sublist[5]
        n4 = sublist[6]
        n5 = sublist[7]
#        print ("w : %s" %  sublist[2])
#        print ("w : %s" %  sublist[2])
    
        sql_wr = """INSERT INTO sentence_path_test_w VALUES(%s,'%s',%s,
                    %s,%s,%s,
                    %s,%s,%s,%s,
                	%s);""";
#        print (sql_wr  % (str(sublist[0]), sublist[1], 0, 
#                	    0,0,0,
#                	    0, 
#                	    0, 
#                	    0, 
#                	    0, 
#                	    sublist[2]
#                	    ));
        cursor.execute(sql_wr  % (str(sublist[0]), sublist[1], 0, 
                	    0,0,0,
                	    0, 
                	    0, 
                	    0, 
                	    0, 
                	    sublist[2]
                	    ))
#        # 提交到数据库执行
        db.commit()

            
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()




