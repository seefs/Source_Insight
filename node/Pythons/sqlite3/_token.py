# coding=utf-8
"""Tokenization classes."""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import os, sys
import sqlite3
import copy
import re


#

def get_category_from_db(unique_list, db_path=None):
# 从数据库获取词性
    number_list = []
    
    sqlite3_conn = sqlite3.connect(db_path)
    sqlite3_cursor = sqlite3_conn.cursor()
    
    sql_cx = "select \"DCXE\" from dict_utf8_update WHERE \"DTXT\"=\"%s\";"
    try:
        for j in range(len(unique_list)):
            unique_str = unique_list[j]
            dcxn = '0'
            
            sqlite3_cursor.execute(sql_cx % (str(unique_str)))
            results = sqlite3_cursor.fetchall()
            for row in results:
                dcxn =  row[0]
                
            number_list.append(dcxn)
    except:
            print ("Error: unable to fetch data")
    sqlite3_cursor.close()
    sqlite3_conn.commit()
    sqlite3_conn.close()
    
    return number_list
    
def connect_content_from_db(concat_list, db_path=None):
# 从数据库获取词性
# 微调:多义词+两len(1)连接+名词len(1)向前连接
    out_list = concat_list.copy()
    cate17_list = []
    sqlite3_conn = sqlite3.connect(db_path)
    sqlite3_cursor = sqlite3_conn.cursor()
    
    sql_cx = "select \"DCXE\",\"REMARKS\" from dict_utf8_update WHERE \"DTXT\"=\"%s\";"
    try:
        merge_cnt = 0
        for i in range(len(concat_list)-1):
            unique_str = concat_list[i][0]
            if len(unique_str)>1:
                continue
            is_valid = 1
            ### 将len(1)与len(1), 连续2项以上合并起来
            for j in range(i+1, len(concat_list)):
                if len(concat_list[j][0])>1:
                    break
                unique_str = unique_str + concat_list[j][0]
                sqlite3_cursor.execute(sql_cx % (str(unique_str)))
                results = sqlite3_cursor.fetchall()
                for row in results:
                    dcxn = row[0]
                    ### 合并时累计长度变化
                    out_list[i-merge_cnt:j+1-merge_cnt]=[[unique_str, dcxn]]
                    is_valid = 0
                    merge_cnt = merge_cnt + 1
                    break
                if is_valid == 0:
                    break
        ### 反向简单取一次, 词类改错
        ###   重新连接被拆开的len(1)名词
        concat_list = out_list.copy()
        for i in range(len(concat_list)-1,0,-1):
            # i=len-1~1, 不包括0
            unique_str = concat_list[i][0]
            if len(unique_str)>1:
                continue
            pre_str = concat_list[i-1][0]
            pre_cx  = concat_list[i-1][1]
            if len(pre_str)<=1:
                continue
            elif int(pre_cx) == 2 or int(pre_cx) == 4 or int(pre_cx) == 6 or int(pre_cx) == 8:
                continue
            unique_str = pre_str[-1] + unique_str
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
            pre_str = pre_str[0:-1]
            sqlite3_cursor.execute(sql_cx % (str(pre_str)))
            results = sqlite3_cursor.fetchall()
            for row in results:
                dcxn = row[0]
                out_list[i-1:i]=[[pre_str, dcxn]]
                is_valid = 0
                break
            if is_valid == 1:
                dcxn = out_list[i-1][1]
                out_list[i-1:i]=[[pre_str, dcxn]]
        ### 获取多义词列表
        for i in range(len(out_list)):
            unique_str = out_list[i][0]
            sqlite3_cursor.execute(sql_cx % (str(unique_str)))
            results = sqlite3_cursor.fetchall()
            for row in results:
                dcxn = row[0]
                cate17 = row[1]
                if int(dcxn) == 17:
                    # cx=17: Polysemy, only dealing with single words
                    cate17_list.append(cate17)
                break
        # cx=17: Polysemy, choose the appropriate part of speech
        if len(cate17_list)>0:
            out_list = get_cate17_best_category(out_list, cate17_list)
    except:
            print ("Error: unable to fetch data")
    sqlite3_cursor.close()
    sqlite3_conn.commit()
    sqlite3_conn.close()
    
    return out_list
    
