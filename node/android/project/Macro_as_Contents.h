﻿
基础路径设置:
Inward   = True
Backward = 0
Save:node\android\project\Macro_as_demo.h
// lib:
demoPath = D:\project\Android\WebDav\SardineAndroid
demo:\\
basePath = D:\project\Android\Android\Contents
base:\\

base:\\

AsFile:base:


// Sardine api
demo:src\main\java\com\thegrizzlylabs\sardineandroid\Sardine.java



//创建一个Sardine客户端
Sardine sardine = new OkHttpSardine();
sardine.setCredentials("username", "password");




//发出请求
//	getfiles
List<DavResource> resources = sardine.list("http://webdav.server.com");
//目录在后面加上一个斜杠
sardine.list("https://dav.jianguoyun.com/dav/" + webdavDir + "/");
// 测试单个目录可用
sardine.list(String url, 1);
sardine.list(String url, 0);
sardine.list(String url, -1);


//发出请求
//	connect
if (!sardine.exists(webdavUrl + webdavDir)) {
    //不存在目录即创建
    sardine.createDirectory(webdavUrl + webdavDir);
}


//Directory
//  Directory
void createDirectory(String url) throws IOException;


//上传
//	upload
if (!sardine.exists(webdavUrl + webdavDir + "/" + fileName)) {
    //
	sardine.put(webdavUrl + webdavDir + "/" + fileName, 
				new File(filePath), 
				"application/x-www-form-urlencoded");
}

void put(String url, byte[] data, String contentType) throws IOException;



//下载
//	get
InputStream get(String url) throws IOException;




//
//	delete
void delete(String url) throws IOException;
//	move
void move(String sourceUrl, String destinationUrl) throws IOException;
//	copy
void copy(String sourceUrl, String destinationUrl) throws IOException;
//	lock
String lock(String url, int timeout) throws IOException;
//	unlock
void unlock(String url, String token) throws IOException;




//界面可以参考:
//  易码－私人云笔记 2
E-mail：gtshine@gmail.com

