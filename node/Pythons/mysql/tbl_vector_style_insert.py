import pymysql
import re


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
# 使用cursor()方法获取操作游标 
cursor = db.cursor()

match_str = '_'

dict = {}

sql_rd = "SELECT * FROM tbl_base_all"
sql_rd = "SELECT * FROM tbl_base_all"
#sql_wr_pre  =  "UPDATE tbl_vector SET `VC%s` =%s where VID = %s;"
sql_wr_next =  "UPDATE tbl_vector SET `VC%s` =%s where VID = %s;"

i_pre = 0
i_next = 0
#p_id = 'p%s_%s'
n_id = 'n%s_%s'

try:
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        
        fslist =  row[3]
        line_sents = re.split(match_str,fslist)         # 保留分割符
        line_len = len(line_sents)
#        print (line_len)
        if line_len == 0 :
            continue

        i_pre = line_sents[0]
        for i in range(line_len-1):
            i_next =  line_sents[i + 1]
#            dict[p_id % (str(i_next), str(i_pre))] = dict.get(p_id % (str(i_next), str(i_pre)), 0) + 1
            dict[n_id % (str(i_pre), str(i_next))] = dict.get(n_id % (str(i_pre), str(i_next)), 0) + 1
            i_pre = i_next

    for i in range(17):
        for j in range(17):
            k = i
            m = j
            if k == 17 :
                k = 26
            if m == 17 :
                m = 26
#            v = dict.get(p_id % (str(m), str(k)), 0)
            v = dict.get(n_id % (str(k), str(m)), 0)
            if v > 0 :
                cursor.execute(sql_wr_next % (str(k), str(v), str(m)))
                # 提交到数据库执行
                db.commit()
            
# 打印结果
#        print (sql_wr_num % (str(1), str(fcid)))
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()


#print ("dict : %s" %  str(dict))


