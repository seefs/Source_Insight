
基础路径设置:
basePath = D:\project\NLP\game\bert_for_tf2
	
/***********************************************************************/


// 指标刻录acc--f1:
// 00037-acc: 0.4848 - f1_score: 0.3500 --csv_37T, 训练1次, A-8X12
// 00037-acc: 0.5455 - f1_score: 0.3500 --csv_37T, 训练50次
// 00037-acc: 0.7879 - f1_score: 0.3500 --csv_37T, 训练200次

// 00037-acc: 0.8182 - f1_score: 0.3077 --csv_37T, 训练200次, 用type

// 01000-acc: 0.5960 - f1_score: 0.3226 --csv_1000T, 修改F1
// 01000-acc: 0.7878 - f1_score: 0.3279 --csv_1000T, 修改F1, 训练10次, 时间40*52S=35min
// 01000-acc: 0.8000 - f1_score: 0.3266 --csv_1000T, 修改F1, 训练22/29次, 到极限了, 保存代码与h5

// 01000-acc: 0.5489 - f1_score: 0.3338 --csv_1000T, 训练1次, 用type
// 01000-acc: 0.7822 - f1_score: 0.3330 --csv_1000T, 训练10次, 用type, 时间40*35S=20min
// 01000-acc: 0.7989 - f1_score: 0.3330 --csv_1000T, 训练30次, 用type





examples\tokenization_zh.py

// build--def
examples\run_nlp_pretraining.py
examples\run_nlp_pretraining.py  total_epoch_count
python_w examples\run_nlp_pretraining.py
// 设置新data
data\                                              # 改data: 36条, 1000条，10000条
examples\run_nlp_pretraining.py  uncased_L         # uncased_L-1_H-768_A-8X12
examples\run_nlp_pretraining.py  _save_vocab_file  # 保存vocab


// build--37
//     删H5测试
examples\run_nlp_pretraining_37.py  csvPath
examples\run_nlp_pretraining_37.py  bert_model_name
examples\run_nlp_pretraining_37.py  total_epoch_count
python_w examples\run_nlp_pretraining_37.py
// 参数 
data\model\uncased_L-1_H-768_A-8X12\
	

// build--1000
examples\run_nlp_pretraining_1000.py
python_w examples\run_nlp_pretraining_1000.py


// build--修改新分词
//     各词层各弄一个文件
examples\run_nlp_pretraining_fc.py
python_w examples\run_nlp_pretraining_fc.py
// 参数 
data\csv_fc
data\model\uncased_L-1_H-768_A-fc\
//	db
bert\tokenization.py FullTokenizer( )



// 说明
README.rst









// 设置参数
paramPath = data\model\uncased_L-1_H-768_A-8X12\
----------------------------------------------------------------
param:bert_config.json "hidden_size": 36,                  ---- 32 or 96    or 768
param:bert_config.json "intermediate_size": 32,            ---- 32 or 3072  or 4*768, 改了后删h5
param:bert_config.json "max_position_embeddings": 128,
param:bert_config.json "num_attention_heads": 2,           ---- 4  or 12    or 12
param:bert_config.json "num_hidden_layers": 2,
param:bert_config.json "type_vocab_size": 2,
param:bert_config.json "vocab_size": 301                   ---- 更新字典







// setup
setup.py
python_w setup.py^build
python_w setup.py^install
python_w setup.py^uninstall
	
//卸载
python_w setup.py install --record record.txt
//然后删除它们
cmd_w:FOR /F "delims=" %f in (record.txt) DO del "%f"
//列出所有安装的库
cmd_w: pip list

	
// 笔记
data\note\Log_file.h
//  log: 
data\note\Log_data.h          Num -------------准备数据
data\note\Log_pretraining.h   Num -------------预训练
data\note\Log_fine_tuning.h   Num -------------微调
//data\note\Log_features.h      Num -------------抽取语义特征
//data\note\Log_classifier.h    Num -------------
//data\note\Log_squad.h         Num -------------
//  build: 
data\note\Log_build.h
data\note\Log_pretraining_base.h
data\note\tmp_pretraining_cur.h
data\note\






// ipynb转py
cmd_w: jupyter nbconvert --to script 026-Transformer\001-Transformer.ipynb
cmd_w: jupyter nbconvert --to script 026-Transformer\Transformer.ipynb



// 代码
examples\
examples\run_nlp_pretraining.ipynb
cmd_w: jupyter nbconvert --to script examples\run_nlp_pretraining.ipynb
examples\run_nlp_pretraining.py


// test
bert_for_tf2_test.py
python_w bert_for_tf2_test.py
// test--间接调用:
tests\test_compare_activations.py









