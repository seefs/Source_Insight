
import re
import os, sys

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

   
def soul_test_main():
   nstr = sys.argv[1]
   cstr = sys.argv[2]
   unique_list = re.split('_', cstr)
   number_list = re.split('_', nstr)
   soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
   soul_base_show("1", s_u_list, s_n_list, s_list_block)
    


if __name__ == "__main__":
   soul_test_main()


