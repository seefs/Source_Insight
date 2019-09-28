
import re
import sys



#全局变量, 也只有salc内部使用
u_list = []        ## 分句--原词
n_list = []        ## 分句--词性


#临时变量, salc内部使用
#cur_item = ""
#base_block = 0    ## 每段清零
#cur_block = 0

#全局变量, 也只有salc内部使用
block_state = []     ## 空列表, 分区是否固定
#type_state  = []    ## 空列表, 状态是否固定

#全局变量, 多函数共用
cur_state_list  = [] ## 默认 [1,1,1,  1,1,1,  1,1,1]


#常量
block_def    = 0 #默认或边
block_splot  = 1 #外角的点
block_mid   = 2 #内解的点, 向中
block_first  = 1 #1~9
block_last   = 9
block_in     = 10
block_out    = 11 #剩余为空列表
block_zero   = 12
block_more   = 13
block_view_log =  ["-","1","2","3","4","5","6","7","8","9", "内部", "外部", "空", "多", "-", "-"]


#多选问题，用排除法, 删除非法状态
#带容错, 比实际要多
#                   (1,2,3)  (4,5,6)  (7,8,9)
base_state_list = [ [0,0,1,   0,0,1,   0,0,1], #1
                    [0,0,1,   0,0,1,   0,0,0], #2
                    [1,1,1,   0,0,0,   1,0,1], #3, 3可以在7，9
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
               
#固定块(1,9)时，是否能接(1,16)；方向问题
#15是否在第8块中: 状态0或1, 2表示向中, 
#块顺序--左右下上
#              (1,2,3,4)  (5,6,7,8)(9,10,11,12) (13,14,15,16)
block_list = [ [0,0,2,1,   1,1,0,0,  0,0,0,1,   1,0,0,0], #1, 到3是向内
               [0,0,1,0,   0,0,0,0,  0,1,1,1,   0,0,0,0], #2
               [1,1,1,0,   0,0,0,0,  1,1,0,0,   0,0,0,0], #3
               [0,0,0,1,   1,1,0,0,  0,0,1,0,   0,0,0,0], #4
               [0,0,1,0,   0,0,1,0,  1,0,0,0,   1,0,0,0], #5
               
               [1,0,0,0,   0,0,0,1,  1,0,0,0,   0,0,0,1], #6
               [0,0,1,0,   1,1,2,0,  0,0,0,0,   1,1,0,0], #7
               [0,0,0,0,   0,0,1,0,  0,0,0,0,   0,1,1,1], #8
               [1,0,1,0,   0,1,1,1,  2,0,0,0,   0,0,0,1]] #9

# 计算相似块
#  6--2,4,8
#  3--10,7,15
#  5--14,12,
# 15--8,10,12,
#                (1,2,3)    (4,5,6)    (7,8,9)
type_list =  [ [ 1, 1, 1,   1, 1, 1,   1, 1, 1], #1
               [ 4, 2, 2,   6, 2, 2,   6, 2, 8], #2
               [ 3, 3, 3,   3, 3, 3,   3, 3, 3], #3
               [ 4, 4, 2,   4, 4, 8,   6, 4, 8], #4
               [ 5, 5, 5,   5, 5, 5,  14, 5, 5], #5
               [ 4, 6, 2,   6, 6, 8,   6, 6, 8], #6
               [ 3, 7, 7,   7, 7, 7,   7, 7, 7], #7
               [ 4, 8, 2,   6, 8, 8,   6, 8, 8], #8
               [ 9, 9, 9,   9, 9, 9,   9,15, 9], #9
               [10,10,10,  10,10,10,  10,10,10], #10
               [11,11,11,  11,11,11,  11,11,11], #11
               [12,12,12,  12,12,12,  12,12,12], #12
               [13,13,13,  13,13,13,  13,13,13], #13
               [14,14,14,  14,14,14,  14,14,14], #14
               [ 3,15,15,  15,15,15,  15,15,15], #15
               [16,16,16,  16,16,16,  16,16,16]] #16

#最大可能
#改这个只影响分块.
#与第1组暂时一样，一般优先值为2,兼容值为1
#            (1,2,3)  (4,5,6)  (7,8,9)
max_block_list = [   [0,0,1,   0,0,2,   0,0,1], #1,  sum=4; 兼容
                     [0,0,1,   0,0,1,   0,0,0], #2,  sum=2;
                     [1,2,1,   0,0,0,   0,0,0], #3,  sum=4; 兼容
                     [1,0,0,   1,0,0,   0,0,0], #4,  sum=2;
                     [1,0,0,   2,0,0,   1,0,0], #5,  sum=4; 兼容
                     
                     [1,0,1,   2,0,0,   2,0,1], #6,  sum=7; 兼容
                     [0,0,0,   0,0,0,   1,2,1], #7,  sum=4; 兼容
                     [0,0,0,   0,0,1,   0,0,1], #8,  sum=2;
                     [0,0,1,   0,0,1,   0,0,1], #9,  sum=3;
                     [0,1,1,   0,0,0,   0,0,0], #10, sum=2;
                     
                     [0,1,0,   1,0,0,   0,0,0], #11, sum=2;
                     [1,1,0,   0,0,0,   0,0,0], #12, sum=2;
                     [1,0,0,   1,0,0,   1,0,0], #13, sum=3;
                     [0,0,0,   0,0,0,   1,1,0], #14, sum=2;
                     [0,0,0,   0,0,0,   0,1,0], #15, sum=1;
                     
                     [0,0,0,   0,0,0,   0,1,1]] #16, sum=2;


#中或外
#             (1,2,3,4) (5,6,7,8) (9,10,11,12) (13,14,15,16)
back_list =  [1,0,2,0,   1,0,2,0,   2,0,1,0,   2,0,1,0]
#back_list =  [    block_splot,  #1
#                  block_def ,   #2
#                  block_mid,    #3
#                  block_def,    #4
#                  block_splot,  #5
#                  block_def,    #6
#                  block_mid,    #7
#                  block_def,    #8
#                  block_mid,    #9
#                  block_def,    #10
#                  block_splot,  #11
#                  block_def,    #12
#                  block_mid,    #13
#                  block_def,    #14
#                  block_splot,  #15
#                  block_def     #16
#                ]
back_view_log =  ["边", "角", "中", "-","-"]



def get_max_block(last_list, last_len):
    cur_list    =  [0,0,0,   0,0,0,   0,0,0];
    on_off_list =  [1,1,1,   1,1,1,   1,1,1];
    cur_max  =  0;
#    log = ""
    for i in range(last_len):
        state = int(last_list[i])
#        log = log + str(i) + "--" + str(state) + ", "
        if state > 16:
            continue;
        if state == 0:
            continue;
        sub_list = max_block_list[state-1];
        for j in range(9):
            cur_list[j] = cur_list[j] + sub_list[j];
            if sub_list[j] == 0:
                on_off_list[j] = 0;
    for i in range(9):
        cur_list[i] = cur_list[i] * on_off_list[i];
#    print("log max:" + log + ", cur_list:" + str(cur_list))
    cur_max = max(cur_list);
    if cur_max == 0:
        return 0
    else:
        return cur_list.index(cur_max)+1


def get_type(last_item, last_block ):
    if last_item > 16:
        return last_item
    sub_list = type_list[last_item-1];
    type = sub_list[last_block-1]
#    print("log type:" + str(last_item) + ", sub_list:" + str(sub_list) + ", type:" + str(type))
    if type == 0:
        return last_item
    else:
        return type

def get_block_num_if_one(  ):
    cnt = 0;
    block = 0;
    for i in range(9):
        state = cur_state_list[i]
        if state > 0:
            cnt = cnt + 1;
            block = i + 1;
    if cnt == 0:
        return block_zero
    elif cnt == 1:
        return block
    else:
        return block_more


#  类型容错改--base_state_list
def set_state_list( last_item):
    if last_item > 16:
        return;
    if last_item == 0:
        for i in range(9):
            cur_state_list[i] = 0
        return;
    sub_list = base_state_list[last_item-1];
    log = ""

    s_back_block = back_list[last_item-1]
    for i in range(9):
        is_block = sub_list[i]
        log = log + "-" + str(is_block)
        
        if cur_state_list[i] == 0:
            #已经不可能
            continue;
            
        if s_back_block == block_def:
            #边值(=0)取消兼容
            if cur_state_list[i] == 1:
                cur_state_list[i] = 2;
                
        if is_block == 0:
            #可能块为0, 就是不可能
            cur_state_list[i] = 0
#        elif is_block == 2:
#            #兼容值, 不能为边值
#            if cur_state_list[i] == 2:
#                cur_state_list[i] = 0;
#    print("log state:" + str(last_item) + "  " + log + " fx=" + str(back_view_log[s_back_block]) )


#上一个为边才不能回跳; 中间的假定为多类
last_tmp_item = 0

# 不准确的话修改: 
#   1.block_list[0~8]--块允许的类型, 
#   2.back_list[0~15]--块确认时, 是否向中; 改不了, 可以改block_list为2
def is_state_out(cur_item, tmp_block ):
    if cur_item > 16:
        return block_in;
    if cur_item == 0:
        return block_out;
    if tmp_block == block_def:
        last_tmp_item = 0
        return block_def
    last_tmp_item = cur_item

    #15是否在第8块中
    sub_list = block_list[tmp_block-1];
#    print("out block:" + str(tmp_block) + " sub_list:" + str(sub_list) + ", item:" + str(sub_list[cur_item-1]))
    
    # 细化符合状态:                     返回值: 
    #    0: 表示边-block_def       10: block_in
    #    1: 表示角-block_splot   
    #    2: 表示内-block_mid,    
    if sub_list[cur_item-1] == block_def:
        return block_out
    elif sub_list[cur_item-1] == block_mid:
        #边--0
        if back_list[cur_item-1] == block_def:
            return block_in
        #外角的点--1
        elif back_list[cur_item-1] == block_splot:
            return block_in
        #内解的点--2
        elif back_list[cur_item-1] == block_mid:
            return block_out
    else:
        return block_in



#主要分句计算函数
def soul_base_calc(unique_list, number_list, s_u_list, s_n_list, s_list_block):
    # 6_11_6_7_1_6_16_9_14_8_11_6
    global cur_state_list;
    global n_list;
    global u_list;
    global block_state;
    
    n_list.clear()
    u_list.clear()
    list_len = 0
    block_state = []
    
    base_block = block_def
    cur_block = 0
    cur_state_list = [1,1,1,  1,1,1,  1,1,1];
    
    n_len = len(number_list)
    
    # number_list 格式: 6_11_6_7_1_6_16_9_14_8_11_6
    for t_i in range(n_len):
        # item 0
        cur_item = number_list[t_i]
        
        #是否属于哪一块(有容错)
        #re:默认, 块内, 块外
#  相当于Lv3--意层--不到意层; 不准向中; 
        is_block_out = is_state_out(int(cur_item), base_block )
        
        #log--1----断开点
#  断开改这里
#        print("item_up1:" + cur_item + " str:" + unique_list[t_i] + ", base_block:" + str(base_block) + ", is_out:" + str(is_block_out) + ", state_list:" + str(cur_state_list))
        
        #排除多选问题(有容错)(或不容: 外向内)
        #9位状态1, 删的只剩下1位, 即是最终块
#  类型容错改这里
        set_state_list(int(cur_item)); # cur_state_list
        
        #log--2----剩余状态；log3最好同时打开log2
#  不断开改这里
#        print("item_up2:" + cur_item + " str:" + unique_list[t_i] + ", base_block:" + str(base_block) + ", is_out:" + str(is_block_out) + ", state_list:" + str(cur_state_list))
        
        #排除多选问题
        #返回: 最终块, 无块, 多块
        cur_block = get_block_num_if_one() #4,4,8-9
        if cur_block >= block_first and cur_block <= block_last :
#  相当于Lv2--句层--新到意层; 不准向中; 
            is_block_out = is_state_out(int(cur_item), cur_block )
#        print("cur_block:" + str(block_view_log[cur_block]) + ", is_block_out:" + str(is_block_out))
        
        # 非最终块-->完成list
        if cur_block == block_zero or is_block_out == block_out:
            list_len = len(n_list)
            # 默认块仍没有确认, 计算最大可能
            if base_block == block_def:
                base_block = get_max_block(n_list, list_len)
                
            #log--3----kuai
#            print("max:" + cur_item + " str:" + unique_list[t_i] + ", n_list:" + str(n_list) + ", base_block:" + str(base_block))
#            print("block_state:" + str(block_state))

            # 更新默认块, 精准词性, 暂时没什么用吧
            for i in range(list_len):
                if block_state[i] == block_more:
                    # 计算相似块
                    list_i = get_type(int(n_list[i]), base_block )
                    n_list[i] = list_i
#            print("block_state:" + str(block_state) + ", n_list:" + str(n_list) )

            # add
            s_n_list.append(n_list)
            s_u_list.append(u_list)
            s_list_block.append(base_block)
#            print("    ----- next --1--------------------")
            
            #next
            n_list = []
            u_list = []
            list_len = 0
            block_state = []
            base_block = block_def
            cur_block = 0  #多余, 后面会改
            cur_state_list = [1,1,1,  1,1,1,  1,1,1];
            
#  断开改这里
#            print("item_dw1:" + cur_item + " str:" + unique_list[t_i] + ", base_block:" + str(base_block) + ", is_out:" + str(is_block_out) + ", state_list:" + str(cur_state_list))

            #排除多选问题--状态
            set_state_list(int(cur_item)); # cur_state_list
            #log--2----剩余状态；log3最好同时打开log2
#  不断开改这里
#            print("item_dw2:" + cur_item + " str:" + unique_list[t_i] + ", base_block:" + str(base_block) + ", is_out:" + str(is_block_out) + ", state_list:" + str(cur_state_list))
            
    #        print("new :" + cur_item + ", state_list:" + str(cur_state_list))
            #排除多选问题--最终块
            cur_block = get_block_num_if_one()
            n_list.append(cur_item)
            u_list.append(unique_list[t_i])
            block_state.append(cur_block)
                
        # 是最终块-->next
        else:
            if cur_block >= block_first and cur_block <= block_last :
                base_block = cur_block

            # add
            n_list.append(cur_item)
            u_list.append(unique_list[t_i])
            block_state.append(cur_block)
    
    list_len = len(n_list)
    # 默认块仍没有确认, 计算最大可能
    if base_block == block_def:
        base_block = get_max_block(n_list, list_len)
        
    #print("max:" + cur_item + ", list_len:" + str(list_len) + ", base_block:" + str(base_block))
    
    # add
    s_n_list.append(n_list)
    s_u_list.append(u_list)
    s_list_block.append(base_block)
#    print("    ----- next --2--------------------")
    
    #next
    n_list = []
    u_list = []
    list_len = 0
    block_state = []
    base_block = block_def
    cur_block = 0  #多余, 后面会改
    cur_state_list = [1,1,1,  1,1,1,  1,1,1];





