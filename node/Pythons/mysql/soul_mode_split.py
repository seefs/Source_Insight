import jieba
import pickle
import jieba.analyse
import re
import os, sys
import pymysql



match_str = r"([.。!！?？；;，,\s+])"

#sql_rd = "SELECT `DCXN` FROM `dict_utf8_all` WHERE `DTXT`= \"%s\";"
sql_rd   = "SELECT `DCXE` FROM `dict_utf8_update` WHERE `DTXT`= \"%s\";"
sql_w_rd = "SELECT `DCXE`,`DW` FROM `dict_utf8_update` WHERE `DTXT`= \"%s\";"



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


def get_last_str(mode_list, word_list, word_str, is_add_num):
    word_len = len(word_list)                       
    mode_len = len(mode_list)                       
    if word_len>0:                                  
        if is_add_num>0:                            
            return word_list[word_len-2] + word_str;
        else:
            return word_list[word_len-1] + word_str;
    elif mode_len>0:                                
        sub_list = mode_list[mode_len-1]
        sub_len = len(sub_list)
        if sub_len>0:                               
            if is_add_num>0:                        
                return sub_list[sub_len-2] + word_str;
            else:
                return sub_list[sub_len-1] + word_str;
    else:
        return "";
    return "";

def get_min_cx(cursor, last_str, dcxn):
#    print ("get_min last_str=%s dcxn=%s" % (str(last_str),str(dcxn)))
    
    more_cx = int(dcxn);
    
    if more_cx <= 100:
        return dcxn;
        
    long_cx = 0;      #用长词词性解决词性分歧, 能解决暂时问题
    cursor.execute(sql_w_rd % (str(last_str)))   #
    # 获取所有记录列表
    results = cursor.fetchall()                  #
    for row in results:
        long_cx =  int(row[0])
        
    cx = 0;
    for _ in range(5):
        cx = more_cx - int(more_cx/100)*100;
        more_cx = int((more_cx-cx)/100);
#        print ("get_min cx=%s more_cx=%s  " % (str(cx),str(more_cx) ))
        if cx == long_cx:
            return cx;
        if more_cx < 100:
            return more_cx;
    
    cx = more_cx - int(more_cx/100)*100;
    return cx;

#设计预查找/DW=1为多字,最短词,不可分隔; 2可能最小
def soul_full_check(tmp_list, mode_list, is_add_num):
    list_len = len(tmp_list)
#    print ("start check  %s" % (str(tmp_list)) )
    
    db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
    # 使用cursor()方法获取操作游标 
    cursor = db.cursor()
    try:
        for i in range(list_len):
            tmp_str = tmp_list[i]
            word_list = []
            str_len = len(tmp_str)
            
            dw_index_right = 0;                                      #val--最短词--right
            dw_index_left = 0;                                       #val--数字组合--left
            dw_cx_left = "";
            for j in range(str_len):
                if j< dw_index_right:                                #最短词
                    continue;                                        #
                if j< str_len-1:                                     #预查找, 从短到长
                    for k in range(str_len-j-1):                     #    右边长度
                        word_str = tmp_str[j:j+2+k]                  #
                        cursor.execute(sql_w_rd % (str(word_str)))   #
                        dcxn = '0';
                        dw = 0;
                        # 获取所有记录列表
                        results = cursor.fetchall()                  #
                        for row in results:
                            dcxn =  row[0]
                            dw =  row[1]
#                        print ("pre check  word=%s dcxn=%s" % (str(word_str),str(dcxn)) )   #
                        if dw == 0:                                  #dw=0 不可能分隔
                            break
                        elif dw == 1:                                #dw=1 可分隔
                            dw_index_right = j+1+k + 1;              #dw=2 可能分隔
                            break
                    if dw == 1:                                      #不可分隔
                        if dw_index_left >= 1:                       #    num--stop index
                            num_str = tmp_str[dw_index_left-1:j]     #    
                            word_list.append(num_str)                #    num--123..
                            dw_index_left = 0;                       #
                            if is_add_num == 1:                      #
                                word_list.append(dw_cx_left)         #    num--cx
                        last_str = get_last_str(mode_list, word_list, word_str, is_add_num);
                        word_list.append(word_str)                   #    word
                        if is_add_num == 1:                          #
                            word_list.append(get_min_cx(cursor, last_str, dcxn))#    word--cx
                        continue;
                    
                word_str = tmp_str[j]                                #单个查找
