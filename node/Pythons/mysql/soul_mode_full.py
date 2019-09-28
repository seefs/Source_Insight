
import re
import os, sys

import soul_mode_split
import soul_mode_base


unique_list = []     ## 原词列表
number_list = []     ## 词性列表

s_u_list = []        ## 分句--原词--列表
s_n_list = []        ## 分句--词性--列表
s_list_block = []    ## 块列表

mode1_list = []     ## mode
mode2_list = []     ## mode
mode3_list = []     ## mode
mode4_list = []     ## mode
mode5_list = []     ## mode
mode6_list = []     ## mode
mode7_list = []     ## mode
mode8_list = []     ## mode
mode9_list = []     ## mode


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
   
    global mode1_list;
    global mode2_list;
    global mode3_list;
    global mode4_list;
    global mode5_list;
    global mode6_list;
    global mode7_list;
    global mode8_list;
    global mode9_list;
    
#    pstr = sys.argv[1]
    
    unique_list = []
    number_list = []
    s_u_list = []
    s_n_list = []
    s_list_block = []

    mode1_list = []
    mode2_list = []
    mode3_list = []
    mode4_list = []
    mode5_list = []
    mode6_list = []
    mode7_list = []
    mode8_list = []
    mode9_list = []
    tmp_list = []
    base_list = []
    code_list = []
    flag_list = []
    view_list = []
    mini_list = []
    
#    句子拆分, 未加标点符号强拆
    soul_mode_split.soul_full_split(unique_list, pstr);
#    转换成词性
    soul_mode_split.soul_full_db(unique_list, number_list);
    
#    print ("")
    print ("句子   : %s" % (pstr) )
#    print ("")
    print ("新词性  %s" % (str(unique_list)) )
    print ("新词性  %s" % (str(number_list)) )
#    print ("")
    

### mode1--test:
#      先不管模式转换--"一种"->"一"
#    test:
#    tmp_list = ["一种", '每分钟', '700ml']
#    soul_mode_split.soul_full_check(tmp_list, mode1_list,0);

### mode1:单词拆分
    print ("")
    mode1_list = []
    soul_mode_split.soul_full_check(unique_list, mode1_list, 1);
    print ("1单词模式  %s" % (str(mode1_list)) )
    
    view_list = []
    soul_mode_split.soul_full_check_one(mode1_list, view_list);
    print ("1单词---1  %s" % (str(view_list)) )

### mode2:长词模式
#    第1遍
    base_list = []
    soul_mode_split.soul_full_data_move(mode1_list, base_list); #改成1维数组, clean

    print ("")
    code_list = []
    soul_mode_split.soul_full_data_code(base_list, code_list, 3);   #编号, clean
#    print ("2长词模式  %s" % (str(code_list)) )
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);    #组合, clean
#    print ("2长词模式  %s" % (str(flag_list)) )
    mode2_list = []
    soul_mode_split.soul_full_long(base_list, flag_list, mode2_list, 0, 0);    #1--省略前连接词
    print ("2长词模式  %s" % (str(mode2_list)) )
    view_list = []
    soul_mode_split.soul_full_view(mode2_list, view_list, 2);   #显示, clean
    print ("2长词---1  %s" % (str(view_list)) )


#    第2遍
#           不更新 mini_list, 为了保留长词
    base_list = []
    soul_mode_split.soul_full_data_copy(mode2_list, base_list);  #复制
    
#    print ("")
    code_list = []
#    print ("2长词模式  %s" % (str(base_list)) )
    soul_mode_split.soul_full_data_code(base_list, code_list, 3);   #编号, clean
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);    #组合, clean
#    print ("2--code--  %s" % (str(code_list)) )                      #连接方式
#    print ("2--flag--  %s" % (str(flag_list)) )                      #连接方式
    mode2_list = []
    soul_mode_split.soul_full_long(base_list, flag_list, mode2_list, 0, 0);    #1--省略前连接词
#    print ("2长词数组  %s" % (str(mode2_list)) )
    view_list = []
    soul_mode_split.soul_full_view(mode2_list, view_list, 2);
    print ("2长词---2  %s" % (str(view_list)) )

#    第3遍
    mini_list = []
    soul_mode_split.soul_full_long(base_list, flag_list, mini_list, 0, 1);
#    print ("2--mini--  %s" % (str(mini_list)) )
    mode2_list = []
    soul_mode_split.soul_full_data_copy(mini_list, mode2_list);  #复制
    base_list = []
    soul_mode_split.soul_full_data_copy(mode2_list, base_list);  #复制
#    print ("")
    code_list = []
    soul_mode_split.soul_full_data_code(base_list, code_list, 3);   #编号, clean
#    print ("2--code--  %s" % (str(code_list)) )                      #连接方式
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);     #组合, clean
#    print ("2--flag--  %s" % (str(flag_list)) )                      #连接方式
    mode2_list = []
    soul_mode_split.soul_full_long(base_list, flag_list, mode2_list, 0, 0);    #1--省略前连接词
#    print ("2长词数组  %s" % (str(mode2_list)) )
    view_list = []
    soul_mode_split.soul_full_view(mode2_list, view_list, 2); # min=2
    print ("2长词---3  %s" % (str(view_list)) )

