

//目录:
Save:node\ToolsMsg\Macro_git_config.h \[1.1\] .git\config
Save:node\ToolsMsg\Macro_git_config.h \[1.2\] git postBuffer------Git缓存值
Save:node\ToolsMsg\Macro_git_config.h \[1.3\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.4\] url--port
Save:node\ToolsMsg\Macro_git_config.h \[1.5\] create SSH key
Save:node\ToolsMsg\Macro_git_config.h \[1.6\] create SSH key--官网方案
Save:node\ToolsMsg\Macro_git_config.h \[1.7\] auto psw
Save:node\ToolsMsg\Macro_git_config.h \[1.8\] git(小乌龟)
Save:node\ToolsMsg\Macro_git_config.h \[1.9\] gitlab---------------url, 换电脑
Save:node\ToolsMsg\Macro_git_config.h \[1.10\] ppk
Save:node\ToolsMsg\Macro_git_config.h \[1.11\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.12\] 




[1.1] .git\config
//
{save}\.git\
{save}\.git\config  remote

//[core]
//	repositoryformatversion = 0
//	filemode = false
//	bare = false
//	logallrefupdates = true
//	symlinks = false
//	ignorecase = true

//[remote "origin"]
//	url = ...
//	fetch = +refs/heads/*:refs/remotes/origin/*

//[branch "master"]
//	remote = origin
//	merge = refs/heads/master

//[gui]
//	wmstate = zoomed
//	geometry = 1061x563+90+90 665 403


[1.2] git postBuffer ------Git缓存值
// 查看
// git config --list
http.postbuffer=1524288000
//
git config --global http.postBuffer 524288000
git config --global https.postBuffer 524288000

// 如果HTTP传输速度小于1000的时间超过30秒，则传输将中止。
git config --global http.lowSpeedLimit 1000
git config --global http.lowSpeedTime 30
// 60*16.6=1000
git config --global http.lowSpeedLimit 10
git config --global http.lowSpeedTime 3000




[1.3] 



[1.4] url--port
// port
C:\Users\Administrator\.ssh
C:\Users\Administrator\.ssh\config
//	Host "192.168.2.148"
//	Port 8080
//	IdentityFile ~/.ssh/id_rsa.pub
//	User "xiaojia"
//
//	Host "139.155.19.38"
//	IdentityFile ~/.ssh/id_github.ppk

### error
//Load key "/c/Users/Administrator/.ssh/id_github.ppk": invalid format



[1.5] create SSH key
### __SSH__
// git bash here
ssh-keygen -t rsa -C "seefs@163.com"
ssh-keygen -t rsa -C "xiaojia_bm@163.com" -f ~/.ssh/id_github2
ssh-keygen -t ed25519 -C "xiaojia_bm@163.com"
ssh-keygen -t rsa -b 2048 -C "xiaojia_bm@163.com"

// .ssh file
C:\Users\{Admin}\.ssh\
C:\Users\{Admin}\.ssh\id_rsa.pub                //未使用----------seefs@163.com
C:\Users\{Admin}\.ssh\id_gitlab.pub             //未使用
C:\Users\{Admin}\.ssh\id_github.pub             //github--个人用--seefs@163.com
C:\Users\{Admin}\.ssh\id_github2.pub            //github--公司用--xiaojia_bm@163.com
C:\Users\{Admin}\.ssh\bm2048pub.ppk             //GitLab--公司用--xiaojia_bm@163.com(小乌龟)

// ssh bak
Save:\..\patch\ssh\\PC_BM_ME

// 复制该密钥
// 打开 github
https://github.com/settings/keys
//点自己头像 >> settings >> SSH and GPG keys >>New SSH key
//
//SHA256:qbGf7djIgrozd8XuKP7w2hpxUMF6yVqyIhuvNRbn8UM


// GPG 与 SSH对比
SSH (Secure Shell) 用于交互通信过程中的安全，是双向的。
GPG (GNU Privacy Guard) 既可用于加密，也可用于签名，这些都是单向的。

// win-copy
cat ~/.ssh/bm2048.pub | clip
// add
eval $(ssh-agent -s)
ssh-add ~/.ssh/bm2048