#                print ("check  %s" % (str(word_str)) )
                # 执行SQL语句
                cursor.execute(sql_w_rd % (str(word_str)))           #
                dcxn = '0';
                dw = 0;
                # 获取所有记录列表
                results = cursor.fetchall()                          #
                for row in results:
                    dcxn =  row[0]
                    dw =  row[1]
#                print ("rd left=%s j=%s word_str=%s dw=%s" % (str(dw_index_left),str(j),word_str,str(dw)) )
                if dw == 0:                                          #
                    if dw_index_left >= 1:                           #    num--stop index
                        num_str = tmp_str[dw_index_left-1:j]         #
#                        print ("num_str=%s " % (num_str) )          #
                        word_list.append(num_str)                    #    num--123..
                        dw_index_left = 0;  #index                   #
                        if is_add_num == 1:                          #
                            word_list.append(dw_cx_left)             #
                    last_str = get_last_str(mode_list, word_list, word_str, is_add_num);
                    word_list.append(word_str)                       #    word
                    if is_add_num == 1:                              #
                        word_list.append(get_min_cx(cursor, last_str, dcxn))    #    word--cx
                elif dw == 1:                                        #不可分隔词--数字0--9
                    if dw_index_left == 0:                           #    暂时不判断cx相同, 不管是不是数字, 都连接
                        dw_index_left = j+1;                         #    num--start index  , >0, 否则条件不能判断
                        dw_cx_left = dcxn;                           #    第1个作词性, 可能不准
                        
            if dw_index_left >= 1:                                   #    num--stop index
                j = str_len;
                num_str = tmp_str[dw_index_left-1:j]                 #    
#                print ("num_str left=%s j=%s tmp_str=%s num_str=%s" % (str(dw_index_left),str(j),tmp_str,str(num_str)) )
                word_list.append(num_str)                            #    num--123..
                dw_index_left = 0;                                   #
                if is_add_num == 1:                                  #
                    word_list.append(dw_cx_left)                     #    num--cx
                    
            mode_list.append(word_list)
    except:
            print ("Error: unable to fetch data")
    # 关闭数据库连接
    db.close()
#    number_len = len(number_list)
    return;

    
def soul_full_check_one(mode_list, tmp_list):
    list_len = len(mode_list)
   
    for i in range(list_len):
        sub_list = mode_list[i]
        sub_len = int(len(sub_list)/2)  #word,num
#        print ("sub_len=%s sub_list=%s" % (str(sub_len), str(sub_list)) )
        
        for j in range(sub_len):
            sub_str = sub_list[2*j]
            cur_cx = int(sub_list[2*j+1])
#            cur_cx = sub_list[2*j+1]
#            print ("str=%s cur_cx=%s" % (str(sub_str), str(cur_cx)) )
    
            #算上标点符号
            if cur_cx >= 1 and cur_cx <= 8 or cur_cx == 0:
                tmp_list.append(sub_str)
            
#    number_len = len(number_list)
    return;

    
def soul_full_data_move(mode_list, tmp_list):
    list_len = len(mode_list)
   
    for i in range(list_len):
        sub_list = mode_list[i]
        sub_len = int(len(sub_list)/2)  #word,num
        
        for j in range(sub_len):
            sub_str = sub_list[2*j]
            cur_cx = int(sub_list[2*j+1])
            tmp_list.append(sub_str)
            tmp_list.append(0)
            tmp_list.append(cur_cx)
    return;

def soul_full_data_copy(mode_list, tmp_list):
    list_len = len(mode_list)
    #复制
    for i in range(list_len):
        tmp_list.append(mode_list[i])
    return;


def soul_full_data_code(mode_list, tmp_list, item_len=3):
    list_len = int(len(mode_list)/item_len)  #word,flag,num
   
    for i in range(list_len):
        word_str = mode_list[item_len*i]
        flag = int(mode_list[item_len*i+1])
#        flag = sub_list[item_len*j+1]
        cur_cx = int(mode_list[item_len*i+2])
#        print ("word_str=%s flag=%s cur_cx=%s" % (str(word_str), str(flag), str(cur_cx)) )
        tmp_list.append(cur_cx)
        
    return;
    


flag_1 = 1 #向后连接, 保留后
flag_2 = 2 #向后连接, 保留前
flag_3 = 3 #向前连接, 保留前
flag_4 = 4 #逻辑
flag_5 = 5 #浅知, 单模块--用排除法判断哪一块
flag_6 = 6 #浅知, 多模块--固定, 不用选
flag_7 = 7


