

//Ŀ¼:
Save:node\ToolsMsg\Macro_git_config.h \[1.1\] .git\config
Save:node\ToolsMsg\Macro_git_config.h \[1.2\] git postBuffer------Git����ֵ
Save:node\ToolsMsg\Macro_git_config.h \[1.3\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.4\] url--port
Save:node\ToolsMsg\Macro_git_config.h \[1.5\] create SSH key
Save:node\ToolsMsg\Macro_git_config.h \[1.6\] create SSH key--��������
Save:node\ToolsMsg\Macro_git_config.h \[1.7\] auto psw
Save:node\ToolsMsg\Macro_git_config.h \[1.8\] git(С�ڹ�)
Save:node\ToolsMsg\Macro_git_config.h \[1.9\] gitlab---------------url, ������
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


[1.2] git postBuffer ------Git����ֵ
// �鿴
// git config --list
http.postbuffer=1524288000
//
git config --global http.postBuffer 524288000
git config --global https.postBuffer 524288000

// ���HTTP�����ٶ�С��1000��ʱ�䳬��30�룬���佫��ֹ��
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
C:\Users\{Admin}\.ssh\id_rsa.pub                //δʹ��----------seefs@163.com
C:\Users\{Admin}\.ssh\id_gitlab.pub             //δʹ��
C:\Users\{Admin}\.ssh\id_github.pub             //github--������--seefs@163.com
C:\Users\{Admin}\.ssh\id_github2.pub            //github--��˾��--xiaojia_bm@163.com
C:\Users\{Admin}\.ssh\bm2048pub.ppk             //GitLab--��˾��--xiaojia_bm@163.com(С�ڹ�)

// ssh bak
Save:\..\patch\ssh\\PC_BM_ME

// ���Ƹ���Կ
// �� github
https://github.com/settings/keys
//���Լ�ͷ�� >> settings >> SSH and GPG keys >>New SSH key
//
//SHA256:qbGf7djIgrozd8XuKP7w2hpxUMF6yVqyIhuvNRbn8UM


// GPG �� SSH�Ա�
SSH (Secure Shell) ���ڽ���ͨ�Ź����еİ�ȫ����˫��ġ�
GPG (GNU Privacy Guard) �ȿ����ڼ��ܣ�Ҳ������ǩ������Щ���ǵ���ġ�

// win-copy
cat ~/.ssh/bm2048.pub | clip
// add
eval $(ssh-agent -s)
ssh-add ~/.ssh/bm2048



[1.6] create SSH key--��������
//
https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

// ��Կ
ls -al ~/.ssh
//	-rw-r--r-- 1 Administrator 197121  567 Jul  2 14:20 id_rsa.pub
clip < ~/.ssh/id_ed25519.pub


// �������� SSH ����
// [git base here]
ssh -T git@github.com
ssh -T git@git.spdephone.com
// yes
//Are you sure you want to continue connecting (yes/no/[fingerprint])? yes

//
ssh -T git@139.155.19.38:8910-developer
ssh -T xiaojia@139.155.19.38
ssh -T git@139.155.19.38
// �����ų�
ssh -Tvvv git@139.155.19.38
ssh -Tv git@139.155.19.38


[1.7] auto psw (�÷�ʽ2)
// ÿ��pushʱ�Զ������û�������
{save}\.git\
{save}\.git\config  remote

//### ��ʽ1. config�ļ�
//�༭��
//	url = https://github.com/seefs/Source_Insight/
//��Ϊ
//	url = https://�û���:����@github.com/seefs/Source_Insight/
//	url = https://seefs:s0f0s0@github.com/seefs/Source_Insight/
//	url = http://xiaojia:123456@192.168.2.148:8080/seefs/Source_Insight/


### ��ʽ2. https����ssh
git remote -v
git remote rm origin
git remote add origin git@github.com:seefs/Source_Insight.git
//�༭��
	url = https://github.com/seefs/Source_Insight/
//��Ϊ
	url = git@github.com:seefs/Source_Insight.git
	url = git@github.com:seefs/patch.git
	url = git@github.com:seefs/tool_mini.git

###
{8910}\.git\
{8910}\.git\config  remote
//�༭��
	url = http://shshare:8080/r/MOCOR_20B_W20.36.2.git
//��Ϊ
	url = git@192.168.2.148:8080/MOCOR_20B_W20.36.2_WATCH.git


[1.8] git(С�ڹ�)
### __TortoiseGit__
//
// ���no supported authentication methods avaiable
//
//TortoiseGit--��Settings�����ã�--��Network�����磩

//��SSH clientָ��xxx ���ҵ�Git���߰�װE�̣�
C:\Program^Files\Git\usr\bin\
C:\Program Files\Git\usr\bin\ssh.exe

// �µ��Բ����û���֣�
//couldn't load this key (SSH-2 public key (OpenSSH format)) 


// Ĭ��
C:\Program Files\TortoiseGit\bin\TortoiseGitPlink.exe
//putty ����
// no supported authentication methods available (server sent:publickey...)

### error
//
//too many files to display
https://gitlab.com/tortoisegit/tortoisegit/-/issues/3878

### ����git path
Save:Cmd_other\add_env\
Save:Cmd_other\add_env\set_env_git_path.bat


[1.9] __gitlab__
//
patch:ssh\
// ��˾��
// --win10�����û��� Administrator/seefs
patch:ssh\Macro_gitlab_url.h
// �Լ���
// --�Լ��� tmp04/id_github, ������ bm2048
// --tmp04 ����
patch:ssh\Macro_github_url.h


### �ϴ��´���
//	2���ڱ���Ŀ¼�Ѵ���ź�
//	3��git init
//	4��git add .
//	5��git commit -m "first commit"
//	6��git remote add origin git@git.spdephone.com:8910-developer/MOCOR_20B_W22.15.2.git
//	7��git push -u origin master


// �µ���
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
// ��ִ����������
ssh-agent bash
// --err2
Error loading key "/c/Users/seefs/.ssh/tmp04": invalid format
// �� id_github




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




