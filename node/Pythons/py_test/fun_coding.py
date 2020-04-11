

        adchar=chardet.detect(_t1)
        print("  adchar", adchar)
        if adchar['encoding']=='utf-8' or adchar['encoding']=='ascii':
            code='utf-8'
#            print("  adchar", adchar)
        else:
            code='GBK'
#            print("  adchar", adchar)



#代码不全...
import requests
 
import coding
 
# 检测文件编码
print(coding.file_encoding('test1.txt'))
print(coding.file_encoding('test2.txt'))
# 检测字符串编码
print(coding.string_encoding(requests.get('https://www.baidu.com').content))