#是否连接--不严格, 太细不调
#    0不连;1长连;2逻辑;3环
#                  1 1                      1     1         
#                  2                    2 2 2               
#                3 3                  3 3                   
#                    4    4 4                     4         
#                  5          5       5           5         
#              6 6              6     6                     
#                           7 7                   7 7       
#                             8                     8 8 8   
#                             9 9     9                 9   
#             (1,2,3,4)  (5,6,7,8)   (9,0,1,2)   (3,4,5,6)
flag_list = [ [1,1,0,0,   0,0,0,1,    1,1,0,0,    0,0,0,1],   #1, 
			  [0,1,0,0,   0,0,0,0,    1,1,4,0,    0,0,0,0],   #2,     逻辑--"的"--4
			  [0,3,1,3,   0,3,0,1,    0,1,1,2,    0,4,0,2],   #3,     逻辑--"用"--4; 长接--"喷完"--2; 长接--"喷出"--2
			  [0,0,0,1,   0,1,0,0,    0,0,0,1,    1,6,0,0],   #4,  属性为浅知--5
			  
			  [0,0,0,1,   1,1,0,0,    0,0,0,1,    1,1,0,0],   #5
			  [0,0,1,0,   0,1,0,1,    0,0,4,0,    1,5,0,0],   #6,  侧环为浅知--5, 逻辑--"的"--4
			  [0,0,0,0,   0,0,0,0,    0,0,0,0,    0,1,1,1],   #7
			  [0,2,0,2,   0,2,0,1,    1,0,4,0,    0,0,0,1],   #8,     逻辑--"的"--4
			  
			  [4,4,4,0,   0,0,4,4,    0,4,0,0,    0,0,0,4],   #9,  逻辑--"如果"
			  [0,1,1,4,   0,0,0,0,    1,0,1,1,    0,0,0,0],   #10
			  [0,0,1,0,   0,4,0,6,    0,1,0,1,    0,0,0,0],   #11,    逻辑--"的"--4
			  [0,0,1,1,   0,4,0,0,    0,1,1,0,    0,0,0,0],   #12,    逻辑--"完"
			  
			  [0,0,4,4,   4,4,4,0,    0,0,0,4,    4,4,0,0],   #13, 逻辑--"对于"
			  [0,0,3,0,   0,1,1,0,    0,0,6,0,    1,5,1,0],   #14',    长接--"每分钟喷出"--3,   自循环为浅知--5
			  [0,0,0,0,   0,0,1,0,    0,0,0,0,    0,1,0,1],   #15
			  [0,0,0,4,   0,4,1,1,    1,0,0,0,    0,0,1,1]    #16,    逻辑--"出"//长词
			  ]

#采用同样设计, 标记组合顺序:连接, 逻辑, 浅知...
#    各模块共用
def soul_full_data_flag(mode_list, tmp_list):
    list_len = len(mode_list)
    flag = 0
   
    for i in range(list_len-1):
        n_left  = mode_list[i]
        n_right = mode_list[i+1]

        if n_left >= 1 and n_left <= 16 and n_right >= 1 and n_right <= 16:
            flag = flag_list[n_left-1][n_right-1]
            #相邻两位--连接方式:
            #    连接方式
            tmp_list.append(flag);
        else:
            tmp_list.append(0); #标点
            
    #补充一个0, 总长度一致, 否则下标可能超
    #补后面, 否则第1个0没法判断是否有用
    tmp_list.append(0);
    return;

def soul_full_long(base_list, tmp_list, mode_list, is_del_left, is_del_right):
    list_len = int(len(base_list)/3)  #word,flag,num
    flag = 0;            #flag--新
    last_flag = 0;       #    --新--若cur_flag=0, 要取上次flag
    next_flag = 0;       #    --新--
    old_flag = 0;        #    --旧--多次连接
    long_str = ""        #str --连接
    next_str = ""        #    --
    mini_str = ""        #    --
    cur_cx = 0;          #cx  --
    last_cx = 0;         #    --
    next_cx = 0;         #    --

    for i in range(list_len):
        word_str = base_list[3*i];
        old_flag = int(base_list[3*i+1]);
        cur_cx = int(base_list[3*i+2]);
        
        if is_del_left==1:                             #省略内容
            long_str = word_str;
        else:
            long_str = long_str + word_str;
            
        if is_del_right==1:                             #省略内容
            mini_str = "";
        else:
            mini_str = word_str;
        
        flag = tmp_list[i];                            #连接方式
