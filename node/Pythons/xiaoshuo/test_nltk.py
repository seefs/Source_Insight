import nltk
import numpy as np
#统计词频
#nltk.FreqDist返回一个词典，key是不同的词，value是词出现的次数
freq_dist = nltk.FreqDist(words_list)
freq_list = []
num_words = len(freq_dist.values())
for i in range(num_words):
    freq_list.append([list(freq_dist.keys())[i],list(freq_dist.values())[i]])
freqArr = np.array(freq_list)
