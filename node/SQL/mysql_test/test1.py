import MySQLdb
 
try:
    conn=MySQLdb.connect(host='localhost',user='root',passwd='s0f0s0',db='test333',port=3306)
    cur=conn.cursor()
    cur.execute('select * from sfs_pinyin')
    cur.close()
    conn.close()
except MySQLdb.Error as e:
     print ("Mysql Error %d: %s" % (e.args[0], e.args[1]))
