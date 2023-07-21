
//目录:
Save:node\S\cfg\Macro_S_Hosts.h \[1.1\] ping
Save:node\S\cfg\Macro_S_Hosts.h \[1.2\] GitHub
Save:node\S\cfg\Macro_S_Hosts.h \[1.3\] github图片显示
Save:node\S\cfg\Macro_S_Hosts.h \[1.4\] google
Save:node\S\cfg\Macro_S_Hosts.h \[1.5\] OneDrive
Save:node\S\cfg\Macro_S_Hosts.h \[1.6\] softconf
Save:node\S\cfg\Macro_S_Hosts.h \[1.7\] 
Save:node\S\cfg\Macro_S_Hosts.h \[1.8\] 
Save:node\S\cfg\Macro_S_Hosts.h \[1.9\] 
Save:node\S\cfg\Macro_S_Hosts.h \[1.10\] 


[1.1] ping
SDrivers:etc\
SDrivers:etc\hosts2
SDrivers:etc\hosts  GitHub

// win10
S:sTool\hosts\
S:sTool\hosts\hosts  GitHub
S:sTool\hosts\hosts_url  GitHub



// 不能用ping
// 网页刷新2次?
https://www.ipaddress.com/								209.126.119.175
https://www.ip-tracker.org/locator/ip-lookup.php
https://community.spiceworks.com/tools/ip-lookup/


// 刷新 DNS 缓存
//   可能要清除chrome缓存
cmd_s:ipconfig /flushdns

//
ping github.com
//资源处于联机状态，但未对连接尝试做出响应



[1.2] GitHub
// 备注
测试发现，第4个地址导致下载慢

//  参考ip-1:(ipaddress)
# GitHub Start 
140.82.114.3 github.com
146.75.125.194 github.global.ssl.fastly.net
140.82.114.9 codeload.github.com
140.82.112.4 gist.github.com
# GitHub End

# addr-4 Start
140.82.113.3 gist.github.com
140.82.112.4 gist.github.com
140.82.114.3 gist.github.com
140.82.112.3 gist.github.com
# addr-4 End

//  参考ip-2:(ip-tracker)
# GitHub Start 
140.82.113.3 github.com
151.101.25.194 github.global.ssl.fastly.net
140.82.112.10 codeload.github.com
# GitHub End

//  参考ip-3:(spiceworks)
# GitHub Start 
140.82.113.3 github.com
199.232.65.194 github.global.ssl.fastly.net
140.82.113.10  codeload.github.com
140.82.113.3   gist.github.com
# GitHub End
//  感觉关键是第三个





[1.3] github图片显示
//  参考ip-1:(ipaddress)
# GitHub Start 
199.232.68.133    assets-cdn.github.com
199.232.68.133    raw.githubusercontent.com
199.232.68.133    gist.githubusercontent.com
199.232.68.133    cloud.githubusercontent.com
199.232.68.133    camo.githubusercontent.com
199.232.68.133    avatars0.githubusercontent.com
199.232.68.133    avatars1.githubusercontent.com
199.232.68.133    avatars2.githubusercontent.com
199.232.68.133    avatars3.githubusercontent.com
199.232.68.133    avatars4.githubusercontent.com
199.232.68.133    avatars5.githubusercontent.com
199.232.68.133    avatars6.githubusercontent.com
199.232.68.133    avatars7.githubusercontent.com
199.232.68.133    avatars8.githubusercontent.com
# GitHub End


//  参考ip-2:(spiceworks)
# GitHub Start 
151.101.184.133    assets-cdn.github.com
151.101.184.133    raw.githubusercontent.com
151.101.184.133    gist.githubusercontent.com
151.101.184.133    cloud.githubusercontent.com
151.101.184.133    camo.githubusercontent.com
151.101.184.133    avatars0.githubusercontent.com
151.101.184.133    avatars1.githubusercontent.com
151.101.184.133    avatars2.githubusercontent.com
151.101.184.133    avatars3.githubusercontent.com
151.101.184.133    avatars4.githubusercontent.com
151.101.184.133    avatars5.githubusercontent.com
151.101.184.133    avatars6.githubusercontent.com
151.101.184.133    avatars7.githubusercontent.com
151.101.184.133    avatars8.githubusercontent.com
# GitHub End

//  参考ip-3:
# GitHub Start 
199.232.64.133    raw.githubusercontent.com
199.232.64.133    gist.githubusercontent.com
199.232.64.133    cloud.githubusercontent.com
199.232.64.133    camo.githubusercontent.com
199.232.64.133    avatars0.githubusercontent.com
199.232.64.133    avatars1.githubusercontent.com
199.232.64.133    avatars2.githubusercontent.com
199.232.64.133    avatars3.githubusercontent.com
199.232.64.133    avatars4.githubusercontent.com
199.232.64.133    avatars5.githubusercontent.com
199.232.64.133    avatars6.githubusercontent.com
199.232.64.133    avatars7.githubusercontent.com
199.232.64.133    avatars8.githubusercontent.com
# GitHub End




[1.4] google
//hosts
151.101.184.133    avatars8.githubusercontent.com


[1.5] OneDrive
# OneDrive Start 
13.107.42.13    live.com
# OneDrive End


[1.6] softconf
# softconf Start 
64.46.59.173    softconf.com
# softconf End


[1.7] 


[1.8] 




[1.9] 




[1.10] 



