

import sys
import os
import tensorflow as tf
from tensorflow import keras
from keras import backend as K
import numpy as np
import copy


# path
curPath  = os.path.abspath(os.path.dirname(__file__))
rootPath = os.path.split(curPath)[0]
dataPath = os.path.join(rootPath, "data")
modelPath = os.path.join(dataPath, "model")
csvPath  = os.path.join(dataPath, "csv")

# file
h5_file      = os.path.join(modelPath, "atec_nlp_calc_{}.h5")

# cfg
sys.path.append(rootPath)

# Custom Class
from _loader import LoadData, load_debug_data, load_preprocess_data
#from _token import TokenizerChg
from _losses import f1, expand_dims_f1, cross_entropy_loss, accuracy
#from _model import create_model
from _layer import EmbeddingsLayer                # 词向量




#   计算主要类
def old_pred(p_list):
    p = K.clip(p_list, 0, 1)
    n = 1-p_list
    pred = tf.concat([n, p], -1)
    pred = tf.cast(pred, dtype=tf.float32)
    return pred
    
def compare_pred(old_list, new_list):
    rt= K.round(K.clip(new_list, 0, 1))  # true positives
    rn= 1-rt
    ###
    a_list = old_list*rn + new_list*rt
    p = K.clip(a_list, 0, 1)
    n = 1-a_list
    pred = tf.concat([n, p], -1)
    pred = tf.cast(pred, dtype=tf.float32)
    return pred


def old_acc_f1(p_list, y_true, HP_m = None):
    pred = old_pred(p_list)
#    print ("  pred: %s" % (pred))
    acc = accuracy(y_true, pred)
    f1_score = expand_dims_f1(y_true, pred)
    return acc,f1_score

def compare_acc_f1(old_list, new_list, y_true, stepC, stepV):
    pred   = compare_pred(old_list, new_list)
#    print ("  pred: %s" % (pred))
    acc = accuracy(y_true, pred)
    f1_score = expand_dims_f1(y_true, pred)
#    print("concat hc=%s,hv=%s, max accuracy: %f, f1: %f" % (stepC, stepV, acc, f1_score))
    return f1_score
    
def part_list_pred(old_list, part_list, partV):
    old_list = K.squeeze(old_list, -1)
    part_list = K.squeeze(part_list, -1)
    out_pt = []
    for i, (ol,pt) in enumerate(zip(old_list, part_list)):
        for i, (minO,maxO,minP,maxP,p) in enumerate(partV):
            if ol>minO and ol<=maxO and pt>minP and pt<=maxP :
#                print (" part: %.3f<%.3f<%.3f  %.3f<%.3f<%.3f" % (np.array(minO), np.array(ol), np.array(maxO), np.array(minP), np.array(pt), np.array(maxP)))
                out_pt.append(p)
                break
        else:
            out_pt.append(ol)
    out_pt = tf.expand_dims(out_pt, -1)
    return out_pt
    
def get_part_class(brd_sum, HP_c=[1*17]):
#    print ("------------------------------")
    part_list = []
    for clsV in brd_sum:
        clsV = clsV*HP_c
        clsV = K.sum(clsV, axis=None, keepdims=False)
#        print ("  clsV: %s" % (clsV))
        part_list.append(clsV)
    part_list = tf.expand_dims(part_list, -1)
    return part_list
    
maxV = 0
maxP = 0
def get_new_class(brd_sum, y_true, HP_c=[1*17], HP_m=1.0):
#    print ("------------------------------")
    global maxV,maxP
    new_list = []
    for clsV in brd_sum:
        clsV = clsV*HP_c
        clsV = K.sum(clsV, axis=None, keepdims=False)
        
#        if clsV>maxV:
#            maxV=clsV
#            print ("  clsV: %s  HP_m: %s" %  (clsV, HP_m))

#        if HP_m>maxP:
#            maxP=HP_m
#            print ("  clsV: %s  HP_m: %s" %  (clsV, HP_m))

        if clsV>HP_m:
            clsV = round(float(0.8+clsV*0.001), 4)
        else:
            clsV = round(float(0.2+clsV*0.001), 4)
        new_list.append(clsV)
    new_list = tf.expand_dims(new_list, -1)
    return new_list
    
def get_old_class(brd_sum, HP_m = None):
    if HP_m is None:
        HP_m = np.array([0,  1.15,1,1,1,1,  1,1,1,1.17,0.80,  0.80,0.80,0.90,0,0.80, 0.80])
    old_list = []
    for clsV in brd_sum:
        clsV = clsV*HP_m
        cnt = K.sum(tf.cast(tf.greater(clsV, 0), dtype=tf.float32), axis=None, keepdims=False)
        if cnt==0:
            cnt = 1
        clsV = K.sum(clsV, axis=None, keepdims=False)
        clsV = tf.cast(clsV, dtype=tf.float32)
        clsV = clsV/cnt
        old_list.append(clsV)
    old_list = tf.expand_dims(old_list, -1)
    return old_list


