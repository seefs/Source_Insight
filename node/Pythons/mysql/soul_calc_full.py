
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

   #显示模式1--用于log.
#   unique = ""
#   number = ""
#   block  = ""
#   list_len = len(s_n_list);
#   for i in range(list_len):
#       sub_len = len(s_u_list[i]);
#       str_len = len(str(s_u_list[i]));
#       unique = unique + format(str(s_u_list[i]), "<%s" % (str(str_len)))
#       number = number + format(str(s_n_list[i]), "<%s" % (str(str_len + sub_len+1)))
#       bid = int(s_list_block[i])
#       block  = block  + format(str(show_list[bid]), "<%s" % (str(str_len + sub_len)))
#   print ("unique: %s" % (str(unique)) )
#   print ("number: %s" % (str(number)) )
#   print ("block : %s" % (str(block )) )


   #显示模式2--正常情况.
   items = ""
   list_len = len(s_n_list);
   for i in range(list_len):
       bid = int(s_list_block[i])
       show_items  = show_list[bid]
       items = "";
       item_len2 = 70-len(str(s_u_list[i]));
       item_len3 = 25-len(str(show_items));
       if(item_len2<0):
           item_len2=1;
       items = str(s_u_list[i]) + format(str(s_n_list[i]), ">%s" % (str(item_len2))) + format(str(show_items), ">%s" % (str(item_len3)));
#       items = str(s_u_list[i]) + "    " +  str(s_n_list[i])  + "    " +  str(item_len2) + format(str(show_items), ">%s" % (str(item_len3))) ;
#       items = format(str(show_items), ">%s" % (str(item_len3)));
#       items = format(str(s_n_list[i]), ">%s" % (str(item_len2)));
#       items = str(s_n_list[i]);
#       items = str(item_len2);
       print ("item%d: %s" % (i, str(items)) )

   print ("")

   
def soul_full(pstr):
    global unique_list;
    global number_list;
    global s_u_list;
    global s_n_list;
    global s_list_block;
   
#    pstr = sys.argv[1]
    
    unique_list = []
    number_list = []
    s_u_list = []
    s_n_list = []
    s_list_block = []
    
#    句子拆分, 未加标点符号强拆
    soul_calc_split.soul_full_split(unique_list, pstr);
#    转换成词性
    soul_calc_split.soul_full_db(unique_list, number_list);
    
#    print ("")
    print ("que   : %s" % (pstr) )
#    print ("")
#    print ("list1  %s" % (str(unique_list)) )
#    print ("list2  %s" % (str(number_list)) )
#    print ("")
    
#    分句计算
    soul_calc_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
#    对齐输出
    soul_base_show(s_u_list, s_n_list, s_list_block)
    return;

   
def soul_main():
    pstr = "一种药液箱的容积14L，如果每分钟喷出药液700ml，喷完一箱药液需用多少分钟？"
    soul_full(pstr);

#这条太复杂了.
#    pstr = "粉刷一间长8米、宽6米，高3.5米的长方体教室，除去门窗面积27平方米。已知每平方米用涂料0.3千克。这间教室一共要用多少千克涂料？"
#    soul_full(pstr);

#    pstr = "食堂买来40袋面粉。如果每天吃6袋，可以吃几天?还剩几袋?如果每天吃7袋呢?"
#    soul_full(pstr);

#这条太复杂了.
#    pstr = "一个长方体容器，从里面量长、宽均为2dm，向容器中倒入5.9L水后，再把一个西红杮放入水中，这时量得容器内的水深是16cm，这个西红杮的体积是多少？"
#    soul_full(pstr);

#    pstr = "把长1m的长方体木棍截成3段，表面积增加20cm2，这根木棍原来的体积是多少cm3？"
#    soul_full(pstr);


if __name__ == "__main__":
    soul_main()