### mode3:逻辑模式
    mini_list = []
    soul_mode_split.soul_full_long(base_list, flag_list, mini_list, 1, 0);    #1--省略前连接词
    base_list = []
    soul_mode_split.soul_full_data_copy(mini_list, base_list);  #复制
#    print ("3--mini--    %s" % (str(base_list)) )

    print ("")
    code_list = []
    soul_mode_split.soul_full_data_code(base_list, code_list, 3);
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);
#    print ("3逻辑模式  %s" % (str(code_list)) )
#    print ("3逻辑模式  %s" % (str(flag_list)) )
    mode3_list = []
    soul_mode_split.soul_full_logic(base_list, flag_list, mode3_list, 0, 0);
    print ("3逻辑模式  %s" % (str(mini_list)) )        #没有用mode3_list, 不好看
    view_list = []
    soul_mode_split.soul_full_view(mode3_list, view_list, 3); # min=3
    print ("3逻辑---1  %s" % (str(view_list)) )

### mode4:浅知模式
#    第1遍
    mini_list = []
    soul_mode_split.soul_full_logic(base_list, flag_list, mini_list, 1, 1);
    base_list = []
    soul_mode_split.soul_full_data_copy(mini_list, base_list);  #复制
#    print ("4--mini--  %s" % (str(mini_list)) )

    print ("")
    code_list = []
    soul_mode_split.soul_full_data_code(base_list, code_list, 4);
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);
#    print ("4浅知模式  %s" % (str(code_list)) )
#    print ("4浅知模式  %s" % (str(flag_list)) )
    mode4_list = []
    soul_mode_split.soul_full_shallow(base_list, code_list, flag_list, mode4_list, 0);
    print ("4浅知模式  %s" % (str(mini_list)) )        #没有用mode3_list, 不好看
    view_list = []
    soul_mode_split.soul_full_view(mode4_list, view_list, 4); # min=4
    print ("4浅知---1  %s" % (str(view_list)) )


#    第2遍
    mini_list = []
    soul_mode_split.soul_full_shallow(base_list, code_list, flag_list, mini_list, 0); #浅知--就不删除内容了
#    print ("2--mini--  %s" % (str(mini_list)) )
    base_list = []
    soul_mode_split.soul_full_data_copy(mini_list, base_list);  #复制
#    print ("")
    code_list = []
    soul_mode_split.soul_full_data_code(base_list, code_list, 4);   #编号, clean
    flag_list = []
    soul_mode_split.soul_full_data_flag(code_list, flag_list);    #组合, clean
#    print ("4--code--  %s" % (str(code_list)) )                      #连接方式
#    print ("4--flag--  %s" % (str(flag_list)) )                      #连接方式
    mode4_list = []
    soul_mode_split.soul_full_shallow(base_list, code_list, flag_list, mode4_list, 0);
#    print ("4浅知模式  %s" % (str(mini_list)) )        #没有用mode3_list, 不好看
    view_list = []
    soul_mode_split.soul_full_view(mode4_list, view_list, 4); # min=4
    print ("4浅知---2  %s" % (str(view_list)) )





#    分句计算
#    soul_mode_base.soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block)
#    对齐输出
#    soul_base_show(s_u_list, s_n_list, s_list_block)
    return;

   
def soul_main():
#    pstr = "一种药液箱的容积14L，如果每分钟喷出药液700ml，喷完一箱药液需用多少分钟？"
#    soul_full(pstr);

#这条太复杂了.
#    pstr = "粉刷一间长8米、宽6米，高3.5米的长方体教室，除去门窗面积27平方米。已知每平方米用涂料0.3千克。这间教室一共要用多少千克涂料？"
#    pstr = "高3.5米的长方体教室"
#    soul_full(pstr);

#    pstr = "食堂买来40袋面粉。如果每天吃6袋，可以吃几天?还剩几袋?如果每天吃7袋呢?"
#    soul_full(pstr);

#这条太复杂了.
#    pstr = "一个长方体容器，从里面量长、宽均为2dm，向容器中倒入5.9L水后，再把一个西红杮放入水中，这时量得容器内的水深是16cm，这个西红杮的体积是多少？"
#    soul_full(pstr);

    pstr = "把长1m的长方体木棍截成3段，表面积增加20cm2，这根木棍原来的体积是多少cm3？"
    soul_full(pstr);


if __name__ == "__main__":
    soul_main()

    
#    一种药液箱的容积14L，如果每分钟喷出药液700ml，喷完一箱药液需用多少分钟
#    ----------------------------------------------------------------------
#    //1-单词模式:
#    一  药液    箱 容积 14 每 喷出 药液 700 喷 一 药液 用
#    //2-长词模式:
#    一种--药液箱       --14L，每分钟--      喷出--700ml，一箱 --  需用     多少--分钟
#    //3-逻辑模式:
#    药液箱--的--容积         如果--每分钟        药液--700ml      喷完--药液       需用--分钟
#    //4-浅知模式:
#    容积--14L    每分钟--700ml      一箱--多少分钟
#    //5-数据模式:
#    1L=1000ml, 容积a,速度b,时间c
#    //6-分析模式:
#    容积=分钟*ml/分钟
#    //7-修罗模式:
#    去权, 去占, 去名, 去独
#    //8-去俗模式:
#    反抗，有用，互助，遗忘
#    //9-轮回模式:
#    自然改变




