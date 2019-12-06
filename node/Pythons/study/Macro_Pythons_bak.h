
基础路径设置:
basePath = Save:node\Pythons

/***********************************************************************/


//目录[Num][Ca]:
// 1. 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.1\] _full_concat-----补齐连接
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.2\] _token.py-----正向简单取一次
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.3\] _add_head
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.4\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.5\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.6\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.7\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.8\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.9\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[1.10\] 

Save:node\Pythons\study\Macro_Pythons_bak.h \[2.1\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[2.2\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[2.3\] 
// 
Save:node\Pythons\study\Macro_Pythons_bak.h \[3.1\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[3.2\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[3.3\] 
// 
Save:node\Pythons\study\Macro_Pythons_bak.h \[4.1\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[4.2\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[4.3\] 
// 
Save:node\Pythons\study\Macro_Pythons_bak.h \[5.1\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[5.2\] 
Save:node\Pythons\study\Macro_Pythons_bak.h \[5.3\] 



[1.1] _full_concat-----补齐连接

#    def _full_concat(row, rlen):
#        diff = board_size - rlen
#        sp0 = int(rlen/(diff+1))
#        output = row[0:sp0]
#        for i in range(diff):
#            sp1 = int((i+2)*rlen/(diff+1))
#            lasti = tf.cond(tf.greater(sp0, 0), lambda: sp0-1, lambda: 0)
#            nexti = tf.cond(tf.less(sp0, rlen), lambda: sp0, lambda: rlen-1)
#            full_id  = (row[lasti][0] + row[nexti][0])/2
#            full_num = (row[lasti][1] + row[nexti][1])/2
#            output = tf.concat([output, [[full_id, full_num]], row[sp0:sp1]], 0)
#            sp0 = sp1
#        return output
#    def _full(row):
#        rlen = 2 ########################
#        diff = board_size - rlen
#        output = tf.cond(tf.less_equal(diff, 0), 
#                lambda: row[0:board_size], 
#                lambda: _full_concat(row, rlen))
#        output = tf.cast(output, dtype=tf.float32)
#        return output




[1.2] _token.py-----正向简单取一次

### 正向简单取一次, 词类改错
###   重新连接被拆开的len(1)名词
concat_list = out_list.copy()
for i in range(len(concat_list)-2,-1,-1):
	# i=len-2~0, 包括0
	unique_str = concat_list[i][0]
	print ("  unique_str  %s" % (str(unique_str)) )
	if len(unique_str)>1:
		continue
	next_str = concat_list[i+1][0]
	if len(next_str)<=1:
		continue
	unique_str = unique_str + next_str[-1]
	is_valid = 1
	sqlite3_cursor.execute(sql_cx % (str(unique_str)))
	results = sqlite3_cursor.fetchall()
	for row in results:
		dcxn = row[0]
		if int(dcxn) == 2 or int(dcxn) == 4 or int(dcxn) == 6 or int(dcxn) == 8:
			out_list[i:i+1]=[[unique_str, dcxn]]
			is_valid = 0
		break
	if is_valid==1:
		continue
	is_valid = 1
	next_str = next_str[0:-1]
	sqlite3_cursor.execute(sql_cx % (str(next_str)))
	results = sqlite3_cursor.fetchall()
	for row in results:
		dcxn = row[0]
		out_list[i+1:i+2]=[[next_str, dcxn]]
		is_valid = 0
		break
	if is_valid == 1:
		dcxn = out_list[i+1][1] #-1
		out_list[i+1:i]=[[next_str, dcxn]]




[1.3] _add_head

#    def _add_head(self):
#        data_cnt = 0
#        if self.train_enable:
#            self.train_h1 = np.array([[data_cnt + i] for i in range(self.sents_len)])
#            data_cnt += self.sents_len
#            self.train_h2 = np.array([[data_cnt + i] for i in range(self.sents_len)])
#            data_cnt += self.sents_len
#        if self.test_enable:
#            self.test_h1 = np.array([[data_cnt + i] for i in range(self.sents_len)])
#            data_cnt += self.sents_len
#            self.test_h2 = np.array([[data_cnt + i] for i in range(self.sents_len)])
#            data_cnt += self.sents_len




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 




[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 




[3.1] 


[3.2] 


[3.3] 


[3.4] 


[3.5] 


[3.6] 


[3.7] 


[3.8] 


[3.9] 


[3.10] 




[4.1] 




[4.2] 




[4.3] 




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 






[5.1] 




[5.2] 




[5.3] 




[5.4] 




[5.5] 




[5.6] 




[5.7] 




[5.8] 




[5.9] 




[5.10] 


















