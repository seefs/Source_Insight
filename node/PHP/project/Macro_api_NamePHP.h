
### "模块：
//	1   成员：亲人(默认关注)、关注、好友、普通成员
//	1.1 成员分析：左边4个草，右边4个花，36^2+循环
//	2   分析：3个主题+3个特点，心情值
//	3.1 个性：36+
//	3.2 星座：12+
//	4   设置：修改、积分、推荐、历史心情、设置、关于、注销、分析参数设置
//	4.4 评论列表："			
//	登录	http://www.seefs.cn/login.php?action=login&name=seefs&psw=xj123	cead234一	user	用户名utf8
//	注册	http://www.seefs.cn/login.php?action=register&nick=东墨&name=cead&psw=123456&birth=2015-3-4&email=cead33@163.com&sex=1		user	
//	退出	http://www.seefs.cn/login.php?action=loginout&id=1018		user	
//	找回密码	http://www.seefs.cn/login.php?action=getpwd&id=1018		user	
//	修改资料	http://www.seefs.cn/login.php?action=edit&id=1018&psw=111111&nick=weefs&name=chen高&birth=1982-11-20&sex=1&email=feardou@163.com		user	
//	设置新密码	http://www.seefs.cn/login.php?action=setpwd&id=1018&psw=absadf&token=45		user	
//					
//	获取成员列表	http://www.seefs.cn/member.php?action=all&id=1000&pages=1	粉丝列表	mem	
//	添加成员	http://www.seefs.cn/member.php?action=add&id=1000&nick=cead&name=cead&birth=2015-3-4&email=cead@163.com&sex=1&relation_id=1	家属默认关注	mem	
//	修改成员	http://www.seefs.cn/member.php?action=edit&id=1000&mem_id=1016&nick=fffff&name=eeeee&birth=2015-4-4&email=cead@163.com&sex=1&relation_id=1		mem	ucode少个0
//	删除成员	http://www.seefs.cn/member.php?action=delete&id=1000&mem_id=1015&email=cead@163.com		mem	
//	获取成员关系列表	http://www.seefs.cn/member.php?action=getrelation	1,2近关,3好关,4关,5近,6好,7普	mem_type	
//	添加、取消关注	http://www.seefs.cn/member.php?action=setrelation&id=1000&mem_id=1016&value=785		mem	
//	获取成员个性列表	http://www.seefs.cn/member.php?action=getlist&id=1000&mem_id=1021		fx_user + mem_gx	
//	获取个性列表	http://www.seefs.cn/member.php?action=getgexinglist		mem_gexing	
//	获取成员分析评论	http://www.seefs.cn/member.php?action=getcomment&type_id=23&pages=3&pagesize=2	类型+4段	fx_type + fx_ct	
//	发表分析评论	http://www.seefs.cn/member.php?action=putcomment&id=1000&type_id=23&content=回复回复			
//	评论点赞	http://www.seefs.cn/member.php?action=love&type_id=23&comment_id=222			
//					
//	获取分析列表	htt://www.seefs.cn/member.php?action=getanalysis&id=1000	爱情、亲情、结合成员分析		
//					
//	获取9个性	htt://www.seefs.cn/chat.php?action=personality			
//	获取12星座	htt://www.seefs.cn/chat.php?action=zodiac			
//	获取类型评论	htt://www.seefs.cn/chat.php?action=getcomment&type_id=1000&pages=1			
//	发表类型评论	htt://www.seefs.cn/chat.php?action=putcomment&type_id=1000&content=回复回复			
//					
//	获取等级	htt://www.seefs.cn/user.php?action=getgrade&id=1000			
//	获取规则[静]	htt://www.seefs.cn/user.php?action=getgraderule	获得更多权限		
//	意见反馈	htt://www.seefs.cn/user.php?action=feedback&content=回复回复			
//	我的印象表	htt://www.seefs.cn/user.php?action=effect			
//	统计表	htt://www.seefs.cn/user.php?action=total			
//	设置	htt://www.seefs.cn/user.php?action=setting			
//	关于[静]	htt://www.seefs.cn/user.php?action=about	972		
//	分享到其他	htt://www.seefs.cn/friendster.php?action=addsterarticleshar&share_art_id=1			
//	升级	htt://www.seefs.cn/user.php?action=upgrade			
//					
//					
//	php版本5.2.14	http://www.seefs.cn/phpinfo.php			


