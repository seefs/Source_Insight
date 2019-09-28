
import re
import sys

import soul_calc_split
import soul_calc_base


unique_list = []     ## 原词列表
number_list = []     ## 词性列表

s_u_list = []        ## 分句--原词--列表
s_n_list = []        ## 分句--词性--列表
s_list_block = []    ## 块列表



def soul_base_show(cnt, s_u_list, s_n_list, s_list_block):

   #显示:
   show_list =  ["*地位*","*想象*","*悲乐*",  "*选弃*","*余生*","*舍得*",  "*权责*","*是非*","*行止*"  ]
   
   sublist1 = ""
   sublist2 = "  "
   sublist3 = "  "
   list_len = len(s_n_list);
   for i in range(list_len):
       sublist1 = sublist1 + format(str(s_u_list[i]), "<18")
       sublist2 = sublist2 + format(str(s_n_list[i]), "<18")
       sublist3 = sublist3 + format(str(show_list[int(s_list_block[i])-1]), "<18")
   print (cnt + " " + sublist1)
   print (sublist2)
   print (sublist3 )
   print ("")

   
def soul_full_main():
    global unique_list;
    global number_list;
    global s_u_list;
    global s_n_list;
    global s_list_block;
   
    pstr = sys.argv[1]
    
    unique_list = []
    number_list = []
    s_u_list = []
    s_n_list = []
    s_list_block = []
    
#    句子拆分, 未加标点符号强拆
    soul_calc_split.soul_full_split(unique_list, pstr);
#    转换成词性
    soul_calc_split.soul_full_db(unique_list, number_list);
    
    print ("")
    print ("pstr %s" % (pstr) )
#    print ("unique %s" % (str(unique_list)) )
#    print ("number %s" % (str(number_list)) )
    
#    分句计算
    soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
#    对齐输出
#    soul_calc_base.soul_base_show2("3")

    print ("s_u_list %s" % (str(s_u_list)) )
    print ("s_n_list %s" % (str(s_n_list)) )
    print ("s_list_block %s" % (str(s_list_block)) )
    soul_base_show("1", s_u_list, s_n_list, s_list_block)
    return;


if __name__ == "__main__":
    soul_full_main()