def get_cate17_best_category(in_list, cate17_str_list):
# 多义--选择词性:
#   cx=17: 表示多义
#   为方便处理, 只处理单个词情况
#   连续多义情况未考虑
    cate17_list = [get_cate17_list(i) for i in cate17_str_list]
    cate17_i = 0
        
    out_list = in_list.copy()
    max_len = len(in_list)
    for i,[tmp_str, code] in enumerate(in_list):
        if 17 == int(code):
            val_left_list = [1]*max_len
            val_right_list = [1]*max_len
            if i > 0:
                code_left = in_list[i-1][1]
                val_left_list = [get_cate17_pipei(code_left, cate17) for cate17 in cate17_list[cate17_i]]
            if i < max_len-1:
                code_right = in_list[i+1][1]
                val_right_list = [get_cate17_pipei(cate17, code_right) for cate17 in cate17_list[cate17_i]]
                
            # add best cx
            product = [(val_left*val_right) for val_left, val_right in zip(val_left_list, val_right_list)]
            #print ("Polysemy ", product)
            max_index = product.index(max(product))
            out_list[i][1] = str(cate17_list[cate17_i][max_index])
            cate17_i = cate17_i + 1
    return out_list


def get_cate17_pipei(a, b):
# 多义--判断哪个词性更合适:
#   与前后匹配, 为了方便, 只设置少量值
#   默认0.5, 凭感觉设置比0.5大或小
    code_dict = {
                  '1_3':0.8,
                  '1_6':0.2,
                  '1_14':0.8,
                  '5_14':0.7,
                  '2_4':0.6, 
                  '2_8':0.6, 
                  '2_6':0.6, 
                  '6_2':0.6, 
                  '6_4':0.7, 
                  '6_8':0.6, 
                  '6_11':0.6,
                  '6_14':0.2, 
                  '7_4':0.6, 
                  '7_6':0.6, 
                  '7_8':0.6, 
                  '12_3':0.6, 
                  '12_7':0.6, 
                  '14_11':0.2
                 }
    cate17_key = str(a) + '_' + str(b)
    return code_dict.get(cate17_key, 0.5)

def get_cate17_list(cate17_str):
# 多义--词性列表--拆分字符串:
#   格式("cx:4,5")
    searchObj = re.search( r'cx:([0-9,]{1,})', cate17_str)
    cate17_list = []
    if searchObj:
        cate17_list = searchObj.group(1).split(',')
    cate17_list = [int(i) for i in cate17_list]
    return cate17_list


def get_cate17_best_cx(in_list, cate17_str_list):
# 多义--选择词性:
#   cx=17: 表示多义
#   为方便处理, 只处理单个词情况
#   连续多义情况未考虑
    cate17_list = [get_cate17_list(i) for i in cate17_str_list]
    cate17_i = 0
    cate17_len = len(cate17_list)
    
# rank2->rank1
    c_list = []
    for i in in_list:
        c_list.extend(i)
    
# val(i)=val(i-1,i)*val(i,i+1)
    max_len = len(c_list)
    for i,code in enumerate(c_list):
        if 17 == code:
            val_left_list = [1]*cate17_len
            val_right_list = [1]*cate17_len
            if i > 0:
                code_left = c_list[i-1]
                val_left_list = [get_cate17_pipei(code_left, cate17) for cate17 in cate17_list[cate17_i]]
            if i < max_len-1:
                code_right = c_list[i+1]
                val_right_list = [get_cate17_pipei(cate17, code_right) for cate17 in cate17_list[cate17_i]]
                
            # add best cx
            product = [(val_left*val_right) for val_left, val_right in zip(val_left_list, val_right_list)]
            #print ("Polysemy ", product)
            max_index = product.index(max(product))
            c_list[i] = cate17_list[cate17_i][max_index]
            cate17_i = cate17_i + 1
            
# rank1->rank2
    out_list = []
    out_start = 0
    for i in in_list:
        in_len = len(i)
        out_list.append(c_list[out_start : out_start + in_len])
        out_start = out_start + in_len
    
    return out_list


