
from keras_transformer import decode

decoded = decode(
    model,
    encoder_inputs_no_padding,
    start_token=token_dict['<START>'],
    end_token=token_dict['<END>'],
    pad_token=token_dict['<PAD>'],
    max_len=100,
)
token_dict_rev = {v: k for k, v in token_dict.items()}
for i in range(len(decoded)):
    print(' '.join(map(lambda x: token_dict_rev[x], decoded[i][1:-1])))


