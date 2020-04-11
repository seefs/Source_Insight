

import tensorflow as tf
import numpy as np



def gen_m2b(inputs, outputs):
    print("--gen_m2b--", np.array(inputs))
    m1, m2, l1, l2 = inputs
#    l1, l2 = np.array(l1), np.array(l2)
    
# 4x9模式; 增加m=2/4/6/8兼容; 最后1组去掉m=5(同时为了对齐重复8)
    block_to_category = np.array([
                         [15,16,8,1,2,10,11,3,7,4,6],
                         [15,14,6,5,4,12,11,3,7,2,8],
                         [15,14,6,5,13,9,1,8,16,2,4],
                         [11,12,4,13,9,1,2,10,6,8,8]
                        ])
#############
    block_list = block_to_category.copy()
    l, r, fl, fr= 0, 0, 0, 0
    step = 0
    def update_block(_m):
        nonlocal block_list
        block_list = [s for s in block_list if _m in s]
        return 0
    def check_in_block(_m, _i, _len):
        nonlocal block_list
        _item = tf.cond(_i<_len, lambda:_m[_i], lambda:_m[0])
#        np.array(a) in np.array(arr)
        _s = tf.cond(_i<_len, lambda:sum([1 for b in block_list if _item in b]), lambda:0)
        ret = tf.cond(_s>0, lambda:update_block(_item), lambda:1)
        ret = tf.cond(tf.logical_and(_i<_len, tf.equal(_item,0)), lambda:0, lambda:ret)         #模式0不分块
        #print("--_i%s _len=%s  _item=%s  _s=%s  ret=%s  b=%s" % (_i, _len, _item, _s, ret, len(block_list)))
        return ret
    def update_state(_n, _l, _r):
        nonlocal l, r
        l = _l
        r = _r
        return _n
    def set_out_list(_n, _l, _r):
        #print("--out--", _n, _l, _r)
        nonlocal outputs
        nonlocal block_list
        nonlocal fl, fr
        outputs.append([block_list[0], m1[fl:_l], m2[fr:_r]])
        block_list = block_to_category.copy()
        fl = _l
        fr = _r
        return update_state(_n, _l, _r)
    def set_exit_range(_n, _l, _r):
        #print("--exit--", _n, _l, _r)
        nonlocal outputs
        nonlocal fl, fr, step
        outputs.append([block_list[0], m1[fl:_l], m2[fr:_r]])
        step=200
        return _n
#############
    ret = 0
    while step<200: 
        step += 1
        
        # ret=0,1,2,3;4,5: 左,右,单左取块,单右取块;有剩余块,超范围
        ret = tf.cond(tf.logical_and(tf.greater_equal(l,l1), tf.greater_equal(r,l2)), lambda:update_state(5, l, r), lambda:ret)
        # ret=4,5: 有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==5,tf.logical_or(tf.greater(l,fl), tf.greater(r,fr))), lambda:set_exit_range(4, l, r), lambda:ret)

        # s_left=0,1,2:  左块在块,不在块,超范围
        # s_right=0,1,2: 右块在块,不在块,超范围
        s_left  = tf.cond(check_in_block(m1, l, l1), lambda:1, lambda:0)
        s_right = tf.cond(check_in_block(m2, r, l2), lambda:1, lambda:0)
        s_left  = tf.cond(tf.greater_equal(l,l1), lambda:2, lambda:s_left)
        s_right = tf.cond(tf.greater_equal(r,l2), lambda:2, lambda:s_right)
        #print("--step%s--ret=%s  s_left=%s  s_right=%s  l=%s  r=%s-" % (step, ret, s_left, s_right, l, r))
        
        # s_left=3:  超范围
        # s_right=3: 超范围
        ret = tf.cond(tf.logical_and(ret==0, s_left==2),  lambda:update_state(3, l, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==1, s_right==2), lambda:update_state(2, l, r), lambda:ret)

        # ret=0,1,2,3;4,5,6: 左,右,单左取块,单右取块;无剩余块,有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==0, s_left==0), lambda:update_state(1, l+1, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==0, s_left==1), lambda:update_state(3, l, r),   lambda:ret)
        ret = tf.cond(tf.logical_and(ret==2, s_left==0), lambda:update_state(2, l+1, r), lambda:ret)
        ret = tf.cond(tf.logical_and(ret==2, s_left==1), lambda:set_out_list(0, l, r),   lambda:ret)

        # ret=0,1,2,3;4,5,6: 左,右,单左取块,单右取块;无剩余块,有剩余块,超范围
        ret = tf.cond(tf.logical_and(ret==1, s_right==0), lambda:update_state(0, l, r+1),lambda:ret)
        ret = tf.cond(tf.logical_and(ret==1, s_right==1), lambda:update_state(2, l, r),  lambda:ret)
        ret = tf.cond(tf.logical_and(ret==3, s_right==0), lambda:update_state(3, l, r+1),lambda:ret)
        ret = tf.cond(tf.logical_and(ret==3, s_right==1), lambda:set_out_list(0, l, r),  lambda:ret)
        #print("--end----ret=%s  s_left=%s  s_right=%s  l=%s  r=%s-" % (ret, s_left, s_right, l, r))
    return np.array(outputs)


