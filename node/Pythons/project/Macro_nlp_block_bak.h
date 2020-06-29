
基础路径设置:
basePath = D:\project\bak\bak\Pythons\nlp_block_bak
base:\\

tmpPath = D:\project\bak\tmp
tmp:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.1\] 备份文件(10)
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.2\] block--模块(3)
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.3\] block--整体测试(2)
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.4\] block--单元测试(3)
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.5\] 
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.6\] 
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.7\] git bak
Save:node\Pythons\project\Macro_nlp_block_bak.h \[1.8\] 





[1.1] 备份文件
// 公共模块
_loader_bl.py
_layer_bl.py
_model_bl.py

// 预处理--分块(没用上)
runtest\runtest_block.py
python_w runtest\runtest_block.py

// 预处理--math
runtest\runtest_math.py
python_w runtest\runtest_math.py

_layer_lr.py
_loader_cls.py

_model_calc_no_use.py



[1.2] block--模块
// 公共模块

_loader.py
_token.py
_losses.py
_layer.py
_block.py
_model.py
_tool.py
// 新--(板模型)--内存异常
run_block.py
python_w run_block.py

// 旧--(板模型)--训练
runtest_all\runtest_model_calc.py
python_w runtest_all\runtest_model_calc.py

// 旧--(板模型)--预测, 保存结果
runtest_all\runtest_model.py
python_w runtest_all\runtest_model.py




[1.3] block--整体测试
// 旧--(板模型)--参数分析--双标准
runtest_all\runtest_param.py
python_w runtest_all\runtest_param.py

// 旧--(板模型)--参数混合
runtest_all\runtest_merge.py
python_w runtest_all\runtest_merge.py





[1.4] block--单元测试
// 预处理--加载, 设置数量
runtest\runtest_load.py  run_load
python_w runtest\runtest_load.py

// 预处理--序列化m2n
runtest\runtest_seq.py
python_w runtest\runtest_seq.py

// 预处理--单句分词
runtest\runtest_split.py
python_w runtest\runtest_split.py




// 试200随机
// 删除t+f均等




[1.5] 




[1.5] 




[1.6] 




[1.7] git bak

// bak
Useful = True
//	
cd:tmp: git clone https://github.com/seefs/bak
//	
tmp:\\



[1.8] 