def get_data_200():
    brd_sum = load_debug_data(np.float, name='brd_sum_200')
    sub_path = '_tf200_1_f1_0825'
#    sub_path = '_tf200_2_f1_0529'
    y_true = load_preprocess_data(np.int, sub_path=sub_path, name='train_y')
    return brd_sum, y_true

def get_data_1000():
    brd_sum = load_debug_data(np.float, name='brd_sum_1000')
#    sub_path = ''
    sub_path = '_tf1000_1_f1_0653'
    y_true = load_preprocess_data(np.int, sub_path=sub_path, name='train_y')
    return brd_sum, y_true

def test_param():
#    brd_sum, y_true = get_data_200()
    brd_sum, y_true = get_data_1000()
    print ("  brd_sum: %s" % (tf.shape(brd_sum)))       #[200  17]
    print ("  y_true: %s" % (tf.shape(y_true)))

### 最大单项值:
    #   max: 3.0717332
    #   max: 3.38998
    tmp = tf.reshape(brd_sum, [-1])
    print ("  max: %s  min: %s" % (np.array(max(tmp)), np.array(min(tmp))))
    print ("------------------------------")

##### 当前指标: 
    #   f1: 0.739130
    #   f1: 0.755319
    print ("当前指标:")
    old_list = get_old_class(brd_sum, HP_m = None)
    # 单独指标, 原最佳指标
    acc,f1_score = old_acc_f1(old_list, y_true)
    print("accuracy: %f, f1: %f" % (acc, f1_score))
    print ("更新hp列表后:")
#    HP_o = np.array([0.00,  1.00, 0.95, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.17, 0.80,   0.80, 0.80, 0.90, 0, 0.80,  0.80])
    HP_o = np.array([0.00,  1.00, 1.15, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.695, 0.80,   0.80, 0.80, 0.90, 0, 0.80,  0.80])
    old_list = get_old_class(brd_sum,  HP_m = HP_o)
    # 单独指标, 原最佳指标
    acc,f1_score = old_acc_f1(old_list, y_true)
    print("accuracy: %f, f1: %f" % ( acc, f1_score))
    print ("------------------------------")
    
##### 更新最佳组: 
    #   f1: 0.8115942
    #   f1: 0.73465335
    print ("最佳组, 纯指标:")
#    HP_c = np.array([0.82,  0.50, 1.15, 1.00, 0.87, 0,  0.65, 0.94, 0, 0, 0,  0, 0, 0, 0, 0,  0])
    HP_c = np.array([1.286,  0.883, 1.117, 1.00, 1.24, 0,  0.80, 1.10, 0, 0, 0,  0, 0, 0, 0, 0,  0])
#    hv = 2.625
    hv = 2.4375
    # 更新新指标, 取符合常用条件的例子
    new_list = get_new_class(brd_sum, y_true, HP_c=HP_c, HP_m=hv)
    # 单独指标, 比混合指标低
    acc,f1_score = old_acc_f1(new_list, y_true)
    print("cur: %s, accuracy: %f, f1: %f" % (hv, acc, f1_score))
    # 混合指标, 新指标(new_list)为False才用旧指标(old_list)
    #   后面2个参数打印用
    f1_score = compare_acc_f1(old_list, new_list, y_true, stepC=HP_c, stepV=hv)
    print ("更新hc列表后:")
    print ("f1: %s" % (np.array(f1_score)))
    print ("------------------------------")


##### 检查p=0.5000中界值: 
    if 0:
        # 查看具体p组
        tmp_y = np.array(y_true).reshape((-1,1))
        tmp = np.concatenate([np.array(old_list),tmp_y],axis=1) 
        tmp_list = []
        for i in range(len(tmp)):
            row = tmp[i]
            if row[0]>=0.49 and row[0]<=0.501:
                tmp_list.append(row)
        tmp_list = np.array(tmp_list)
        print ("检查p=0.5000中界值:")
        print ("---------新-------y----\n", tmp_list)
        print ("------------------------------")

    
##### 以上3组值已更新, 下列计算会用到: 
##### 最佳max组, 计算sum:
    #   max hv=2.625
    #   max hv=2.4375
    #   max f1=0.8115942
    #   max f1=0.7454017
    if 0:
        first_v = hv - 20/80.0
        f1_list = []
        for vi in range(0, 40, 1):
            v = vi/80.0+first_v
            new_list = get_new_class(brd_sum, y_true, HP_c=HP_c, HP_m=v)
            f1_score = compare_acc_f1(old_list, new_list, y_true, stepC=0, stepV=v)
            f1_list.append(f1_score)
        max_f1 = max(f1_list)
        max_id = f1_list.index(max_f1)
        max_v  = max_id/80.0+first_v
        print ("  max_f1: %s  max_v:%s" % (np.array(max_f1), np.array(max_v)))
        print ("------------------------------")


