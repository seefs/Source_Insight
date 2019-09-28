import pymysql
import re


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
# 使用cursor()方法获取操作游标 
cursor = db.cursor()

match_str = '_'

dict = {}

sql_rd = "SELECT NSTR FROM sentence_path_all WHERE NSTR is not null;"
sql_wr = "INSERT INTO sentence_path_layer VALUES(\"%s\", 0, 0, %s);"


i_1 = 0
i_2 = 0
i_3 = 0
i_4 = 0
n1_id = '%s'
n2_id = '%s_%s'
n3_id = '%s_%s_%s'
n4_id = '%s_%s_%s_%s'

count = 0;

try:
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        line =  row[0]
        line_sents = re.split(match_str,line)         # 保留分割符
        line_len = len(line_sents)
        if line_len < 4 :
            continue
        
        i_1 = line_sents[0]
        for i in range(line_len-1):
            i_2 = line_sents[i + 1]
#            print (n2_id % (str(i_1), str(i_2)))
            dict[n2_id % (str(i_1), str(i_2))] = dict.get(n2_id % (str(i_1), str(i_2)), 0) + 1
            i_1 = i_2
            
        i_1 = line_sents[0]
        i_2 = line_sents[1]
        for i in range(line_len-2):
            i_3 =  line_sents[i + 2]
            dict[n3_id % (str(i_1), str(i_2), str(i_3))] = dict.get(n3_id % (str(i_1), str(i_2), str(i_3)), 0) + 1
#            print (n3_id % (str(i_1), str(i_2), str(i_3)))
            i_1 = i_2
            i_2 = i_3
            
        i_1 = line_sents[0]
        i_2 = line_sents[1]
        i_3 = line_sents[2]
        for i in range(line_len-3):
            i_4 =  line_sents[i + 3]
            dict[n4_id % (str(i_1), str(i_2), str(i_3), str(i_4))] = dict.get(n4_id % (str(i_1), str(i_2), str(i_3), str(i_4)), 0) + 1
#            print (n4_id % (str(i_1), str(i_2), str(i_3), str(i_4)))
            i_1 = i_2
            i_2 = i_3
            i_3 = i_4

        if(count % 500 == 0):
            print ("count: %s  line_len: %s"  % (str(count), str(line_len)))
        count = count + 1;
#        if(count > 10000):
#            break
        
    for key in dict:
#        print(sql_wr % (key, str(dict[key])))
        cursor.execute(sql_wr % (str(key), str(dict[key])))
#        # 提交到数据库执行
        db.commit()
            
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()


#print ("dict : %s" %  str(dict))


