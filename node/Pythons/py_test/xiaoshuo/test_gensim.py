import gensim

print('开始训练模型')
model = gensim.models.Word2Vec(sentence, size=300, window=3, min_count=10, workers=4)
print('训练完毕。正在将模型保存到本地')
model.save('xh.model')
print('Okey ')

# 读入训练好的模型
model = gensim.models.Word2Vec.load('qyn.model')


# 我们来找找和路明非类似的人物

print('===============和路明非类似的人物=================')
for s in model.most_similar(['路明非'],topn = 5):
	print(s)


print(model.similarity('路明非','诺诺'))



for s in model.most_similar(positive = ['路明非','芬格尔'],negative = ['楚子航'],topn = 5):


