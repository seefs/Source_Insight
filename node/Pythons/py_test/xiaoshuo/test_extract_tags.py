text = f.read()
tags = jieba.analyse.extract_tags(text, topK=20, withWeight=True)
print('关键词:')
for k, v in tags:
    print('关键词：{}   权重：{:.3f}'.format(k, v))
f.close()


