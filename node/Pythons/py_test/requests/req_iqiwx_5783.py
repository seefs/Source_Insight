
import requests        #导入requests包

url = 'http://www.iqiwx.com/book/5/5783/'
strhtml = requests.get(url)        #Get方式获取网页数据
print(strhtml.text)



