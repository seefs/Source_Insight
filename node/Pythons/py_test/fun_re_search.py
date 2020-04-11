#!/usr/bin/python3
 

import re


#cate17_str = 'cx:4,4'
cate17_str = 'cx:3,4'


searchObj = re.search( r'cx:([0-9,]{1,4})', cate17_str)
cate17_list = []
if searchObj:
    cate17_list = searchObj.group(1).split(',')


print ("cate17_list ", cate17_list)