def get_single_code_from_db(unique_list, db_path=None):
# 单字模式:
#   按下标顺序分隔
#   为代码简单, 只处理常用
    index_dict = { 1:[[1]],
                   2:[[1,1]], 
                   3:[[2,1],[1,2],[1,1,1]],
                   4:[[2,2],[1,3],[3,1],[2,1,1],[1,1,2],[1,2,1],[1,1,1,1]],
                   5:[[1,1,1,1,1]], 
                   6:[[1,1,1,1,1,1]], 
                   7:[[1,1,1,1,1,1,1]]
                 }
    out_code_list = []
    out_unique_list = []
    cate17_list = []
    
    sqlite3_conn = sqlite3.connect(db_path)
    sqlite3_cursor = sqlite3_conn.cursor()
    
    sql_cx = "select \"DCXE\",\"REMARKS\" from dict_utf8_update WHERE \"DTXT\"=\"%s\";"
    
    try:
        for tmp_str in unique_list:
            # 获取字数, 按下标顺序分隔
            str_len = len(tmp_str)
            index_list = index_dict.get(str_len, 0)
            if 0 == index_list:
                # 7字以上为空, 即不替换
                out_code_list.append([])
                out_unique_list.append([tmp_str])
                continue
            
            # 所有列表都不合适, 同样为空
            is_all_valid = 0
            for tmp_index_list in index_list:
                # Number of subscripts --> determine whether it is a single word
                index_len = len(tmp_index_list)
                cx_list,str_list = [],[]
                # 子列表任意合适即可
                is_valid = 1
                index_start = 0
                for tmp_index in tmp_index_list:
                    word_str = tmp_str[index_start:index_start+tmp_index]
                    # 查找词性+备注, 备注如:多义词词性列表
                    sqlite3_cursor.execute(sql_cx % (str(word_str)))
                    dcxn = 27

                    results = sqlite3_cursor.fetchall()
                    for row in results:
                        dcxn =  int(row[0])
                        cate17 =  row[1]
                        
                    if dcxn <= 16:
                        cx_list.append(dcxn)
                        str_list.append(word_str)
                    elif dcxn == 17:
                        # cx=17:多义, 只处理前后2个词情况
                        if index_len <= 2:
                            cx_list.append(dcxn)
                            str_list.append(word_str)
                            cate17_list.append(cate17)
                        else:
                            cx_list.append(0)
                            str_list.append(word_str)
                    else:
                        is_valid = 0
                        break
                    index_start = index_start+tmp_index
                if 1 == is_valid:
                    is_all_valid = 1
                    out_code_list.append(cx_list)
                    out_unique_list.append(str_list)
                    break
            if 0 == is_all_valid:
                out_code_list.append([0])
                out_unique_list.append([tmp_str])
        # 17:多义, 选择合适词性
        if len(cate17_list)>0:
            out_code_list = get_cate17_best_cx(out_code_list, cate17_list)
    except:
            print ("Error: unable to fetch data")

    sqlite3_cursor.close()
    sqlite3_conn.commit()
    sqlite3_conn.close()
    return out_unique_list,out_code_list

    
def merge_single_code(unique_list, detail_word_list, number_list, cx_list):
# 单字模式:
#   词性选择, 只选择常用的替换, 多义等
#   0=0, 可能是错误字, 不考虑
    split_set = { 
                  #'3=3+12',
                  '3=3+16',
                  '3=3+2',
                  '3=3+4',
                  '3=3+6',
                  '3=3+8',
                  '3=10+3',
                  '5=1+14',
                  '5=5+14',
#                  '5=12+12',
#                  '6=4+3',
#                  '6=8+8',
                  '6=3+6',
#                  '13=3+8',
                  '14=14+4',
                  '14=5+14'
                  '26=0'
                }
    replace_set = { '3+2',
                    '3+4',
                    '3+6',
                    '3+8',
                  }

    out_code_list = []
    out_word_list = []
    for (old_word, new_word_list, tmp_number, tmp_cx_list) in zip(unique_list, detail_word_list, number_list, cx_list):
        #print ("--for  %s, %s" % (tmp_number, tmp_cx_list) )
# 类型num换成类型list:
#   用高层cx替换低层cx中的0
        if int(tmp_number)<17:
            tmp_cx_list = [i if i!=0 else tmp_number for i in tmp_cx_list]
        tmp_cx_list = [str(i) for i in tmp_cx_list]
        split_key = str(tmp_number) + "=" + '+'.join(tmp_cx_list)
        replace_key = '+'.join(tmp_cx_list)
        #print ("  --split_key  %s" % (split_key) )