#        print ("flag=%s next=%s last=%s i=%s sub_str=%s long_str=%s next_str=%s cur_cx=%s" % (str(flag), str(next_flag), str(last_flag), 
#                str(i), str(word_str), long_str, next_str, str(cur_cx)) )
        
        if last_flag > 0:
            if last_flag==flag_1:                     #向后连接, 保留后
                mode_list.append(long_str)            #
                mode_list.append(last_flag)           #
                mode_list.append(cur_cx)              #    last
            elif last_flag == flag_2:                 #向后连接, 保留前
                mode_list.append(long_str)            #    
                mode_list.append(last_flag)           #
                mode_list.append(last_cx)             #    pre
            else:
                continue
        elif next_flag == flag_3:
            if flag == flag_3:                        #向前连接, 保留前
                mode_list.append(next_str)            #
                mode_list.append(next_flag)           #
                mode_list.append(next_cx)             #
                next_str = word_str;                  #
                #next_flag = flag;                    #        多余
                next_cx = cur_cx;                     #
                continue
            elif flag != flag_3:                      #
                mode_list.append(next_str + mini_str) #        word_str
                mode_list.append(next_flag)           #    mid->border
                mode_list.append(next_cx)             #    mid->border
                next_str = "";
                next_flag = 0;
        else:
            if flag == flag_1 or flag == flag_2:      #向后连接, 保留后--------代码一定要走last_flag
                last_flag = flag;                     #
                last_cx = cur_cx;                     #
                continue
            elif flag == flag_3:                      #向前连接, 保留前--------代码一定要走next_flag
                next_str = long_str;                  #        long_str = word_str
                next_flag = flag;                     #
                next_cx = cur_cx;                     #
                continue
            elif flag == flag_4 or flag == flag_5 or flag == flag_6:    #向后连接, 保留前
                mode_list.append(long_str)            #
                mode_list.append(old_flag)            #        flag
                mode_list.append(cur_cx)              #
            elif flag == 0:                           #不连接
                mode_list.append(long_str)            #
                mode_list.append(old_flag)            #    若old_flag>0,flat=0,则为多次连接,不更新flag
                mode_list.append(cur_cx)              #
            else:
                continue
        #append后清除str
        long_str = ""
        last_flag = 0;
    return;
    


def soul_full_logic(base_list, tmp_list, mode_list, is_del_pre, is_add_model):
    list_len = int(len(base_list)/3)  #word,flag,num
    flag = 0;            #flag--新
    last_flag = 0;       #    --新--若cur_flag=0, 要取上次flag
    old_flag = 0;        #    --旧--多次连接
    long_str = ""        #str --连接
    cur_cx = 0           #cx  --

    for i in range(list_len):
        word_str = base_list[3*i]
        old_flag = int(base_list[3*i+1])
        cur_cx = int(base_list[3*i+2])
        
        if is_del_pre==1:
            long_str = word_str
        else:
            long_str = long_str + word_str
        
        flag = tmp_list[i]
#        print ("flag=%s last=%s i=%s sub_str=%s long_str=%s cur_cx=%s" % (str(flag), str(last_flag), 
#                str(i), str(word_str), long_str, str(cur_cx)) )
        if last_flag > 0:
            if flag!=flag_4:                     #逻辑连接
                mode_list.append(long_str)       #
                mode_list.append(last_flag)      #
                mode_list.append(cur_cx)         #
                if is_add_model>0:               #
                    mode_list.append(0)          #      model
            elif flag == flag_4:                 #多逻辑连接
                last_flag = flag;                #
                #last_cx = cur_cx;               #
                continue
            else:
                continue
        else:
            if flag == flag_4:                   #逻辑连接
                last_flag = flag;                #
                continue
            elif flag > 0:                       #非逻辑连接
                mode_list.append(long_str)       #
                mode_list.append(last_flag)      #
                mode_list.append(cur_cx)         #
                if is_add_model>0:               #
                    mode_list.append(0)          #      model
            elif flag == 0:                      #不连接
                mode_list.append(long_str)       #
                mode_list.append(old_flag)       #
                mode_list.append(cur_cx)         #
                if is_add_model>0:               #
                    mode_list.append(0)          #      model
            else:
                continue
        long_str = ""
        last_flag = 0;
    return;


model_str_list = [ "(1地位块)","(2想象块)","(3悲乐块)",
                   "(4选弃块)","(5余生块)","(6舍得块)",
                   "(7权责块)","(8是非块)","(9行止块)", #1~9
                   "(属于块)", #10, 
                   "(属性块)", #11, 
                   "", #12, 
                   "", #13, 
                   "", #14, 
                   "", #15,
                   ""]
                   
