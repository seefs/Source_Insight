
import requests        #导入requests包
import re
from bs4 import BeautifulSoup


#url = 'http://www.iqiwx.com/book/5/5783/'
url = 'http://www.iqiwx.com/book/5/5783/10023003.html'
strhtml = requests.get(url)        #Get方式获取网页数据
print(strhtml.text)

#soup = BeautifulSoup(strhtml, 'html.parser')
#print(soup)







