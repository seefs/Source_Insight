from numpy import *

'''

贝叶斯公式 p(ci|w) = p(w|ci)*p(ci) / p(w)

即比较两类别分子大小，把结果归为分子大的一类

p(w|ci)条件概率，即在类别1或0下，w(词频)出现的概率(词频/此类别总词数即n/N)

'''

# 取得DataSet中不重复的word

def createVocabList(dataSet):

    vocabSet = set([])#使用set创建不重复词表库

    for document in dataSet:

        vocabSet = vocabSet | set(document) #创建两个集合的并集

    return list(vocabSet)

'''

我们将每个词的出现与否作为一个特征，这可以被描述为词集模型(set-of-words model)。

在词集中，每个词只能出现一次。

'''

def setOfWords2Vec(vocabList, inputSet):

    returnVec = [0]*len(vocabList)#创建一个所包含元素都为0的向量

#遍历文档中的所有单词，如果出现了词汇表中的单词，则将输出的文档向量中的对应值设为1

    for word in inputSet:

        if word in vocabList:

            returnVec[vocabList.index(word)] = 1

    else: print("the word: %s is not in my Vocabulary!" % word)

    return returnVec

'''

如果一个词在文档中出现不止一次，这可能意味着包含该词是否出现在文档中所不能表达的某种信息,

这种方法被称为词袋模型(bag-of-words model)。

在词袋中，每个单词可以出现多次。

为适应词袋模型，需要对函数setOfWords2Vec稍加修改，修改后的函数称为bagOfWords2VecMN

'''

def bagOfWords2Vec(vocabList, inputSet):

    returnVec = [0]*len(vocabList)

    for word in inputSet:

        if word in vocabList:

            returnVec[vocabList.index(word)] += 1

    return returnVec

def countX(aList,el):

    count = 0

    for item in aList:

        if item == el:

            count += 1

    return count

def trainNB0(trainMatrix,trainCategory):

    '''

    trainMatrix:文档矩阵

    trainCategory:每篇文档类别标签

    '''

    numTrainDocs = len(trainMatrix)

    numWords = len(trainMatrix[0])

    pAbusive0 = countX(trainCategory,0) / float(numTrainDocs)

    pAbusive1 = countX(trainCategory,1) / float(numTrainDocs)

    pAbusive2 = countX(trainCategory,2) / float(numTrainDocs)

    pAbusive3 = countX(trainCategory,3) / float(numTrainDocs)

    pAbusive4 = countX(trainCategory,4) / float(numTrainDocs)

#初始化所有词出现数为1，并将分母初始化为2，避免某一个概率值为0

    p0Num = ones(numWords); p1Num = ones(numWords)

    p2Num = ones(numWords)

    p3Num = ones(numWords)

    p4Num = ones(numWords)

    p0Denom = 2.0; p1Denom = 2.0 ;p2Denom = 2.0

    p3Denom = 2.0; p4Denom = 2.0

    for i in range(numTrainDocs):

# 1类的矩阵相加

        if trainCategory[i] == 1:

            p1Num += trainMatrix[i]

            p1Denom += sum(trainMatrix[i])

        if trainCategory[i] == 2:

            p2Num += trainMatrix[i]

            p2Denom += sum(trainMatrix[i])

        if trainCategory[i] == 3:

            p3Num += trainMatrix[i]

            p3Denom += sum(trainMatrix[i])

        if trainCategory[i] == 4:

            p4Num += trainMatrix[i]

            p4Denom += sum(trainMatrix[i])

        if trainCategory[i] == 0:

            p0Num += trainMatrix[i]

            p0Denom += sum(trainMatrix[i])

#将结果取自然对数，避免下溢出，即太多很小的数相乘造成的影响

    p4Vect = log(p4Num/p4Denom)

    p3Vect = log(p3Num/p3Denom)

    p2Vect = log(p2Num/p2Denom)

    p1Vect = log(p1Num/p1Denom)#change to log()

    p0Vect = log(p0Num/p0Denom)#change to log()

    return p0Vect,p1Vect,p2Vect,p3Vect,p4Vect,pAbusive0,pAbusive1,pAbusive2,pAbusive3,pAbusive4

def classifyNB(vec2Classify,p0Vec,p1Vec,p2Vec,p3Vec,p4Vec,pClass0,pClass1,pClass2,pClass3,pClass4):

    p1 = sum(vec2Classify * p1Vec) + log(pClass1)

    p2 = sum(vec2Classify * p2Vec) + log(pClass2)

    p3 = sum(vec2Classify * p3Vec) + log(pClass3)

    p4 = sum(vec2Classify * p4Vec) + log(pClass4)

    p0 = sum(vec2Classify * p0Vec) + log(pClass0)

## print(p0,p1,p2,p3,p4)无锡人流医院 http://www.bhnkyy39.com/

    return [p0,p1,p2,p3,p4].index(max([p0,p1,p2,p3,p4]))

if __name__ == "__main__":

    dataset = [['my','dog','has','flea','problems','help','please'],

    ['maybe','not','take','him','to','dog','park','stupid'],

    ['my','dalmation','is','so','cute','I','love','him'],

    ['stop','posting','stupid','worthless','garbage'],

    ['mr','licks','ate','my','steak','how','to','stop','him'],

    ['quit','buying','worthless','dog','food','stupid'],

    ['i','love','you'],

    ['you','kiss','me'],

    ['hate','heng','no'],

    ['can','i','hug','you'],

    ['refuse','me','ache'],

    ['1','4','3'],

    ['5','2','3'],

    ['1','2','3']]

# 0，1，2，3，4分别表示不同类别

    classVec = [0,1,0,1,0,1,2,2,4,2,4,3,3,3]

    print("正在创建词频列表")

    myVocabList = createVocabList(dataset)

    print("正在建词向量")

    trainMat = []

    for postinDoc in dataset:

        trainMat.append(setOfWords2Vec(myVocabList,postinDoc))

        print("开始训练")

        p0V,p1V,p2V,p3V,p4V,pAb0,pAb1,pAb2,pAb3,pAb4 = trainNB0(array(trainMat),array(classVec))

# 输入的测试案例

        tmp = ['love','you','kiss','you']

        thisDoc = array(setOfWords2Vec(myVocabList,tmp))

        flag = classifyNB(thisDoc,p0V,p1V,p2V,p3V,p4V,pAb0,pAb1,pAb2,pAb3,pAb4)

        print('flag is',flag)