#                 (1, 2, 3, 4)(5, 6, 7, 8) (9, 0, 1, 2)(3, 4, 5, 6)
model_id_list = [ [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #1
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #2
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #3
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0,11, 0, 0], #4, 属性块id--11
                  
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #5
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #6
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #7
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #8
                  
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #9
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #10
                  [0, 0, 0, 0, 0, 0, 0,10,  0, 0, 0, 0, 0,10, 0, 0], #11, 属于块id--10
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #12

                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #13
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0,10, 0, 0, 0, 0, 0], #14, 属于块id--10
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0], #15
                  [0, 0, 0, 0, 0, 0, 0, 0,  0, 0, 0, 0, 0, 0, 0, 0]] #16

#                 (1,2,3)  (4,5,6)  (7,8,9)
model_list = [    [0,0,1,   0,0,1,   0,0,1], #1
                  [0,0,1,   0,0,1,   0,0,0], #2, 属于块在位置--2
                  [1,1,1,   0,0,0,   1,0,1], #3, 兼容, 3可以在7，9
                  [1,0,0,   1,0,0,   0,0,0], #4
                  
                  [1,0,0,   1,0,0,   1,0,0], #5
                  [1,0,1,   1,0,0,   1,0,1], #6
                  [0,0,0,   0,0,0,   1,1,1], #7
                  [0,0,0,   1,0,1,   0,0,1], #8
                  
                  [0,0,1,   0,0,1,   0,1,1], #9
                  [0,1,1,   0,0,0,   0,0,0], #10
                  [0,1,0,   1,0,0,   0,0,0], #11
                  [1,1,0,   0,0,0,   0,0,0], #12
                  
                  [1,0,0,   1,0,0,   1,0,0], #13
                  [0,0,0,   0,0,0,   1,1,0], #14
                  [0,0,0,   0,0,0,   0,1,0], #15
                  [0,0,0,   0,0,0,   0,1,1]] #16

#                 (1,2,3,4)   (5,6,7,8)   (9,0,1,2)   (3,4,5,6)
model_own_list = [[0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #1
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #2
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #3
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,7,0,0], #4, 属性块在位置--7
                  
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #5
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #6
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #7
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #8
                  
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #9
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #10
                  [0,0,0,0,    0,0,0,2,    0,0,0,0,    0,0,0,0], #11, 属于块在位置--2
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #12

                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #13
                  [0,0,0,0,    0,0,0,0,    0,0,2,0,    0,0,0,0], #14, 属于块在位置--2
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0], #15
                  [0,0,0,0,    0,0,0,0,    0,0,0,0,    0,0,0,0]] #16


def soul_full_get_model(state_list, flag, code1, code2):
    if code1 < 1 or code1 > 16 or code2 < 1 or code2 > 16:
        return 0;
    # param(0~9,5~6,1~16,1~16)
    #   flag_5: 浅知, 单模块--用排除法判断哪一块
    #   flag_6: 浅知, 多模块--固定, 不用选
    cur_model = 0
    
    if flag == flag_5:                      #用排除法判断哪一块
        sub_list = model_list[code1];
        for i in range(9):
            is_model = sub_list[i]
            if state_list[i] == 0: 
                continue;
            if is_model == 0:      
                state_list[i] = 0
                
        sub_list = model_list[code2];
        for i in range(9):
            is_model = sub_list[i]
            if state_list[i] == 0: 
                continue;
            if is_model == 0:      
                state_list[i] = 0
                
        for i in range(9):
            is_model = state_list[i]
            if is_model == 0:   
                continue;   
            if cur_model == 0: 
                cur_model = i
            else: 
                cur_model = 10
    elif flag == flag_6:                      #固定块
        cur_model = model_own_list[code1-1][code2-1];
        is_model = state_list[cur_model-1]
#        print ("flag_6 code1=%s code2=%s cur_model=%s is_model=%s" % (str(code1), str(code2), str(cur_model), str(is_model)) )
        for i in range(9):
            state_list[i] = 0                 #先获取is_model,再清0
        if is_model == 0: 
            return 0;
        else: 
            state_list[cur_model-1] = 1           #chg state
            return cur_model;
            
    # ret:0,1,2
    #   0: 无块, 1~9: 单块, 10: 多块
    return 0;

