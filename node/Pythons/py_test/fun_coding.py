

        adchar=chardet.detect(_t1)
        print("  adchar", adchar)
        if adchar['encoding']=='utf-8' or adchar['encoding']=='ascii':
            code='utf-8'
#            print("  adchar", adchar)
        else:
            code='GBK'
#            print("  adchar", adchar)



#´úÂë²»È«...
import requests
 
import coding
 
# ¼ì²âÎÄ¼ş±àÂë
print(coding.file_encoding('test1.txt'))
print(coding.file_encoding('test2.txt'))
# ¼ì²â×Ö·û´®±àÂë
print(coding.string_encoding(requests.get('https://www.baidu.com').content))




