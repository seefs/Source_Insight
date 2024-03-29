


[2.1] 初赛阶段
初赛阶段
这一段我们没花很多的精力，就简单的略过一下（主要成绩也不好，哈哈）
模型就是原始的ESIM略作改动，自始至终都只用了字向量，
初赛的时候本地数据并不多，我们在github上找了预训练好的300D的char embedding，
地址在这儿 
https://github.com/Embedding/Chinese-Word-Vectors
我们用的是skipgram的mix-large版本，最终单模型初赛60名左右。


[2.2] 复赛阶段
我们的baseline encoding模型是三层bi-GRU+mult-head self-attention的siamese模型，每一层都用了残差。
char emb方面我们用了初赛用的pretrain emb并作了fine-tune，对数据没有做任何预处理。
A榜里单模型有728左右，10fold作平均来做ensemble，
大概可以到735。作为一个baseline已经是很好的出发点了。
我们的最佳单模型是从ESIM出发一步步改进的，改到最后已经连ESIM也认不出来了。
它像一个全新的物种，不过细细一看，眉眼、神情还是似曾相识的。
我们参考了大概六七篇paper，附在本文的结尾，大家感兴趣的可以下下来看看。


[2.3] 经验分享（重要性不分先后）
1.数据集够大的时候，用外部训练好的emb并不一定就比本地训练的emb要好，比如复赛；

2.fix住emb能够很好的防止过拟合风险。实验发现fine-tune emb能够取得很低的loss，但F1不一定就提高了。但是凡事有利有弊，fix emb会让模型的能力受限，一个两者兼得的方式是——在fix emb的同时，额外引入一些可训练的emb维度，实验证明效果非常不错；

3.残差连接很好用。想提效果，一个很自然的方式就是加入适度的复杂性->堆mlp，但是直接加mlp，会有难以训练的风险，用残差连接就能较好的中和这个问题，这个方法很简单粗暴但是有用，我们的最优单模型在很多地方都用了一层Relu的mlp+残差连接；

4.很喜欢一个叫CLR leraning的学习率自动调整策略，是在看fast.ai的视频里学到的，尽管没有发生什么神奇的事情，但是稳定在第4个epoch收敛的效果我很喜欢，paper见引用[1]；

5.self-attention（引用[9]）比双向RNN要好用。初赛的时候我把ESIM顶层的双向LSTM替换成mult-head self-attention，很好用，复赛最优单模型也用了mult-head self-attention；

6.learning rate、dropout、batch size对模型效果影响很大很大；

7.很喜欢fuse gate(引用[8]中提到)，用得好的话感觉比残差连接要有用，还有一种可视化的感觉——告诉你模型什么时候需要什么level的信息。在最优单模型上面我主要用在了char emb和encoder之后的表达上面，效果有提升；

8.对于DL模型，输入永远都是非常有用的，尽管你可以设计出牛逼的结构，但是如果输入信息就那么些，实在是强模型所难，我们发现把一些简单的char-level feature引入模型是会带来一点提升的（但是比较有限），个人不建议在模型后面再引入feature，会误导模型。我们用的char-level feature有四个，一个是exact match，一个是idf，另外两个是自动提取的feature，来自一个很赞的KDD 2018的paper,见引用[3]；

9.在需要pooling的时候，拼接max-pooling和avg-pooling通常是很有用的，他们没有参数，而且尽可能的保留了信息量，这一块我们初赛和复赛一开始有在用；

10.还是pooling方面，也推荐s2t mult-dim的pooling方式（见paper引用[8]），最优的模型里我用了这个，之所以没有用max和avg的拼接，是不太希望最后接mlp之前的向量维度太大；

11.直接复现别人的paper不一定就效果好，通常需要自己做一些调整；

12.loss方面，加权的CE效果非常好，公式见引用[5]的paper，另外试过upsampling，效果和加权CE差不多，还没有尝试margin loss，不知道有没有队伍尝试过，可以分享一下；

13.想到再补充。


[2.4] 那些想实现但是没有实现的idea
1.引入拼音emb，这主要是为了一定程度上解决同音错别字的问题，逼格learning战队试过在初赛上有一点效果；

2.data augmentation，在图像领域旋转一下图像就能让模型鲁棒性更强，那么在NLP领域，是不是可以随机更改一下句子里的重要名词来制造负例，更改一下句子里不影响语意的词语来增加正例；

3.从外部找大量的语料，训练一个language model来做ELMo,见引用[2]；

4.参考引用[7]来在emb层面上引入对抗扰动来增强模型的鲁棒性；

5.combine word和char emb，并引入pos tag等feature；

6.尝试更好的ensemble策略，比如stacking，然后可以尝试差异性更大的模型来做ensemble。


[2.5] https
//比赛经验分享
https://openclub.alipay.com/club/history/read/9106
//测评相关问题排查索引
https://openclub.alipay.com/club/history/read/7136
//ATEC相关问题汇总
https://openclub.alipay.com/club/history/read/10111


[2.6] 赛题
需要思考和解决的问题： 
1.句子对中存在错别字、同义词、词序变换等问题。
2.两句话很类似，仅仅有一处细微的差别，最后的语义却不同。


[2.7] 评价指标
精准率：precision rate = TP / (TP + FP)
召回率：recall rate = TP / (TP + FN)
准确率：accuracy = (TP + TN) / (TP + FP + TN + FN)
F1-score = 2 * precision rate * recall rate / (precision rate + recall rate)

            ^
      精准率  |          
         FP | TP         
F——————————————————————>T
         TN | FN   召回率  
            |         
准确率         |          
      