##### 最佳max组, 计算scale:
    #   max f1=0.8155339
    #   max f1=0.74517363
    # 类型备注: 0(不明显) 1(不明显)
    # 排除类型: 8, 9, 10, 11, 12, 13, 14, 15
    if 0:
        HP_v = np.array([2.51,   2.43,  2.42, 2.00, 2.50, 0,  2.56, 2.58, 0, 0, 0,  0, 0, 0, 0, 0,  0])
#        HP_c = np.array([0.82,  0.50, 1.15, 1.00, 0.87, 0,  0.65, 0.94, 0, 0, 0,  0, 0, 0, 0, 0,  0])
        HP_c = np.array([1.286,  0.883, 1.117, 1.00, 1.24, 0,  0.80, 1.10, 0, 0, 0,  0, 0, 0, 0, 0,  0])

        bit = 2  ###
        mark0 = np.concatenate([[0]*bit, [1], [0]*(17-bit-1)])
        mark1 = np.concatenate([[1]*bit, [0], [1]*(17-bit-1)])
        mark_c = HP_c*mark1

        first_c = max(HP_c[bit] - 20/64.0, 0)
        first_v = max(HP_v[bit] - 10/16.0, 0)

        print ("  start calc, bit: %s  c: %.3f ~ %.3f,   v:%.3f ~ %.3f" % (bit, first_c, first_c+40/64.0, first_v, first_v+1.5))
        rngc, rngv = 40, 24
        f1_list = []
        for ci in range(0, rngc, 1):      # 90
            for vi in range(0, rngv, 1):  # 60
                c = ci/64.0+first_c       # 0.9+range(0.0, 0.50, 0.016)
                v = vi/16.0+first_v       # 2.6+range(0.0, 0.50, 0.016)
                hc = mark_c*1 + mark0*c
                new_list = get_new_class(brd_sum, y_true, HP_c=hc, HP_m=v)
                f1_score = compare_acc_f1(old_list, new_list, y_true, stepC=c, stepV=v)
                f1_list.append(f1_score)
        max_f1 = max(f1_list)
        max_id = f1_list.index(max_f1)
        vi     = max_id%rngv
        ci     = (max_id - vi)/rngv
        max_c = ci/60.0+first_c
        max_v = vi/16.0+first_v
        print ("  max_f1: %s  idc:%s,idv:%s,id:%s, c:%.5f,v:%.5f" % (np.array(max_f1), ci, vi, max_id, np.array(max_c), np.array(max_v)))


##### 最佳mean组:
    #   max f1=0.8137254
    #   max f1=0.75205857
    # 改类型2,9作用大
    if 0:
#       HP_o = np.array([0.00,  1.15, 1.00, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.25, 1.00,   1.00, 1.00, 1.00, 0, 1.00,  1.00])
        HP_o = np.array([0.00,  1.00, 1.15, 1.00, 1.00, 1.00,   1.00, 1.00, 1.00, 1.695, 0.80,   0.80, 0.80, 0.90, 0, 0.80,  0.80])

        bit = 9
        mark0 = np.concatenate([[0]*bit, [1], [0]*(17-bit-1)])
        mark1 = np.concatenate([[1]*bit, [0], [1]*(17-bit-1)])
        mark_c = HP_o*mark1

        first_c = HP_o[bit] - 0.4
        print ("  start calc, c: %s ~ %s" % (first_c, first_c+1.0))
        rngc = 40
        f1_list = []
        for ci in range(0, rngc, 1):
            c = ci/40.0+first_c
            old_hc = mark_c*1.0+mark0*c
            # 更新旧指标(old_list), 求总和
            old_list = get_old_class(brd_sum,  HP_m = old_hc)
            # 混合指标, 新指标(new_list)为False才用旧指标(old_list)
            #   后面2个参数打印用
            f1_score = compare_acc_f1(old_list, new_list, y_true, stepC=c, stepV=0)
            f1_list.append(f1_score)
        max_f1 = max(f1_list)
        max_id = f1_list.index(max_f1)
        max_c  = max_id/40.0+first_c
        print ("  max_f1: %s  max_hc:%s" % (np.array(max_f1), np.array(max_c)))
        print ("------------------------------")


