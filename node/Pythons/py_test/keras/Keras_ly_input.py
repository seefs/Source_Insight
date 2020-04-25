
现有的层不能满足需求，需要自己写个自定义层。需要多个参数为输入。

仅适用于没有参数更新的自定义层。

def multi_input(input):
    input1 = input[0]
    input2 = input[1]
    input3 = input[3]
 
 
x = Lambda(multi_input)([q,y,z])
之后input1 = q , input2 = y, input3 = z

