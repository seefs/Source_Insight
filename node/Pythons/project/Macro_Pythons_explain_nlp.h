
//NLP_task 任务

句子语义关系判断，
分类任务
阅读理解

一类是序列标注，这是最典型的 NLP 任务，比如中文分词，词性标注，命名实体识别，语义角色标注等都可以归入这一类问题，
它的特点是句子中每个单词要求模型根据上下文都要给出一个分类类别。

第二类是分类任务，比如我们常见的文本分类，情感计算等都可以归入这一类。
它的特点是不管文章有多长，总体给出一个分类类别即可。

第三类任务是句子关系判断，比如 Entailment，QA，语义改写，自然语言推理等任务都是这个模式，
它的特点是给定两个句子，模型判断出两个句子是否具备某种语义关系。

第四类是生成式任务，比如机器翻译，文本摘要，写诗造句，看图说话等都属于这一类。
它的特点是输入文本内容后，需要自主生成另外一段文字。

//	句子级别（例如，SST-2）
//	句子对级别（例如，MultiNLI）
//	单词级别（例如，NER）
//	文本阅读（例如，SQuAD）

GLUE多任务
//name	full name							task												   chinese
//MNLI	Multi-Genre NLI 					Natural language inference							   自然语言推断
//QQP	Quora Quora Question Pairs			Semantic textual similarity/Paraphrase identification  语义文本相似性/问题对是否等价/释义识别
//QNLI	Question	NLI 																		   句子是否回答了问题
//SST-2 Stanford							Sentiment Treebank Sentiment analysis				   情感分析
//CoLA	Corpus of Linguistic Acceptability														   句子语言性判断
//STS-B Semantic	Textual Similarity		Semantic textual similarity 						   语义相似
//MRPC	Microsoft	Research Paraphrase Corpus													   句子对是否语义等价
//RTE	Recognizing Texual Entailment		Natural language inference							   自然语言推断　识别蕴涵
//WNLI	Winograd NLI						Natural language inference							   自然语言推断　识别蕴涵





//NLP_lib 6个顶级Python NLP库的比较

//NLTK
（Python自然语言工具包）用于诸如标记化、词形还原、词干化、解析、POS标注等任务。
该库具有几乎所有NLP任务的工具。
//Spacy
是NLTK的主要竞争对手。这两个库可用于相同的任务。

//Scikit-learn
为机器学习提供了一个大型库。此外还提供了用于文本预处理的工具。
//Gensim
是一个主题和向量空间建模、文档集合相似性的工具包。
//Pattern
库的一般任务是充当Web挖掘模块。因此，它仅支持自然语言处理（NLP）作为辅助任务。
//Polyglot
是自然语言处理（NLP）的另一个Python工具包。它不是很受欢迎，但也可以用于各种NLP任务。




//NLP_fc 六款中文分词模块
jieba、THULAC、SnowNLP、pynlpir、CoreNLP、pyLTP
https://blog.csdn.net/sinat_26917383/article/details/77067515


jieba在这不做介绍，可见博客：
https://blog.csdn.net/sinat_26917383/article/details/71436563





