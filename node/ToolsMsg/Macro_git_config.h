
����·������:
basePath = G:\T1073\
base:\\
cfgPath = Save:Help\Model\
cfg:\\

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// 1. 
Save:node\ToolsMsg\Macro_git_config.h \[1.1\] .git\config
Save:node\ToolsMsg\Macro_git_config.h \[1.2\] git postBuffer------Git����ֵ
Save:node\ToolsMsg\Macro_git_config.h \[1.3\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.4\] url--port
Save:node\ToolsMsg\Macro_git_config.h \[1.5\] create SSH key
Save:node\ToolsMsg\Macro_git_config.h \[1.6\] create SSH key--��������
Save:node\ToolsMsg\Macro_git_config.h \[1.7\] auto psw
Save:node\ToolsMsg\Macro_git_config.h \[1.8\] git(С�ڹ�)
Save:node\ToolsMsg\Macro_git_config.h \[1.9\] gitlab---------------url
Save:node\ToolsMsg\Macro_git_config.h \[1.10\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.11\] 
Save:node\ToolsMsg\Macro_git_config.h \[1.12\] 




[1.1] .git\config

//[core]
//	repositoryformatversion = 0
//	filemode = false
//	bare = false
//	logallrefupdates = true
//	symlinks = false
//	ignorecase = true

//[remote "origin"]
//	url = http://xiaojia:123456@192.168.2.148:8080/r/T107_MOCOR_20A_MP_W20.37.2.git
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
// git bash here
ssh-keygen -t rsa -C "seefs@163.com"
ssh-keygen -t rsa -C "xiaojia"
ssh-keygen -t rsa -C "xiaojia_bm@163.com"
ssh-keygen -t rsa -C "xiaojia"
ssh-keygen -t ed25519 -C "xiaojia_bm@163.com"
ssh-keygen -t rsa -b 2048 -C "xiaojia_bm@163.com"
// .ssh file
C:\Users\Administrator\.ssh
C:\Users\Administrator\.ssh\id_rsa.pub
C:\Users\Administrator\.ssh\id_gitlab.pub
C:\Users\Administrator\.ssh\id_github.pub
// ���Ƹ���Կ
// ��github
https://github.com/settings/keys
//���Լ�ͷ�� >> settings >> SSH and GPG keys >>New SSH key
//
//SHA256:qbGf7djIgrozd8XuKP7w2hpxUMF6yVqyIhuvNRbn8UM

// ssh bak
Save:\..\patch\ssh\\PC_BM_ME

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
Save:.git\config  remote
Save:\..\patch\.git\config  remote
Save:\..\tool_mini\.git\config  remote

//### ��ʽ1. config�ļ�
////�༭��
//	url = https://github.com/seefs/Source_Insight/
////��Ϊ
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
G:\UIS8910_git\.git\config  remote
G:\wa03u_git\.git\config  remote
//�༭��
	url = http://shshare:8080/r/MOCOR_20B_W20.36.2.git
	url = http://xiaojia:123456@192.168.2.148:8080/r/MOCOR_20B_W20.36.2.git
	url = http://xiaojia:123456@192.168.2.148:8080/r/MOCOR_20B_W20.36.2_WATCH.git
//��Ϊ
	url = git@192.168.2.148:8080/MOCOR_20B_W20.36.2_WATCH.git
	url = git@192.168.2.148:xiaojia/MOCOR_20B_W20.36.2_WATCH.git
	url = ssh://hehua@shshare:29418/T107_MOCOR_20A_MP_W20.37.2.git
	url = ssh://xiaojia@192.168.2.148:8080/MOCOR_20B_W20.36.2_WATCH.git
	url = ssh://xiaojia@192.168.2.148/MOCOR_20B_W20.36.2_WATCH.git


[1.8] git(С�ڹ�)
//
// ���no supported authentication methods avaiable
//
//TortoiseGit--��Settings�����ã�--��Network�����磩

//��SSH clientָ��xxx ���ҵ�Git���߰�װE�̣�
C:\Program^Files\Git\usr\bin\ssh.exe
C:\Program Files\Git\usr\bin\ssh.exe



[1.9] gitlab
// url--����
[remote "origin"]
 url = git@139.155.19.38:8910-developer/MOCOR_20B_W21.12.7.git
	url = git@github.com:seefs/tool_mini.git


// url--����1
http://139.155.19.38/
//xiaojia   xiaojia123456   xjs0f0s0
git clone git@139.155.19.38:8910-developer/MOCOR_20B_W21.12.7.git
git clone git@139.155.19.38:featurephone-hwnv/HW_NV_PARA.git
//
//	Cloning into ''... Administrator@s password:
//
//url = http://xiaojia:123456@192.168.2.148:8080/r/MOCOR_20B_W20.36.2.git
//
//url = git@139.155.19.38:8910-developer/MOCOR_20B_W21.12.7.git
//	puttykeyfile = C:\\Users\\Administrator\\.ssh\\bm2048pub.ppk


// url--����2
// ����������"ssh"
http://git.spdephone.com/
git clone git@git.spdephone.com:mtk-developer/60A_6464.git
//
//url = git@git.spdephone.com:8910-developer/MOCOR_20B_W21.12.7.git
//	puttykeyfile = C:\\Users\\Administrator\\.ssh\\bm2048pub.ppk



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





