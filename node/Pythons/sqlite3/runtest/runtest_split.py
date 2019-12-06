

import sys
import os
import tensorflow as tf
import numpy as np


# path
curPath  = os.path.abspath(os.path.dirname(__file__))
rootPath = os.path.split(curPath)[0]
dataPath = os.path.join(rootPath, "data")

# file
sqlite3_file = os.path.join(dataPath, "sqlite3", "data.db3")

# cfg
sys.path.append(rootPath)

# Custom Class
from _token import TokenizerChg



def run_block_parsing(text):
    token_chg = TokenizerChg(db_path=sqlite3_file, debug_log=True)
    for _t in text:
        for t in _t:
            print ("句子   : %s" % (t))
            mode2_list = token_chg.tokens_mode2(text=t)
#            mode5_list = token_chg.tokens_mode5(text=t)


def tokens_parsing_main():
# 单句测试----分词效果
#    text = [
# 多义词: 还
#            ["花呗淘金币活动"],
#            ["一种药液箱的容积144L"], 
#            ["可以分期还嘛"], 
#            ["这时量得容器内的水深是16cm"], 
# 纠错, 未识别类
#            ["网商贷怎么改借呗"],
#            ["花呗怎么付款不鸟了"], 
# 连接顺序调整
#            ["为什么我花呗不可以分期账单"],
#            ["我什么时候才能开花呗"],
# 细化
#            ["我想买个浴缸，花呗额度不够怎么办"],
# 合并
#            ["高3.5米的长方体教室"],
#            ["花呗也不能用了"], 
#            ["我满足开通借呗的条件吗"], 
#            ["我想咨询，为什么不能满足借呗条件"], 
#            ["我的花呗没有绑定银行卡怎么还款"], 
#            ["我***月份花呗消费是***元，怎么要我还***元"],
# 测试整个句子
#            ["一种药液箱的容积144L，如果每分钟喷出药液7000ml，喷完一箱药液需用多少分钟？"],
#            ["食堂买来40袋面粉。如果每天吃6袋，可以吃几天?还剩几袋?如果每天吃7袋呢?"], 
#            ["把长1m的长方体木棍截成3段，表面积增加20cm2，这根木棍原来的体积是多少cm3？"], 
#            ["粉刷一间长8米、宽6米，高3.5米的长方体教室，除去门窗面积27平方米。已知每平方米用涂料0.3千克。这间教室一共要用多少千克涂料？"], 
#            ["一个长方体容器，从里面量长、宽均为2dm，向容器中倒入5.9L水后，再把一个西红杮放入水中，这时量得容器内的水深是16cm，这个西红杮的体积是多少？"], 
#           ]

# 单句测试----未调整句子
    text = [
#            ["花呗都用在哪里"], 
#            ["花呗都能在哪里购物"], 


#            ["什么叫开通花呗"], 


           ]
		

# 单句测试
    run_block_parsing(text);



if __name__ == "__main__":
    tokens_parsing_main()