##### 混合指标曲线1:
    #   max hv=2.625
    #     f1=0.81407034
    #     f1=0.764969
    # 局部指标--小于0.5添加最大值:
    # 局部指标--大于0.5去掉最小值:
    if 0:
        partV=[
                [0.30,0.35,2.81,5.00,0.80],
                [0.35,0.40,2.31,5.00,0.80],
                [0.40,0.45,2.437,5.00,0.80],
                [0.45,0.50,1.75,5.00,0.80],
                [0.50,0.55,0.00,1.50,0.20], 
                [0.55,0.60,0.00,1.687,0.20],
                [0.60,0.65,0.00,1.375,0.20]
              ]
        # 获取常用类型总分
        part_list = get_part_class(brd_sum, HP_c=HP_c)
        # 概率合并:
        tmp_list = part_list_pred(old_list, part_list, partV)
        # 单独指标, 比混合指标低
        acc,f1_score = old_acc_f1(tmp_list, y_true)
        print("局部指标:")
        print("accuracy: %f, f1: %f" % ( acc, np.array(f1_score)))
        
        # 查看具体max组
        if 0:
            compareV = tf.cast(tf.not_equal(old_list, part_list), dtype=tf.float32)
            tmp_y = np.array(y_true).reshape((-1,1))
            tmp = np.concatenate([old_list,new_list,part_list,compareV,tmp_y],axis=1) 
            print ("\n------原---------新-------局部-------对比-------y----\n", tmp)
    
##### 混合指标曲线2: 
    #   f1=0.82524
    #   f1=0.75206
    if 0:
        # 获取常用类型总分
        part_list = get_part_class(brd_sum, HP_c=HP_c)
        partB=[
#               [0.25,0.30,0.00,0.00,0.20],
                [0.30,0.35,2.81,5.00,0.80],
                [0.35,0.40,2.31,5.00,0.80],
                [0.40,0.45,2.437,5.00,0.80],
                [0.45,0.50,1.75,5.00,0.80],
                [0.50,0.55,0.00,1.50,0.20], 
                [0.55,0.60,0.00,1.687,0.20], 
                [0.60,0.65,0.00,1.375,0.20],
#                [0.65,0.70,0.00,0.000,0.20],
#                [0.70,0.75,0.00,0.000,0.20],
#                [0.75,0.80,0.00,1.875,0.20],
               [1.00,1.00,5.00,5.000,0.20]  #--无用值, 非空项
               ]
        print ("局部指标:")
        
        bit = 9        # 2; 注释掉partB对应行
        
        #范围
        #            0,False     1-2.81      2-2.31        3-2.437      4-1.75      5-1.50        6-1.687      7-1.375     8-False     9-False  
        r_list = [[0.00,0.30], [0.30,0.35], [0.35,0.40], [0.40,0.45], [0.45,0.50], [0.50,0.55], [0.55,0.60], [0.60,0.65],[0.65,0.70], [0.75,0.80]]
        #小于0.5是0.20, 大于0.5是0.80
        p_list = [[0.80],      [0.80],      [0.80],      [0.80],      [0.80],      [0.20],      [0.20],      [0.20],     [0.20],      [0.20]    ]
        #小于0.5是1, 大于0.5是0
        v_list = [ 2.00,        2.00,        2.00,        2.00,        1.50,        0.00,        0.00,        0.00,       0.00,        0.00      ]

        if 0: ### 测试整体大小
            partI_P = [0.80]
            partI_O = [0.00,1.00]
            first_v = 2.4375
            i_len   = 1
        elif 0: ### 测试每项大小, 大于这个即保留
            #   f1=0.70935
            #   f1=0.72118
            partI_P = [0.80]
            partI_O = [1.00,1.00]
            first_v = 1
            i_len   = 1
        else:
            partI_P = p_list[bit] # 0.20
            partI_O = r_list[bit] # [0.00,0.30]
            first_v = v_list[bit] # 1.0
            i_len   = 32

        print ("  start calc, bit: %s  v:%.3f ~ %.3f" % (bit,  first_v, first_v+32/16.0))
        
        f1_list = []
        for vi in range(0, i_len, 1):
            Vm = vi/16.0+first_v
            if partI_P[0]>0.5:
                partI_V = [Vm, 5.0]    #小于0.5
            else:
                partI_V = [0.0, Vm]    #大于0.5
            partI = np.concatenate([partI_O, partI_V, partI_P],axis=0) 
            partI = partI.reshape((-1,5))
            partV = np.concatenate([partI, partB],axis=0) 
            # 概率合并:
            #print ("partV",partV)
            tmp_list = part_list_pred(old_list, part_list, partV)
            # 单独指标, 比混合指标低
            acc,f1_score = old_acc_f1(tmp_list, y_true)
            print ("   vi: %s  Vm: %s  f1: %s" % (vi, np.array(Vm),  np.array(f1_score)))
            f1_list.append(f1_score)
        max_f1 = max(f1_list)
        max_id = f1_list.index(max_f1)
        min_v  = max_id/16.0+first_v
        print ("  max_f1=%.5f  id=%s   max_v=%.5f" %  ( np.array(max_f1), np.array(max_id), np.array(min_v)))
        print ("------------------------------")



test_param()