#def b2mts(inputs):
#    m1, m2, l1, l2 = inputs
#    print("--m2bmms--", inputs)
#    
##   ret =  tf.map_fn(lambda x: m_to_mts(x), inputs)
#    for i,a in enumerate(zip(m1, m2, l1, l2)):
#        print("--enum--", a)
#        ret =  m_to_mts(list(a))
#        print("--ret--", np.array(ret))
#
#    print("--b2mts ret--", list(ret))
#
#    return ret

#def b2mts_test():
#    
#    a = np.array([[ 2,2,13,10, 3, 6,11]])
#    b = np.array([[ 2,13,10, 3, 6,11]])
#    l1 = np.array([len(i) for i in a])
#    l2 = np.array([len(i) for i in b])
#    lm = np.array([max(max(l1), max(l2))+5])
#    _a = np.concatenate((a, [[0]*(lm-l1)]),axis = -1)
#    _b = np.concatenate((b, [[0]*(lm-l2)]),axis = -1)
#    gen_m2b([_a, _b, np.array(l1), np.array(l2)])

a = [ 2,2,13,10, 3, 6,11]
b = [ 2,13,10, 3, 6,11]
l1 = len(a)
l2 = len(b)
a_pad = [ 2,2,13,10, 3, 6,11]
b_pad = [ 2,13,10, 3, 6,11]

output = []
gen_m2b([a_pad, b_pad, l1, l2], output)

print('mbb--', np.array(output))


# 验证:





#    s2s:
#      _mid1=[ 2,2,13,10, 3, 6,11]
#      _mid2=[ 2,13,10, 3, 6,11]
#      b_m_m: [[{1, 2, 4, 6, 8, 9, 10, 11, 12, 13} array([ 2,  2, 13, 10]) array([ 2, 13, 10])]
#              [{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([ 3,  6, 11]) array([ 3,  6, 11])]],


#    s2s:
#     _mid1=[1,11,3,6,6,13,10,3,2,2,0,0]
#     _mid2=[3,6,6,3,2,13,10,3,0,0]
#      b_m_m: [[{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([ 1, 11,  3,  6,  6]) array([3, 6, 6, 3, 2])]
#              [{1, 2, 4, 6, 8, 9, 10, 11, 12, 13}    array([13, 10]) array([13, 10])]
#              [{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([3, 2, 2]) array([3])]],


#    s2s:
#     _mid1=[2,3,6,3,3]
#     _mid2=[6,3,2,3,6]
#      b_m_m: [[{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([2, 3, 6, 3, 3]) array([6, 3, 2, 3, 6])]],


#    s2s:
#     _mid1=[1,15,3,11,2,0,9,13,15,15,10,3,11]
#     _mid2=[1,6,3,11,13,2]
#      b_m_m: [[{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([ 1, 15,  3, 11,  2,  0]) array([ 1,  6,  3, 11])]
#              [{1, 2, 4, 5, 6, 8, 9, 13, 14, 15, 16} array([ 9, 13, 15, 15]) array([13,  2])]
#              [{1, 2, 3, 4, 6, 7, 8, 10, 11, 15, 16} array([10,  3, 11]) list([])]],


