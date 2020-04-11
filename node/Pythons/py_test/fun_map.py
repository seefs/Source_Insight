
import numpy as np

def str_split(x) : 
#    print("x: ", x)
    return x.split(",")

def str_id(items):
    vocab  = {"a":1, "b":2, "c":3, "w":4, "e":5, "r":6}
    output = []
    for item in items:
        if item in vocab.keys():
            output.append(vocab[item])
        else:
            output.append(0)
    return output

def str_list(tok1,tok2):
    print("str_tok1, tok2: ", tok1, tok2)
    output = ["[CLS]"] + tok1 + tok2
    print("str_output: ", output)
    return output

def type_id(items):
    print("type: ", items)
    output = []
    for item in items:
        output.append(item)
    return output
    
def type_list(tok1,tok2):
    print("type_tok1, tok2: ", tok1, tok2)
    output = [0] * (len(tok1)+2) + [1] * (len(tok2)+1)
    print("type_output: ", output)
    return output

sentences1 = [
  "a,b,a", 
  "w,e,w" 
]

sentences2 = [
  "c,b,c", 
  "r,e,r" 
]




# 重复这2句, 否则tokens1为空值
tokens1    = map(str_split, sentences1)
tokens2    = map(str_split, sentences2)
tokens3    = map(lambda tok1,tok2: ["[CLS]"] + tok1 + tok2, tokens1, tokens2)
#tokens3    = map(str_list, tokens1, tokens2)
token_ids  = list(map(str_id, tokens3))
print("token_ids: ", token_ids)
print("")



# 重复这2句, 否则tokens1为空值
tokens1    = map(str_split, sentences1)
tokens2    = map(str_split, sentences2)
type_ids   = list(map(lambda tok1,tok2: [0] * (len(tok1)+2) + [1] * (len(tok2)+1), tokens1, tokens2))
#type_ids   = list(map(type_list, tokens1, tokens2))
print("type_ids: ", type_ids)
print("")


all_token_ids = map(lambda tids: tids +[0]*(150-len(tids)),token_ids)
all_token_ids = np.array(list(all_token_ids))

all_type_ids  = map(lambda tids: tids +[0]*(150-len(tids)),type_ids)
all_type_ids  = np.array(list(all_type_ids))

print('all_token_ids', all_token_ids)
print("all_type_ids", all_type_ids)


