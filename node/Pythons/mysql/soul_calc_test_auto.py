
import jieba
import pickle
import jieba.analyse
import re
import os, sys

import soul_calc_split
import soul_calc_base


unique_list = []
number_list = []
s_u_list = []        ## 分句--原词--列表
s_n_list = []        ## 分句--词性--列表
s_list_block = []    ## 块列表





def soul_base_show(cstr):
   #显示:
   show_list =  ["地位","想象","悲乐",  "选弃","余生","舍得",  "权责","是非","行止"  ]
   
   list_len = len(s_n_list);
   for i in range(list_len):
       sublist = s_n_list[i]
       zlist = s_u_list[i]
       subblock = s_list_block[i]
       print ("sublist %s: %s--%s" % (str(i), str(sublist), str(zlist)) )
       print ("subblock%s:  %s--%s" % (str(i), str(subblock), str(show_list[int(subblock)-1])) )


def soul_base_show2(cnt, s_u_list, s_n_list, s_list_block):

   #显示:
   show_list =  ["*地位*","*想象*","*悲乐*",  "*选弃*","*余生*","*舍得*",  "*权责*","*是非*","*行止*"  ]
   
#    print (str(cstr))
#    print (str(s_u_list))
#    print (str(s_n_list))
#    print (str(s_list_block))
   
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
#    print ("\\033[0;35;40m" + sublist3 + "\033[0m" )
   print (sublist3 )
   print ("")

   
def soul_test_main():
   cstr =  "我们_文学社_的_同学_大概_是_要_分开_了";
   nstr =  "1_8_11_6_15_9_10_3_11";
   unique_list = re.split('_', cstr)
   number_list = re.split('_', nstr)
   soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
   soul_base_show2("1", s_u_list, s_n_list, s_list_block)
    
   cstr =  "还有_去_传达室_看看_有没有_录_美国_来_的_信";
   nstr =  "3_16_6_3_3_26_8_7_11_6";
   unique_list = re.split('_', cstr)
   number_list = re.split('_', nstr)
   soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
   soul_base_show2("2", s_u_list, s_n_list, s_list_block)
   
   cstr =  "听见_门里_的_婶婶_还是_嘟嘟哝哝_地_抱怨";
   nstr =  "3_16_11_6_13_3_11_3";
   unique_list = re.split('_', cstr)
   number_list = re.split('_', nstr)
   soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
   soul_base_show2("3", s_u_list, s_n_list, s_list_block)


if __name__ == "__main__":
   soul_test_main()