# 在set集合中, 替换
# 多义, 替换
# 未知0类, 替换
        if split_key in split_set:
            out_code_list.append(tmp_cx_list)
            out_word_list.append(old_word)
        elif int(tmp_number) == 17:
            out_code_list.append(tmp_cx_list)
            out_word_list.append(old_word)
        elif (int(tmp_number) == 0 or int(tmp_number) == 26) and len(tmp_cx_list)>0:
            if len(old_word)>2 or replace_key not in replace_set:
                # 拆分未知类
                out_code_list.extend([[i] for i in tmp_cx_list])
                out_word_list.extend(new_word_list)
            else:
                # 少数常用语不拆开
                out_code_list.append(tmp_cx_list)
                out_word_list.append(old_word)
        else:
            out_code_list.append([tmp_number])
            out_word_list.append(old_word)
##############################################################
# 测试时打开注释: 显示未添加的替换, 然后手动添加常用的到set集合中
#            if len(tmp_cx_list) > 0:
#                print ("split_key", split_key)
    return out_word_list,out_code_list
    
    
# 连接顺序:
#flag_0 = 0  # 不连
flag_1 = 1  # 近义连接(如'123','东西')
#           # 
flag_2 = 2  # 主从连接(如'我儿','一个'), 名位连接(如'水中')------类型2/3没区别
flag_3 = 3  # 
flag_4 = 4  # 动动连接(如'满足开通'), 名名连接(如'李村'), 动补连接(如'喷完','喷出')---------比较长的词不连接
#           # 
flag_5 = 5  # 逻辑连接(如'的','用','如果'), 补动连接(如'每天做'), 副名连接(如'没人')
#           # 
flag_6 = 6  # 浅知连接, 模块间连接, (如'箱'), 动名连接(如'喝水')
#           # 
flag_7 = 7  # 数据连接, 名动连接(如'你去')
#           # 
flag_8 = 8  # 
#           # 

# 连接顺序:
#--block:---- -----1-1- ----------- --------1-- --1--------
#--block:---- -----2--- ----------- ----2-2-2-- -----------
#--block:---- ---3-3--- ----------- --3-3------ -----------
#--block:---- -------4- --4-4------ ----------- --4--------
#--block:---- -----5--- ------5---- --5-------- --5--------
#--block:---- -6-6----- --------6-- --6-------- -----------
#--block:---- --------- ----7-7---- ----------- --7-7------
#--block:---- --------- ------8---- ----------- ----8-8-8--
#--block:---- --------- ------9-9-- --9-------- --------9--
#          #  (1,2,3,4)  (5,6,7,8)   (9,0,1,2)   (3,4,5,6)
flag_list = [ [1,4,7,0,   0,0,0,4,    4,5,5,0,    0,0,0,4],   #1,
			  [0,4,7,4,   0,4,0,4,    4,7,5,0,    0,0,0,4],   #2,
			  [0,6,4,6,   0,6,0,6,    0,4,5,4,    0,5,0,4],   #3,
			  [0,4,7,4,   6,4,0,4,    0,0,0,2,    5,0,0,4],   #4,
			  
			  [0,0,0,2,   1,2,0,0,    0,0,0,2,    2,2,0,0],   #5
			  [0,4,7,4,   6,4,0,4,    0,0,5,0,    5,6,0,4],   #6,
			  [0,0,0,0,   0,0,0,0,    0,0,5,0,    0,2,2,2],   #7
			  [0,4,7,4,   0,4,0,4,    2,0,5,0,    0,0,0,4],   #8,
			  
			  [5,5,5,0,   0,0,5,5,    0,5,0,0,    0,0,0,5],   #9,
			  [0,5,5,5,   0,0,0,0,    2,1,2,4,    0,0,0,0],   #10
			  [0,5,5,5,   0,5,0,5,    0,5,1,2,    0,0,0,0],   #11,
			  [0,0,5,2,   0,5,4,0,    0,5,2,0,    0,0,0,0],   #12,
			  
			  [0,0,5,5,   5,5,5,0,    0,0,0,5,    5,5,0,0],   #13,
			  [0,5,5,5,   0,5,2,5,    0,0,6,0,    2,1,2,0],   #14,
			  [0,0,0,0,   0,0,2,0,    0,0,5,0,    0,2,0,2],   #15,
			  [0,7,0,5,   0,5,4,2,    4,0,0,0,    0,0,2,1]    #16,
			]

