#!/usr/bin/python3
 

import json
import os

if __name__ == "__main__":
    #找到这个Bookmarks文件的位置，一般是固定的
    filename = r"C:\Users\Administrator\AppData\Local\Google\Chrome\User Data\Default\Bookmarks"

    #找到chrome.exe
    exe = r"C:\Program Files\Google\Chrome\Application\chrome.exe"
    with open(filename, "r", encoding='utf-8_sig') as data_file:
        bookmark_data = json.load(data_file)
        
    for key in bookmark_data:
        print(key, ":", bookmark_data[key])
    
    for key in bookmark_data['roots']:
        print(key, ":", bookmark_data['roots'][key])
        
    for key in bookmark_data['roots']['bookmark_bar']:
        print(key, ":", bookmark_data['roots']['bookmark_bar'][key])
        
    #if bookmark_data['roots']['bookmark_bar']['children'][0]['name'] == '京东':
    #    bookmark = bookmark_data
    #    bookmark['roots']['bookmark_bar']['children'] = bookmark_data['roots']['bookmark_bar']['children'][4:]

    #with open(filename, "w", encoding='utf-8_sig') as data_file:
    #    json.dump(bookmark,data_file,sort_keys=True,indent =4,ensure_ascii=False)

    #打开谷歌浏览器
    #os.startfile(exe)

