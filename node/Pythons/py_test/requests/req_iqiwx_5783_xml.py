
import requests        #导入requests包
import re
from bs4 import BeautifulSoup

#url = 'http://www.iqiwx.com/book/5/5783/'
#strhtml=requests.get(url)
#soup=BeautifulSoup(strhtml.text,'lxml')
#
#data = soup.select('#main>div>div.mtop.firstMod.clearfix>div.centerBox>ul.newsList>li>a')
#print(data)
#
#for item in data:
#    result={
#        "title":item.get_text(),
#        "link":item.get('href'),
#        'ID':re.findall('\d+',item.get('href'))
#    }
#print(result)

html_doc = """
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gbk" />
<title>亘古大帝最新章节_亘古大帝(陈辉)_亘古大帝无弹窗全文阅读_爱奇文学</title>
</head>
<body>
<div id="maininfo">
  <div id="readerlist">
    <ul>
      <li class="fj">
        <h3>《亘古大帝》  正文</h3>
        <div class="border-line"></div>
      </li>
      
      <li><a href="10023003.html">第001章 重生万年后</a></li>
      <li><a href="10023665.html">第002章 符阵</a></li>
      <li><a href="10023667.html">第003章 天殿天书【第三更】</a></li>
      <li><a href="10023669.html">第004章 轮回【第四更】</a></li>
      <li><a href="10023670.html">第005章 风刃之路【第五更】</a></li>
      <li><a href="33639481.html">第2926章 不能被提及的名字【第二更】</a></li>
      <li><a href="33639628.html">第2927章 会有些麻烦【第三更】</a></li>
      
    </ul>
    <div class="all_ad clearfix mtop" id="ad_980_2"></div>
  </div>
  <div class="clearfix"></div>
</div>
<script>nav_52('sort3');</script>
</body>
</html>
"""
soup = BeautifulSoup(html_doc, 'html.parser')

print(soup.title)
# title 元素
# <title>亘古大帝最新章节_亘古大帝(陈辉)_亘古大帝无弹窗全文阅读_爱奇文学</title>

#print(soup.select('html head title'))
# title 元素
# <title>亘古大帝最新章节_亘古大帝(陈辉)_亘古大帝无弹窗全文阅读_爱奇文学</title>

print("")

#print(soup.select('body div div ul li a'))
# a 元素

#data = soup.select('#maininfo>div>ul>li>a')
#print(data)
# a 元素

data = soup.select('#maininfo > #readerlist > ul > li > a')
for i in data:
    print(i['href'])
# a 元素



#data = soup.find_all('li', class_ = 'fj')
#print(data)
# li 元素


#data = soup.find_all('a',limit=2)
#print(data)
# a 元素, 前n

#data = soup.find_all('a')[2]
#print(data)
# a 元素


#print(soup.select('body div div ul li a'))


#data = soup.body.div.div.ul
#print(data)
# ul 元素


#data = soup.body.div.div.ul.li['class']
#print(data)
# class 元素


#data = soup.body.div.div.ul.li.parent.name
#print(data)
# 元素的父节点的标签