def choose_connect_flag(code_list):
# 单字/长词/逻辑/浅知模式:
#   词性-->词是否连接
#   按顺序从浅到深
#   词连接后, code变短, 需要更新连接列表

# rank2->rank1
    c_list = []
    for i in code_list:
        c_list.extend(i)
    
# flag(i)=concat(i,i+1)
    tmp_list = []
    for i in range(len(c_list)-1):
        n_left  = int(c_list[i])
        n_right = int(c_list[i+1])

        if n_left >= 1 and n_left <= 16 and n_right >= 1 and n_right <= 16:
            flag = flag_list[n_left-1][n_right-1]
            tmp_list.append(flag)
        elif n_left == 0 and n_right == 0:
            flag = 1
            tmp_list.append(flag)
        else:
            # 标点为0
            tmp_list.append(0)
    # 末尾补0(两两连接, 少一位)
    tmp_list.append(0)
    
# rank1->rank2
    out_list = []
    out_start = 0
    for i in code_list:
        in_len = len(i)
        out_list.append(tmp_list[out_start : out_start + in_len])
        out_start = out_start + in_len
    
    return out_list

def connect_content_from_flag(concat_list, code_list, level):
# 单字/长词/逻辑/浅知模式:
#   处理连接
    out_list = []
    sub_out_list = []
    for i,(tmp_mode_list, codes) in enumerate(zip(concat_list, code_list)):
        tmp_str = tmp_mode_list[0]
        flag_list = tmp_mode_list[1:]
        
        sub_out_list[0:1] = [''.join(sub_out_list[0:1]) + tmp_str]
        new_flag = flag_list.copy()
        new_codes = codes.copy()
        for j in range(len(flag_list)-2, -1, -1):
            flag = flag_list[j]
            if flag == 1:
                new_flag[j:j+1] = []
                new_codes[j:j+1] = []

        flag = new_flag[-1]
        if level == 1:
            # 单字模式
            sub_out_list.extend(new_codes)
            if flag != flag_1:
                out_list.append(sub_out_list)
                sub_out_list = []
        elif level == 2:
            # 长词模式
            sub_out_list.extend(new_codes)
            if flag != flag_2 and flag != flag_3 and flag != flag_4:
                out_list.append(sub_out_list)
                sub_out_list = []
            elif flag == flag_4 and i<len(concat_list)-1:
                # 最后一个词没有配对
                next_str = concat_list[i+1][0]
                # 微调--比较长的词不连接--len(1)与len(2)不连接
                if len(tmp_str)>=2 or len(next_str)>=2:
                    out_list.append(sub_out_list)
                    sub_out_list = []
        elif level == 3:
            # 逻辑模式
            sub_out_list.extend(new_codes)
            if flag < flag_1 or flag > flag_5:
                out_list.append(sub_out_list)
                sub_out_list = []
        elif level == 4:
            # 浅知模式
            sub_out_list.extend(new_codes)
            if flag < flag_1 or flag > flag_6:
                out_list.append(sub_out_list)
                sub_out_list = []
        elif level == 5:
            # 数据模式
            sub_out_list.extend(new_codes)
            if flag < flag_1 or flag > flag_7:
                out_list.append(sub_out_list)
                sub_out_list = []
                
    if len(sub_out_list)>1:
        out_list.append(sub_out_list)

    return out_list


    
import jieba

class TokenizerChg(object):
    """Runs end-to-end tokenziation."""

    def __init__(self, db_path=None, debug_log=False):
        self.db_path = db_path
        self.debug_log = debug_log

    def get_jieba_cut_list(self, pstr):
        ### jieba分词: 保留分割符(标点符号)