def soul_full_shallow(base_list, code_list, tmp_list, mode_list, is_del_pre, item_len=4):
    list_len = int(len(base_list)/item_len)  #word,flag,num
    flag = 0;            #flag--新
    last_flag = 0;       #    --新--若cur_flag=0, 要取上次flag
    old_flag = 0;        #    --旧--多次连接
    long_str = ""        #str --连接
    cur_cx = 0           #cx  --
    state_list = [1,1,1,  1,1,1,  1,1,1];
    last_model = 1;
    model_id = 0;

    for i in range(list_len):
        word_str = base_list[item_len*i]
        old_flag = int(base_list[item_len*i+1])
        cur_cx = int(base_list[item_len*i+2])
        
        if is_del_pre==1:
            long_str = word_str
        else:
            long_str = long_str + word_str
        
        flag = tmp_list[i]
#        print ("flag=%s last=%s i=%s sub_str=%s long_str=%s cur_cx=%s" % (str(flag), str(last_flag), 
#                str(i), str(word_str), long_str, str(cur_cx)) )
        if last_flag > 0:                        #        last_flag=5
            if flag == flag_5 or flag == flag_6: #多个浅知连接, 都连接起来
                code1 = code_list[i]
                code2 = code_list[i+1]           #    index可能超, 不能放外面
                last_model = soul_full_get_model(state_list, flag, code1, code2);           #    添加连接:改为ret 1
#                print ("model_2=%s flag=%s long=%s word=%s code1=%s code2=%s" % (str(last_model), str(flag), str(long_str), str(word_str), str(code1), str(code2)) )
                if last_model>0:                 #    
                    model_id = model_id_list[code1-1][code2-1]       #更新 last_flag 时更新 model_id
#                    print ("model_id code1=%s code2=%s model_id=%s" % (str(code1), str(code2), str(model_id)) )
                    if model_id==0:
                        model_id = last_model;
                    last_flag = flag;            #    最后一个作为词性
                    #last_cx = cur_cx;           #
                    continue
                else:                            #浅知连接
                    mode_list.append(long_str)   #
                    mode_list.append(last_flag)  #
                    mode_list.append(cur_cx)     #
                    mode_list.append(model_id)   #
            else:                                #浅知连接
                mode_list.append(long_str)       #
                mode_list.append(last_flag)      #
                mode_list.append(cur_cx)         #
                mode_list.append(model_id)       #
        else:
            if last_model >0 and (flag == flag_5 or flag == flag_6): #浅知连接
                code1 = code_list[i]
                code2 = code_list[i+1]           #    index可能超, 不能放外面
                last_model = soul_full_get_model(state_list, flag, code1, code2);           #    添加连接:改为ret 1
                model_id = model_id_list[code1-1][code2-1]       #更新 last_flag 时更新 model_id
                if model_id==0:
                    model_id = last_model;
#                print ("model_1=%s flag=%s long=%s word=%s code1=%s code2=%s" % (str(last_model), str(flag), str(long_str), str(word_str), str(code1), str(code2)) )
                last_flag = flag;                #
                continue
            elif flag > 0:                       #非浅知连接
                mode_list.append(long_str)       #
                mode_list.append(last_flag)      #
                mode_list.append(cur_cx)         #
                mode_list.append(0)       #
            elif flag == 0:                      #不连接
                mode_list.append(long_str)       #
                mode_list.append(old_flag)       #
                mode_list.append(cur_cx)         #
                mode_list.append(0)              #
            else:
                continue
        long_str = ""
        last_flag = 0;
        state_list = [1,1,1,  1,1,1,  1,1,1];
    return;


def soul_full_view(mode_list, tmp_list, mode_num):
    item_len = 3;
    if mode_num == 4:  #间隔4, 多了一项model_id
        item_len = 4;
        
    list_len = int(len(mode_list)/item_len)  #word,flag,num
   
    for i in range(list_len):
        word_str = mode_list[item_len*i]
        flag = int(mode_list[item_len*i+1])
#        flag = sub_list[3*j+1]
        cur_cx = int(mode_list[item_len*i+2])
#        print ("word_str=%s flag=%s cur_cx=%s" % (str(word_str), str(flag), str(cur_cx)) )

        #算上标点符号
        if mode_num == 2:
            if flag == flag_1 or flag == flag_2 or flag == flag_3:
                tmp_list.append(word_str)
        elif mode_num == 3:
            if flag == flag_4:
                tmp_list.append(word_str)
        elif mode_num == 4:
            if flag == flag_5 or flag == flag_6:
                model_id = mode_list[item_len*i+3]
                model_str = model_str_list[model_id-1]
                tmp_list.append(model_str)
                tmp_list.append(word_str)
            
    return;






