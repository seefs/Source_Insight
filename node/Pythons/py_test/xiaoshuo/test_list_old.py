import pymysql


# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
# 使用cursor()方法获取操作游标 
cursor = db.cursor()


sql_rd = "SELECT * FROM sentence_cx_new_test"

sql_wr_list =  "UPDATE sentence_list_old_test SET `SLIST`=\"%s\" where CID = %s;"
sql_wr_num  =  "UPDATE sentence_list_old_test SET `SNUM` =%s where CID = %s;"


try:
    # 执行SQL语句
    cursor.execute(sql_rd)
    # 获取所有记录列表
    results = cursor.fetchall()
    for row in results:
        isEmp = 0
        
        fcid =  row[0]
        fcxn =  row[3]
        if fcxn is None :
            isEmp = 1
            unique_str = ""
        else :
            unique_str = fcxn
            
        fcnt = int(row[1])
        for i in range(fcnt-1):
            fcxn =  row[4 + i]
            if fcxn is None :
                isEmp = 1
            else :
                unique_str = unique_str + "_" + fcxn
        if isEmp == 1 :
            cursor.execute(sql_wr_num % (str(1), str(fcid)))
            # 提交到数据库执行
            db.commit()
        else :
            cursor.execute(sql_wr_list % (unique_str, str(fcid)))
            # 提交到数据库执行
            db.commit()
# 打印结果
#        print ("fcnt=%s, unique_str=%s" %  (fcnt, unique_str ))
#        print (sql_wr_list % (unique_str, str(fcid)))
#        print (sql_wr_num % (str(1), str(fcid)))
except:
   print ("Error: unable to fetch data")
 
# 关闭数据库连接
db.close()