#       outlist = jieba.lcut(text,HMM=False)
        outlist = list(jieba.cut(pstr, cut_all=False))
        return outlist

    def tokens_parsing_category_from_db(self, unique_list):
        ### 获取类型
        number_list = get_category_from_db(unique_list, db_path=self.db_path)
        return number_list

    def _tokens_parsing(self, input_list, mode_num=0):
        ### mode 2~5: 
        name_dick = {1:"单字",2:"长词",3:"逻辑",4:"浅知",5:"数据",6:""}
        mode_name = name_dick.get(mode_num, "None")
        
        unique_list = [i[0] for i in input_list]
        code_list = [i[1:] for i in input_list]
        if self.debug_log:
            print ("\n%d%s词性  %s" % (mode_num, mode_name, str(code_list)) )
        flag_list = choose_connect_flag(code_list)
        concat_list = list(zip(unique_list, flag_list))
        concat_list = [[i[0]] + i[1] for i in concat_list]
        if self.debug_log:
            print ("%d是否连接  %s" % (mode_num, str(concat_list)) )
        output_list = connect_content_from_flag(concat_list, code_list, mode_num)   # min=level
        if self.debug_log:
            print ("%d%s模式  %s" % (mode_num, mode_name, str(output_list)) )
        
        return output_list

    def tokens_mode0(self, unique_list=None, text=None):
        ### 分词+添加词性+多义词+两len(1)连接+名词len(1)向前连接
        if text is not None:
            unique_list = self.get_jieba_cut_list(text)
        ### 原词性列表
        number_list = self.tokens_parsing_category_from_db(unique_list)
        concat_list = list(zip(unique_list, number_list))
        concat_list = [list(i) for i in concat_list]
        mode0_list = connect_content_from_db(concat_list, db_path=self.db_path)
        if self.debug_log:
            print ("----------------------------------")
            print ("0初始词性  %s" % (str(mode0_list)) )
        return mode0_list

    def tokens_mode1(self, mode0_list=None, text=None):
        ### mode1: 单字模式
        if text is not None:
            mode0_list  = self.tokens_mode0(text=text)
        unique_list = [i[0] for i in mode0_list]
        number_list = [i[1] for i in mode0_list]
        ### 逐字查找词性
        ###   detail_word 作用是拆分未知类(0,26)
        detail_word_list,code_list = get_single_code_from_db(unique_list, db_path=self.db_path)
        if self.debug_log:
            print ("\n1单字词性  %s" % (str(code_list)) )
        ### 常用词性替换+多义替换+未知类(0,26)替换+拆分未知类
        unique_list,code_list = merge_single_code(unique_list, detail_word_list, number_list, code_list)
        #print ("1单字合并  %s" % (str(code_list)) )
        flag_list = choose_connect_flag(code_list)
        concat_list = list(zip(unique_list, flag_list))
        concat_list = [[i[0]] + i[1] for i in concat_list]
        if self.debug_log:
            print ("1是否连接  %s" % (str(concat_list)) )
        mode1_list = connect_content_from_flag(concat_list, code_list, 1)
        if self.debug_log:
            print ("1单字模式  %s" % (str(mode1_list)) )
        return mode1_list

    def tokens_mode2(self, mode1_list=None, text=None):
        ### mode2: 长词模式
        if text is not None:
            mode1_list = self.tokens_mode1(text=text)
        output_list = self._tokens_parsing(mode1_list, mode_num=2)
        return output_list

    def tokens_mode3(self, mode2_list=None, text=None):
        # mode3: 逻辑模式
        if text is not None:
            mode2_list = self.tokens_mode2(text=text)
        output_list = self._tokens_parsing(mode2_list, mode_num=3)
        return output_list

    def tokens_mode4(self, mode3_list=None, text=None):
        ### mode4: 浅知模式
        if text is not None:
            mode3_list = self.tokens_mode3(text=text)
        output_list = self._tokens_parsing(mode3_list, mode_num=4)
        return output_list
        
    def tokens_mode5(self, mode4_list=None, text=None):
        ### mode5: 数据连接
        if text is not None:
            mode4_list = self.tokens_mode4(text=text)
        output_list = self._tokens_parsing(mode4_list, mode_num=5)
        return output_list
        
    def tokens_parsing_test(self, text=None):
        ### test:
        ### 句子拆分
        unique_list = self.get_jieba_cut_list(text)
        # 显示pstr 放在jieba调试信息后面
        if self.debug_log:
            print ("句子   : ", text)
            print ("jieba  : ", unique_list)
        # mode0:
        mode0_list = self.tokens_mode0(unique_list)
        # mode1:单字模式
        #   细化cx(如'700ml')
        #   解决多义问题(如'箱', 'cx:6,14')
        mode1_list = self.tokens_mode1(mode0_list)
        # mode2:长词模式
        mode2_list = self.tokens_mode2(mode1_list)
        # mode3:逻辑模式
        mode3_list = self.tokens_mode3(mode2_list)
        # mode4:浅知模式
        mode4_list = self.tokens_mode4(mode3_list)
        # mode5:数据连接
        mode5_list = self.tokens_mode5(mode4_list)
        return
        

