import pymysql
import re


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
# 使用cursor()方法获取操作游标 
cursor = db.cursor()

match_str = '_'

#dict = {}
v_array = []
tmp_str = ""

sql_rd = "SELECT * FROM tbl_base_all_cx"
#sql_wr_pre  =  "UPDATE tbl_vector SET `VC%s` =%s where VID = %s;"
#sql_wr_next =  "UPDATE tbl_vector SET `VC%s` =%s where VID = %s;"
sql_wr_vector =  "INSERT INTO tbl_base_all_vector VALUES(%s, %s, %s, \"%s\");"


i_pre = 0
i_next = 0
#p_id = 'p%s_%s'
#n_id = 'n%s_%s'

try:
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        fcid =  row[0]
        line_len =  row[1]
        
        i_pre = row[3]
        for i in range(line_len-1):
            i_next =  row[i + 4]
            tmp_str = str(i_pre)+"_"+i_next
            
            row_array = []
            row_array.append(str(fcid))
            row_array.append(str(0))
            row_array.append(str(i+1))
            row_array.append(tmp_str)
            v_array.append(row_array)

            i_pre = i_next
#        #test:
#        if fcid > 6100:
#            break

    for i in range(len(v_array)):
        row_array = v_array[i]
        cursor.execute(sql_wr_vector % (str(row_array[0]), str(row_array[1]), str(row_array[2]), str(row_array[3])))
        # 提交到数据库执行
        db.commit()
            
# 打印结果
#        print (sql_wr_num % (str(1), str(fcid)))
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()


#print ("v_array : %s" %  str(v_array))