[1.6] create SSH key--官网方案
//
https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

// 公钥
ls -al ~/.ssh
//	-rw-r--r-- 1 Administrator 197121  567 Jul  2 14:20 id_rsa.pub
clip < ~/.ssh/id_ed25519.pub


// 测试您的 SSH 连接
// [git base here]
ssh -T git@github.com
ssh -T git@git.spdephone.com
// yes
//Are you sure you want to continue connecting (yes/no/[fingerprint])? yes

//
ssh -T git@139.155.19.38:8910-developer
ssh -T xiaojia@139.155.19.38
ssh -T git@139.155.19.38
// 故障排除
ssh -Tvvv git@139.155.19.38
ssh -Tv git@139.155.19.38


[1.7] auto psw (用方式2)
// 每次push时自动输入用户名密码
{save}\.git\
{save}\.git\config  remote

//### 方式1. config文件
//编辑：
//	url = https://github.com/seefs/Source_Insight/
//改为
//	url = https://用户名:密码@github.com/seefs/Source_Insight/
//	url = https://seefs:s0f0s0@github.com/seefs/Source_Insight/
//	url = http://xiaojia:123456@192.168.2.148:8080/seefs/Source_Insight/


### 方式2. https换成ssh
git remote -v
git remote rm origin
git remote add origin git@github.com:seefs/Source_Insight.git
//编辑：
	url = https://github.com/seefs/Source_Insight/
//改为
	url = git@github.com:seefs/Source_Insight.git
	url = git@github.com:seefs/patch.git
	url = git@github.com:seefs/tool_mini.git

###
{8910}\.git\
{8910}\.git\config  remote
//编辑：
	url = http://shshare:8080/r/MOCOR_20B_W20.36.2.git
//改为
	url = git@192.168.2.148:8080/MOCOR_20B_W20.36.2_WATCH.git


[1.8] git(小乌龟)
### __TortoiseGit__
//
// 解决no supported authentication methods avaiable
//
//TortoiseGit--》Settings（设置）--》Network（网络）

//将SSH client指向xxx （我的Git工具安装E盘）
C:\Program^Files\Git\usr\bin\
C:\Program Files\Git\usr\bin\ssh.exe

// 新电脑不设置会出现：
//couldn't load this key (SSH-2 public key (OpenSSH format)) 


// 默认
C:\Program Files\TortoiseGit\bin\TortoiseGitPlink.exe
//putty 报错
// no supported authentication methods available (server sent:publickey...)

### error
//
//too many files to display
https://gitlab.com/tortoisegit/tortoisegit/-/issues/3878

### 设置git path
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\set_env_git_path.bat


[1.9] __gitlab__
//
patch:ssh\
// 公司用
// --win10改了用户名 Administrator/seefs
patch:ssh\Macro_gitlab_url.h
// 自己用
// --自己用 tmp04/id_github, 其他用 bm2048
// --tmp04 报错
patch:ssh\Macro_github_url.h


### 上传新代码
//	2、在本地目录把代码放好
//	3、git init
//	4、git add .
//	5、git commit -m "first commit"
//	6、git remote add origin git@git.spdephone.com:8910-developer/MOCOR_20B_W22.15.2.git
//	7、git push -u origin master


// 新电脑
//	Load key "/c/Users/seefs/.ssh/tmp04": invalid format
//	git@github.com: Permission denied (publickey).
//
https://blog.csdn.net/qq_40047019/article/details/122898308
//
ssh-agent -s
//	SSH_AUTH_SOCK=/tmp/ssh-NrsndLFrMOsx/agent.1117; export SSH_AUTH_SOCK;
//	SSH_AGENT_PID=1118; export SSH_AGENT_PID;
//	echo Agent pid 1118;
ssh-add ~/.ssh/tmp04
// --err1
//Could not open a connection to your authentication agent.
// 先执行如下命令
ssh-agent bash
// --err2
Error loading key "/c/Users/seefs/.ssh/tmp04": invalid format
// 换 id_github




[1.10] ppk
// 
{8910}\.git\config  puttykeyfile
//	
//[remote "origin"]
//	 puttykeyfile = C:\\Users\\Administrator\\.ssh\\bm2048pub.ppk


[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 




