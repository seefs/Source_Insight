
decoded = decode(
    model,
    encode_input,
    start_token=target_token_dict['<START>'],
    end_token=target_token_dict['<END>'],
    pad_token=target_token_dict['<PAD>'],
    top_k=10,
    temperature=1.0,
)
print(''.join(map(lambda x: target_token_dict_inv[x], decoded[0][1:-1])))
print(''.join(map(lambda x: target_token_dict_inv[x], decoded[1][1:-1])))


