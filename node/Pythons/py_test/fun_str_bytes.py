
# str --> bytes 
#    encode()
str="aabbcc"
bytes=str.encode('utf-8')
print ("bytes: ", bytes)
print ("")


# bytes --> str (decode)
#    decode()
bytes=b"aabbcc"
str=bytes.decode('utf-8')
print ("str: ", str)
print ("")


# str,bytes --> bytearray
#    bytearray()
bytes=b"aabbcc"
byarray=bytearray(bytes)
print ("byarray: ", byarray)
str="aabbcc"
byarray=bytearray(str, 'utf-8')
print ("byarray: ", byarray)
print ("")


# hex_str --> bytearray
#    bytearray.fromhex()
hexstr="098811"
byarray=bytearray.fromhex(hexstr)
print ("byarray: ", byarray)
byarray=bytearray(b'\t\x88\x11')
print ("byarray: ", byarray)
print ("")


# bytearray --> str,bytes
#    decode(), bytes()
byarray=bytearray("aabbcc",encoding='utf-8')
str=byarray.decode('utf-8')
print ("str: ", str)
#bts=bytes(byarray)
#print ("bts: ", bts)
print ("")


