
import requests        #导入requests包

url = 'http://www.cntour.cn/'
strhtml = requests.get(url)        #Get方式获取网页数据
print(strhtml.text)


