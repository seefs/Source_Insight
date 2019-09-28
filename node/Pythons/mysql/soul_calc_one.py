
import re
import os, sys

import soul_calc_split
import soul_calc_base


unique_list = []     ## 原词列表
number_list = []     ## 词性列表

s_u_list = []        ## 分句--原词--列表
s_n_list = []        ## 分句--词性--列表
s_list_block = []    ## 块列表



def soul_base_show(s_u_list, s_n_list, s_list_block):

   #显示:
   show_list =  [",", "*1*地位*","*2*想象*","*3*悲乐*",  "*4*选弃*","*5*余生*","*6*舍得*",  "*7*权责*","*8*是非*","*9*行止*"  ]
   
   unique = ""
   number = ""
   block  = ""
   list_len = len(s_n_list);
   for i in range(list_len):
       sub_len = len(s_u_list[i]);
       str_len = len(str(s_u_list[i]));
       unique = unique + format(str(s_u_list[i]), "<%s" % (str(str_len)))
       number = number + format(str(s_n_list[i]), "<%s" % (str(str_len + sub_len+1)))
       bid = int(s_list_block[i])
       block  = block  + format(str(show_list[bid]), "<%s" % (str(str_len + sub_len)))
   print ("unique: %s" % (str(unique)) )
   print ("number: %s" % (str(number)) )
   print ("block : %s" % (str(block )) )
   print ("")

   
def soul_one_main():
   nstr = "1_7_6_16_15_15_4"
   cstr = "她_在_陌生人_面前_一直_比较_害羞"
   unique_list = re.split('_', cstr)
   number_list = re.split('_', nstr)
#    分句计算
    soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
#    对齐输出
    soul_base_show(s_u_list, s_n_list, s_list_block)
    return;


if __name__ == "__main__":
   soul_one_main()


