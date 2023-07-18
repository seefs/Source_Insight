#!/usr/bin/python3
 

import json
import os
#import pandas as pd
import csv


dataSet   = []
titleSet  = []
isGetFolderTitle = 0
isGetUrlTitle    = 0


def fact_folder(lv, child):
    global isGetFolderTitle
    # 字典{}
    for key in child:
        if "children" == key:
            # 列表[]
            for arr_i in child[key]: 
                if "folder" == arr_i['type']:
                    fact_folder(lv+1, arr_i)
                else:
                    fact_url(arr_i)

    # 字典{}转列表[]
    dataRow = []
    dataRow.append('1')
    child['children'] = "null"
    dataRow.extend(list(child.values()))
    dataSet.append(dataRow)
    
    # 标题
    if 0 == isGetFolderTitle:
        isGetFolderTitle = 1
        dataRow = list(child.keys())
        titleSet.append(dataRow)
    return 0

def fact_url(child):
    global isGetUrlTitle

    # 字典{}转列表[]
    dataRow = []
    dataRow.append('0')
    dataRow.extend(list(child.values()))
    dataSet.append(dataRow)
    
    # 标题
    if 0 == isGetUrlTitle:
        isGetUrlTitle = 1
        dataRow = list(child.keys())
        titleSet.append(dataRow)
    return 0

def fact_preview():
    for arr_i in dataSet: 
        if "0" == arr_i[0]:
            print('url', arr_i)
        else:
            print('folder', arr_i)
    return 0
    
    
def csv_write():
    try:
        csv_filename      = r"D:\save\patch\node\chrome\csv_bookmark_data.txt"
        csvFile   = open(csv_filename, "w+",encoding='utf-8',newline='')
        # path为输出路径和文件名，newline=''是为了不出现空行
        csvWriter = csv.writer(csvFile)
        print("open pass!")

        for arr_i in dataSet: 
            csvWriter.writerow(arr_i)
        print("write pass!")
    finally:
        csvFile.close()
        
    try:
        csv_filename      = r"D:\save\patch\node\chrome\csv_bookmark_title.txt"
        csvFile   = open(csv_filename, "w+",encoding='utf-8',newline='')
        # path为输出路径和文件名，newline=''是为了不出现空行
        csvWriter = csv.writer(csvFile)
        print("open pass!")
        
        for arr_i in titleSet: 
            csvWriter.writerow(arr_i)
        print("write pass!")
    finally:
        csvFile.close()
        
    return 0

def csv_test():
    try:
        csv_filename      = r"D:\save\patch\node\chrome\csv_bookmark_data.txt"
        csvFile   = open(csv_filename, "w+",encoding='utf-8',newline='')
        # path为输出路径和文件名，newline=''是为了不出现空行
        csvWriter = csv.writer(csvFile)
        print("open pass!")
        
        # 标题
        csvWriter.writerow(["姓名","年龄","性别"])
        print("write pass!")
        
        dataRow = []
        dataRow.append("13328172424105193")
        dataRow.append("0")
        dataRow.append('a84a91f5-e28f-4dcf-bafc-93b375d199fa')
        csvWriter.writerow(dataRow)
        print("write pass!")
        
    finally:
        csvFile.close()
    return 0


if __name__ == "__main__":
#    csv_test()
    
    #找到这个Bookmarks文件的位置，一般是固定的
    bookmark_filename = r"C:\Users\Administrator\AppData\Local\Google\Chrome\User Data\Default\Bookmarks"
    with open(bookmark_filename, "r", encoding='utf-8_sig') as data_file:
        bookmark_data = json.load(data_file)
        
#    for key in bookmark_data:
#        print(key, ":", bookmark_data[key])
#    print("----------------------")
    
#    for key in bookmark_data['roots']:
#        print(key, ":", bookmark_data['roots'][key])
#    print("----------------------")
        
#    for key in bookmark_data['roots']['bookmark_bar']:
#        print(key, ":", bookmark_data['roots']['bookmark_bar'][key])

    fact_folder(0, bookmark_data['roots']['bookmark_bar'])
    #fact_preview()
    
    csv_write()



    #找到chrome.exe
    #exe = r"C:\Program Files\Google\Chrome\Application\chrome.exe"

    #打开谷歌浏览器
    #os.startfile(exe)
