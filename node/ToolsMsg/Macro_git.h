
����·������:
basePath = Save:
base:\\

/***********************************************************************/

�������⣺
reset �����ύ
diff HEAD


//Ŀ¼[Num][Ca]:
// 1. git ����
Save:node\ToolsMsg\Macro_git.h \[1.1\] git config ----------�����˻�(��Ҫ��github�˻�����һ��)
Save:node\ToolsMsg\Macro_git.h \[1.2\] git config --list ---�鿴����
Save:node\ToolsMsg\Macro_git.h \[1.3\] git init ------------����git���زֿ�
Save:node\ToolsMsg\Macro_git.h \[1.4\] git status ----------�鿴git״̬
Save:node\ToolsMsg\Macro_git.h \[1.5\] git add -------------���git�ļ����ݴ�������Ҫ�Ͱ汾�����֣� 
Save:node\ToolsMsg\Macro_git.h \[1.6\] git rm --------------gitɾ���ļ����У�
Save:node\ToolsMsg\Macro_git.h \[1.7\] git mv --------------git�ļ�������
Save:node\ToolsMsg\Macro_git.h \[1.8\] git commit ----------git�ύ�ļ�
Save:node\ToolsMsg\Macro_git.h \[1.9\] git pull ------------��ȡ
Save:node\ToolsMsg\Macro_git.h \[1.10\] git push -----------�ϴ�
Save:node\ToolsMsg\Macro_git.h \[1.11\] pull request
Save:node\ToolsMsg\Macro_git.h \[1.12\] git help
Save:node\ToolsMsg\Macro_git.h \[1.13\] git clone
Save:node\ToolsMsg\Macro_git.h \[1.14\] 
// 2. git ��־
Save:node\ToolsMsg\Macro_git.h \[2.1\] git log/reflog ------git������־
Save:node\ToolsMsg\Macro_git.h \[2.2\] git reset -----------�汾����
Save:node\ToolsMsg\Macro_git.h \[2.3\] git checkout --------git��ԭ----��ǰ�޸�
Save:node\ToolsMsg\Macro_git.h \[2.4\] git reset -----------git��ԭ----�ݴ�(add)
Save:node\ToolsMsg\Macro_git.h \[2.5\] git fetch -----------git��ԭ----�汾��(commit)
Save:node\ToolsMsg\Macro_git.h \[2.6\] git diff ------------�Ա�
Save:node\ToolsMsg\Macro_git.h \[2.7\] .gitconfig ----------���öԱ�/�ϲ�����
Save:node\ToolsMsg\Macro_git.h \[2.8\] git difftool --------�Աȹ���
Save:node\ToolsMsg\Macro_git.h \[2.9\] git mergetool -------�ϲ�����
Save:node\ToolsMsg\Macro_git.h \[2.10\] patch --------------- 
Save:node\ToolsMsg\Macro_git.h \[2.11\] git stash
Save:node\ToolsMsg\Macro_git.h \[2.12\] 
// 3. git remote
Save:node\ToolsMsg\Macro_git.h \[3.1\] git remote -v -------Զ�ֿ̲�
Save:node\ToolsMsg\Macro_git.h \[3.2\] git remote add ------���Զ�ֿ̲�
Save:node\ToolsMsg\Macro_git.h \[3.3\] git checkout -b -----Զ�ֿ̲��֧
Save:node\ToolsMsg\Macro_git.h \[3.4\] git fetch/git pull --����
Save:node\ToolsMsg\Macro_git.h \[3.5\] git branch ----------��֧
Save:node\ToolsMsg\Macro_git.h \[3.6\] git tag -------------
Save:node\ToolsMsg\Macro_git.h \[3.7\] 
// 4. other
Save:node\ToolsMsg\Macro_git.h \[4.1\] window����
Save:node\ToolsMsg\Macro_git.h \[4.2\] cmd -----------------������
Save:node\ToolsMsg\Macro_git.h \[4.3\] .gitignore ----------���������ļ�
Save:node\ToolsMsg\Macro_git.h \[4.4\] git clean -----------
Save:node\ToolsMsg\Macro_git.h \[4.5\] sourceTree ----------����
Save:node\ToolsMsg\Macro_git.h \[4.6\] git config ----------������ɫ
Save:node\ToolsMsg\Macro_git.h \[4.7\] git config ----------���ñ���
Save:node\ToolsMsg\Macro_git.h \[4.8\] git config ----------�����û�����-----�����ļ�
Save:node\ToolsMsg\Macro_git.h \[4.9\] git config ----------��ʾ�����û���������
Save:node\ToolsMsg\Macro_git.h \[4.10\] hosts ---------------���������
Save:node\ToolsMsg\Macro_git.h \[4.11\] 
Save:node\ToolsMsg\Macro_git.h \[4.12\] ��Git������־��¼
Save:node\ToolsMsg\Macro_git.h \[4.13\] 
Save:node\ToolsMsg\Macro_git.h \[4.14\] git-upload-pack
Save:node\ToolsMsg\Macro_git.h \[4.15\] 
Save:node\ToolsMsg\Macro_git.h \[4.16\] 
Save:node\ToolsMsg\Macro_git.h \[4.17\] 
Save:node\ToolsMsg\Macro_git.h \[4.18\] 
	




[1.1] git config----------�����˻�(��Ҫ��github�˻�����һ��)
git config --global user.name xxx
git config --global user.email xxx@foxmail.com

git config --global user.name xiaojia
git config --global user.email seefs@163.com

git config --global user.name xiaojia
git config --global user.email xiaojia_bm@163.com
	
//�鿴���ص�global��Ϣ
git config [--local|--global|--system] --list/-l��������������������
//ɾ��user.name��Ϣ�����user.name��Ӧ���ֵ������unset-all��ɾ��
git config [--local|--global|--system] --unset[-all] user.name

// win
C:\Users\Administrator\.gitconfig
G:\wa03u_git\.git\config

//
//�־û��洢���˺�����
.git/.git-credentials


[1.2] git config --list ---�鿴����
git config --list
//user.name=xiaoj
//user.email=jia.xiao@sz-speed.cn
//core.repositoryformatversion=0
//core.filemode=true
//core.bare=false
//core.logallrefupdates=true


// ƾ֤������ο�
https://github.com/Microsoft/Git-Credential-Manager-for-Windows
https://github.com/Microsoft/Git-Credential-Manager-for-Windows/releases/tag/1.20.0


[1.3] git init ------------����git���زֿ�
git init
//��ʱ�������ʾ : 
//inialized empty Git repository in d://com/liu/.git

//�Ѿ���ӹ� ��ʾ: 
//Reinitialized existing Git repository in /home/xiaoj/testaaa/.git/



[1.4] git status�鿴git״̬
git status
//# On branch master
//# Changes to be committed:
//#   (use "git reset HEAD <file>..." to unstage)
//#
//#       new file:   da.h
//#
//# Changes not staged for commit:
//#   (use "git add <file>..." to update what will be committed)
//#   (use "git checkout -- <file>..." to discard changes in working directory)
//#
//#       modified:   aaa.txt
//#
//# Untracked files:
//#   (use "git add <file>..." to include in what will be committed)
//#
//#       db.h



[1.5] git add���git�ļ����ݴ�������Ҫ�Ͱ汾�����֣� 
git add <name>
git add bbb.txt
git add aaa.txt



[1.6] git rm --------------gitɾ���ļ����У�
git rm test.txt 		 //ɾ���ļ�
git rm -r filebook	   //ɾ���ļ���
//git rm��ֱ��ɾ������������git rm�Ὣ���ļ��Ĳ�����¼ɾ������ֱ��ɾ��������ɾ���������ļ���û��ɾ���ʹ��ļ���صļ�¼��git rm����ڰ汾����������в�����־������ֱ��ɾ��û�С�
//�������������ֲ����ڰ汾����ɾ���ļ���
git rm test.txt   =>	git commit -m 'delete a file'
rm test.txt 	   =>	 git commit -am 'delete a file'
//ע�⣺����git rm����ɾ��һ���ļ������һ���ļ��Ѿ����ύ���汾�⣬��ô����Զ���õ�����ɾ������ҪС�ģ���ֻ�ָܻ��ļ������°汾����ᶪʧ���һ���ύ�����޸ĵ����ݡ�


[1.7] git mv --------------git�ļ�������
git mv filename newfilename


[1.8] git commit ----------git�ύ�ļ�
git commit -m "add a function in test.java"
//-m��ʾע�ͣ�Ϊ�ύʱ��˵��������Ҫ�У�



[1.9] git pull ------------��ȡ
//��ȡԶ�ֿ̲⣺
git pull origin master
// subtree
git pull -X subtree=./lib
// depth
git pull --depth=1
// shallow-since
git pull --shallow-since "2021-03-01"
git pull --shallow-since "2021-03-01 00:00:00"
git pull --shallow-since="Mon Oct 23 13:38:21 2017 +0800"
git pull --shallow-since="Oct 23 00:00 2020"

//
git pull -upload-pack lib
git pull --upload-pack lib
git pull-pack lib
//
git pull --upload-pack /path/to/git-upload-pack

//
git push <remotename> <commit SHA>:<branch>


// ������֧��������ͬ�İ汾�����в�ͬ���ύ��ʷ
// Git :fatal: refusing to merge unrelated histories���
git pull origin master --allow-unrelated-histories



[1.10] git push ------------�ϴ�
git push XXX branch_name������������������#�ϴ�ָ����branch��Զ��

//����Զ�ֿ̲⣺
git push origin master
//�ύ����test��֧��ΪԶ�̵�master��֧
git push origin test:master
//�ύ����test��֧��ΪԶ�̵�test��֧
git push origin test:test
//���� github �û�������:
//	seefs@163.com, xjs0f0s0


//origin��Զ�ֿ̲���	master����֧����  -f��force����Ϊǿ�ơ�ǿ��
git push -u origin master -f



[1.11] pull request
github-->create pull request-->send pull request


[1.12] git help


[1.13] git clone
// clone
git clone <repo>
git clone <repo> <directory>
// 
git clone --depth=1
git clone --depth=1 http://xiaojia:123456@192.168.2.148:8080/r/MOCOR_20B_W20.36.2_WATCH.git
// 
git fetch --unshallow
// shallow-since
git clone git://github.com/ims0/root.git --shallow-since "2017-10-22"
git clone git://github.com/ims0/root.git --shallow-since "2017-10-22 00:00:00"
git clone git://github.com/ims0/root.git --shallow-since="Mon Oct 23 13:38:21 2017 +0800"
git clone git://github.com/ims0/root.git --shallow-since="Oct 23 00:00 2017"
// git clone ��֧
git clone -b schoolcard git@139.155.19.38:8910-developer/MOCOR_20B_W21.12.7.git



[1.14] 


[2.1] git log -------------git������־
//1) ��ʾ��ǰ��֮ǰ�İ汾��
git log --decorate --graph --oneline --all
//* 3c38201 (HEAD, master) test 2
//* be74e6e test

//2) ���汾��ʷ��ʾΪһ�У���ʷ�汾��ȫ����ʾ
git log --pretty=oneline
//3c38201268daa8f79c60b92715fa4967cd51c55b test 2
//be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1 test

//3) ���汾��ʷ��ʾΪһ�У���ʷ�汾�Ų�����ʾ
git log --pretty=oneline --abbrev-commit
git log --graph      #�鿴��֧�ϲ�ͼ

git log
//commit 3c38201268daa8f79c60b92715fa4967cd51c55b
//Author: xiaoj <jia.xiao@sz-speed.cn>
//Date:   Fri Nov 23 02:52:18 2018 -0500
//
//    test 2
//
//commit be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1
//Author: xiaoj <jia.xiao@sz-speed.cn>
//Date:   Fri Nov 23 02:50:30 2018 -0500
//
//    test

//4) 
git reflog
//3c38201 HEAD@{0}: reset: moving to 3c38201
//be74e6e HEAD@{1}: reset: moving to HEAD^
//3c38201 HEAD@{2}: commit: test 2
//be74e6e HEAD@{3}: commit (initial): test

//5) 
git log dev ^master
git log master ^dev

//5) -p ѡ��չ����ʾÿ���ύ�����ݲ��죬�� -2 �����ʾ��������θ���
git log -p -2



[2.2] git reset -----------�汾����
//ִ�а汾�˻غ󣬱��ع����������ݻ��Զ��ͻ��˵��İ汾��汾�����ݱ���ͬ��
git reset --hard HEAD^    ���˵���һ���汾
git reset --hard HEAD^^   ���˵����ϸ��汾���Դ����ƣ�һ���ύ��Ϊһ���汾
git reset --hard HEAD~100
git reset --hard e9efa77  ���˵� e9efa77  �汾
//
git reset --hard HEAD


[2.3] git checkout --------git��ԭ----��ǰ�޸�
//
//------------>�޸�-------->add-------->commit----->push-------
//[�������޸�]<====[������]-----[�ݴ���]-----[�汾��]-----[������]
//
git checkout -- readme.txt
// ��ԭ�޸�, ɾ���ļ�
//   ���ܻ�ԭ�¼��ļ�
git checkout ./



[2.4] git reset -----------git��ԭ----�ݴ�(add)

// �ǽ����ݴ�����HEAD���ύ����һ��
git reset HEAD 

// �ǽ����������ݴ�����HEAD����һ��
git reset --hard HEAD 

//
//------------>�޸�-------->add-------->commit----->push-------
//[�������޸�]<====[������]<====[�ݴ���]-----[�汾��]-----[������]
//
git reset HEAD readme.txt
//��ע��git reset����ȿ��Ի��˰汾��Ҳ���԰��ݴ������޸Ļ��˵�����������������HEADʱ����ʾ���µİ汾��

// ���Ի�ԭ�¼��ļ�
git reset --hard origin/master


// ���� git restore
//   ���ܻ�ԭ�¼��ļ�
git restore ./


[2.5] git fetch ----------git��ԭ----�汾��(commit)
//
//------------>�޸�-------->add-------->commit----->push-------
//[�������޸�]<====[������]<====[�ݴ���]<====[�汾��]-----[������]
//
//   ���ܻ�ԭ�¼��ļ�
git fetch --all



[2.6] git diff ------------�Ա�
git diff aaa.txt
//diff --git a/aaa.txt b/aaa.txt
//index 13cadff..ca5a3a3 100644
//--- a/aaa.txt
//+++ b/aaa.txt
//@@ -1,4 +1,4 @@
//-
//+asdfasdf
//		sdfasdfasdfi:sdfasdfasdfasdf
//		sdfasdfasdfi:sdfasdfasdfasdf
// asdfasdf1111

git diff <��֧��> <��֧��> -- �ļ���

git diff test_branch_name���������������� #�鿴��ǰbranch��test_branch_name�д��������



[2.7] .gitconfig���öԱ�/�ϲ�����
//difftool,mergetool
git config --global diff.tool bc3
git config --global difftool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"
git config --global difftool.bc3.path "D:\Program Files (x86)\Beyond Compare 3\BCompare.exe"

git config --global merge.tool bc3
git config --global mergetool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"
git config --global mergetool.bc3.path "D:\Program Files (x86)\Beyond Compare 3\BCompare.exe"

//Ҳ����ֱ���޸�.gitconfig �ļ���ֱ����������:
C:\Users\Administrator\.gitconfig
//	[diff]
//		tool = bc4
//	[difftool "bc4"]
//		path = C:\\Program Files\\Beyond Compare 4\\BCompare.exe
//	[merge]
//		tool = bc4
//	[mergetool "bc4"]
//		path = C:\\Program Files\\Beyond Compare 4\\BCompare.exe

//���úú�ʹ�������� git difftool ������֮ǰ�� git diff �ˡ�
//git difftool ˵���ĵ���http://git-scm.com/docs/git-difftool.html



[2.8] git difftool --------�Աȹ���
git difftool
git difftool -y MacroSBD/sbd_base.em
git difftool -y node/Simple_CTRL_B.h

git difftool -d
git difftool -d 0c8427888be95166e9c4f948feeca44bfa6e6c72
	
git difftool -d dev master
git difftool -d master dev

//�Ա�Զ�ֿ̲�:
git difftool master origin/master -d -y



[2.9] git mergetool -------�ϲ�����
//��git commit ��git merge
git mergetool aaa.txt
// merge vim:
//	������ĸ�� c����ʱ����༭״̬�������Կ�ʼ�޸�ע����Ϣ��
//	����Esc (�˳��༭״̬)�� �����������δ�д��ĸZ��������˳�


//ȥ��git mergetool������*.orig�ļ�
//ʹ��git mergetool�ϲ���֧ʱ���ܻ������*.origΪ��չ���ı����ļ���ÿ�ζ�Ҫ�ֶ�ɾ����
//�о��ܷ�����ʵ���Ͽ����޸�Git���ã���ֹ���������ļ��� 
//�򿪿���̨�����նˣ�ִ���������
git config --global mergetool.keepBackup false
 
//����ֱ�ӽ���ϵͳ�û�Ŀ¼�£��޸�.gitconfig�ļ��������������ݣ�
//	[mergetool]
//		prompt = true
//		keepBackup = false


[2.10] patch ---------------
// ����Դ�� 
diff -Nur Asrc Adest > test1.patch
cd Bdest 
patch -p1 <../test1.patch
diff -Nur Bsrc Bdest > test2.patch
patch -R -p1
�����ύ��
git format-patch ǰ�ύ..���ύ
�Է���git am *.patch
û�ύ������git diff > *.patch����׼



[2.11] git stash
�ֳ��ı�����ָ�: git stash

git stash		 #��Ŀǰ�Ĺ����ֳ�����
git stash list	 #�鿴���б���Ĺ����ֳ�
	
	
#�����ֳ����ڣ�Git��stash���ݴ���ĳ���ط��ˣ�������Ҫ�ָ�һ�£��������취��
git stash apply stash@{0}

#�ָ������ǻָ���stash���ݲ���ɾ��������Ҫ��
git stash drop stash@{0}

#��һ�ַ�ʽ���ã��ָ���ͬʱ��stash����Ҳɾ�ˣ����ַ�ʽʡʱʡ��
git stash pop
//ע��㣺
//��1������ڷ�֧���½��ļ�������δִ��add������stash�޷������ļ����뱣����ֳ�����Ϊstashֻ�Ա��޸ĵı�׷�ٵ��ļ����ݴ�ı����Ч���������ļ�������ִ��add��
//��2������޸ķ�֧�µ��ѱ�׷�ٵ��ļ���������û�ж��޸ĵ��ļ�����add���������ִ��stash�������޸Ļᱻ���뱣����ֳ������ļ���ָ����޸�ǰ��״̬��
//�ָ��ֳ����ļ��ֳ��ֱ��޸ĺ��״̬���ر���ǣ�����޸ĵ��ļ���stashǰ�Ѿ���add�ˣ��ָ��ֳ����ݴ��������ݾͻ���գ��൱������ļ���δ��addһ����

//git add .
//git stash
//git checkout bugFixBranch
//git pull --rebase origin master
//fix the bug
//git add .
//git commit -m ''
//git push
//git checkout test
//git stash pop
//continue new feature's development
	


[2.12] 




[3.1] git remote -v --------------Զ�ֿ̲�
// �鿴Զ�ֿ̲⼰����Э��
git remote
git remote -v  �鿴���ƺ���ϸ��ַ

git status������������������������������������������������������������������#�鿴��ǰ������
git branch�������������������������������������������������������� #�鿴�������е�
git branch -a������������������������������������������������������#�鿴Զ�̵����з�֧
git branch -d branch_name���������������������������������������������� #ɾ������branch_name��һ��֧
git push origin --delete branch_name�������������������������������� �� #ɾ����Ϊbranch_name��Զ�̷�֧
git pull��������������������������������������������������������������������#��Զ���ϵİ汾�뱾�ذ汾���кϲ����൱��get fetch + git merge


// https
[remote "origin"]
url = https://git.coding.net/coder/DMP.git
// git
url = git@git.coding.net:coder/DMP.git
// ssh
ssh -T xiaojia:123456@192.168.2.148:8080
ssh -T git@192.168.2.148:8080
ssh -T xiaojia:123456@192.168.2.148




[3.2] git remote add ------���Զ�ֿ̲�
// ���Զ�ֿ̲�
git remote add github git@github.com:xxx/LearnGit.git
git remote add gitee git@gitee.com:xxx/LearnGit.git
// ɾ�� (ͬ����Github, ֻ�ܹ���һ��)
git remote remove <Զ��������>
git remote rm origin
// �鿴Զ�̿���Ϣ
git remote -v
// 
gitee   git@gitee.com:xxx/LearnGit.git (push)
github  git@github.com:xxx/LearnGit.git (fetch)
github  git@github.com:xxx/LearnGit.git (push)
// ����
git push <Զ��������> <���ط�֧��>:<Զ�̷�֧��>
git push origin <���ط�֧��>
git push github master
git push gitee master
// ����, ָ��һ��Ĭ������
git push -u <Զ��������> <���ط�֧��>
git push -u origin master
// set-url
git remote set-url --push github https://github.com/seefs/Source_Insight.git
git remote -v



[3.3] git checkout -b -----Զ�ֿ̲��֧
// ��Զ��clone�����صĿ�ֻ�ܿ���master��֧�����Ҫ��Զ�̵ķ�֧ͬ�������أ�
git checkout -b <���ط�֧��> <Զ��������>/<Զ�̷�֧��>



[3.4] git fetch/git pull --����
// git pull
git pull <Զ��������> <Զ�̷�֧��>:<���ط�֧��>
git pull origin next:master
git pull origin next
git pull origin
git pull
// rebaseģʽ������ʹ�èCrebaseѡ�
git pull --rebase <Զ��������> <Զ�̷�֧��>:<���ط�֧��>

// git fetch
// �൱���Ǵ�Զ�̻�ȡ���°汾�����أ������Զ��ϲ���
git fetch origin mastergit log -p master..origin/mastergit merge origin/master
git fetch origin master:tmpgit diff tmp git merge tmp



[3.5] git branch ----------��֧
//1) �鿴��֧
git branch
//* master

//2) ������֧
git branch <name>

//3) �������л�����֧
git checkout -b <name>
//��ע��git checkout�������-b������ʾ�������л����൱��������������
git branch <name>
git checkout <name>

//4) �л���֧
git checkout <name>
git checkout master
git checkout main
//�л���֧����git bash����ʾΪ��ɫ

//5) ɾ����֧
git branch -d <name>
//�����֧û�кϲ���ɾ����֧�ͱ�ʾ�ᶪʧ�޸ģ���ʱgit�޷�ʹ��-dɾ������ʹ��-Dǿ��ɾ��
git branch -D <name>

//6) �ϲ���֧
git�ϲ�Ĭ��ʹ��Fast forwardģʽ��һ��ɾ����֧���ᶪ����֧��Ϣ��Ҳ�Ϳ����������������ϲ�
git merge <name>     #���ڵ�ǰ��֧���ϲ�����һ����֧��ǰ����Ҫ��֤��֧֮�䲻��ͻ
���ǿ�ƽ���Fast forwardģʽ������ͨģʽ��Git�ͻ���mergeʱ����һ���µ�commit
git merge --no-ff -m "there is a comment" <name>
��Ϊ���κϲ�Ҫ����һ���µ�commit�����Լ���-m��������commit����д��ȥ��
�����У��϶���Ҫ������û�з�֧��ɾ������Ҫ�ӷ�֧��ʷ�ϾͲ鿴���е���ʷ��֧��Ϣ������Ҫʹ����ͨģʽ�ϲ���

//7) �������֧
git branch -m oldName newName

//8) ����Զ�̷�֧
git branch -a
//* master
//  remotes/origin/HEAD -> origin/master
//  remotes/origin/debug
//  remotes/origin/dev
//  remotes/origin/master
git push origin siMini:debug

//9) �л�Զ�̷�֧
git push --set-upstream origin dev
git checkout -b dev origin/dev
//	����Ҫ��ִ��
git fetch
git checkout dev

//10) ɾ��Զ�̷�֧
git push origin --delete debug



[3.6] git tag -------------
// ����tag
��1��git tag <tagname>   #Ĭ����HEAD�汾
��2����ָ����commit�汾����tag
��Ҫ���ҵ���ʷcommit��id
git log --pretty=oneline --abbrev-commit
Ȼ���ָ����commit����tag��
git tag <tagname> <commitid>
��3����������˵����tag����-aָ����ǩ����-mָ��˵������
git tag -a <tagname> -m "there is a tag description" [<commitid>]
��4��ͨ��-s��˽Կǩ��һ����ǩ��ǩ������PGPǩ��
git tag -s <tagname> -m "there is a tag description" [<commitid>]
�������Ȱ�װgpg��GnuPG�������û���ҵ�gpg������û��gpg��Կ�ԣ��ͻᱨ���ο�GnuPG�����ĵ�����Key��


// �鿴tag
git tag    #��ʾ��tag���ǰ�ʱ��˳�����У����ǰ���ĸ˳������
�����鿴tag��commit�Ķ�Ӧ��ϵ��������
git log --pretty=oneline --abbrev-commit
�����鿴tag�ĵ���ϸ�����������
git show <tagname>


// ɾ��tag
�����ı�ǩ��ֻ�洢�ڱ��أ������Զ����͵�Զ�̡����ԣ����ı�ǩ�����ڱ��ذ�ȫɾ����
git tag -d <tagname>
�����ǩ�Ѿ����͵�Զ�̣�Ҫɾ��Զ�̱�ǩ���鷳һ�㣺
��1���ȱ���ɾ����git tag -d <tagname>
��2����Զ��ɾ����git push origin :refs/tags/<tagname>


// ���ͱ�ǩ��Զ��
git push origin <tagname>
���ߣ�һ��������ȫ����δ���͵�Զ�̵ı��ر�ǩ��
git push origin --tags
	


[4.1] window����
// window����
https://git-scm.com/downloads
// tortoisegit
https://tortoisegit.org/download/



[4.2] cmd -----------------������
// exe
C:\Program^Files\Git\
C:\Program^Files\Git\git-bash.exe

// ��ӻ���������(������Զ����)
C:\Program Files\Git\cmd

cmd_s:git

//D:\project\NLP\Personality



[4.3] .gitignore ----------���������ļ�
// ���������ļ�
.gitignore
//	���������ļ�����ֱ�����������https://github.com/github/gitignore
//	�����ļ���ԭ���ǣ�
//	�Զ����ɵ��ļ���
//	�м��ļ���
//	����
//	����һ����ɵ�.gitignore�ļ����������£�
//------------------------------
//# Windows:Thumbs.dbehthumbs.dbDesktop.ini
//
//# Python:*.py[ cod]*.so*.egg*.egg-infodistbuild
//-------------------------------

//2����.gitignoreҲ�ύ��Git
git add .gitignore
git commit -m "there is a description"
//������ˣ���Ȼ����.gitignore�ı�׼��git status�����ǲ�����ʾworking tree clean��
//ʹ��Windows��ע�⣺�������Դ���������½�һ��.gitignore�ļ���ϵͳ��ǳ����ǵ���ʾ���������ļ�����
//�������ı��༭������桱���ߡ����Ϊ���Ϳ��԰��ļ�����Ϊ.gitignore�ˡ�

//3�����ȷʵ��Ҫ����Ѿ���.gitignore���Ե��ļ���������-fǿ����ӵ�Git
git add -f test.class

//4������.gitignoreд�������⣬��Ҫ�����ĸ�����д���ˣ�������git check-ignore�����飺
git check-ignore -v App.class.gitignore:3:*.class	 App.class
��ʾ.gitignore�ĵ�3�й��������App.class����ļ����������ǾͿ���֪��Ӧ���޶��ĸ�����

//5��SI��Ҫ�����⼸���ļ���(ע��: ���Ժ��ɾ��Զ�̷������ļ�)
touch .gitignore
Save:.gitignore
//	MacroSBD/sbd_base.em
//	node/Simple_CTRL_B.h

//6��������Ч, ������ػ���
git rm -r --cached .
git add .
git commit -m 'update .gitignore'



[4.4] git clean -----------
reset--hard
git reset --hard
git clean -f
git status 



[4.5] sourceTree ----------����
sourceTree Git �� Hg �ͻ��˹�����
sourceTree:
Git �� Hg �ͻ��˹�����



[4.6] ����Git UI��ɫ
��Git��ʾ��ɫ�����������������������Ŀ
git config --global color.ui true
	
	

[4.7] git config --global  Ϊ�������ñ���
// ������Լ�д����git st��ʾgit status���ٱ�����co��ʾcheckout��ci��ʾcommit��br��ʾbranch��
git config --global alias.co checkoutgit config --global alias.ci commitgit config --global alias.br branch
�Ժ��ύ�Ϳ��Լ�д�ɣ�
git ci -m "there is a description"
--global������ȫ�ֲ�����Ҳ������Щ��������̨���Ե�����Git�ֿ��¶����á�

// ����git reset HEAD <filename>���Գ����ݴ������޸ģ�unstage�������·Żع���������Ȼ��һ��unstage�������Ϳ�������һ��unstage������
git config --global alias.unstage 'reset HEAD'
�Ϳ��Լ����
git unstage test.py   =   git reset HEAD test.py

// ����һ��git last��������ʾ���һ���ύ��Ϣ��
git config --global alias.last 'log -1'
��������git last������ʾ���һ�ε��ύ��
git lastcommit 015851cbe2902bf01fbba198af5d6705dc0e03ac (HEAD -> dev)
Author: xxx <xxx@foxmail.com>
Date:	Mon Apr 23 13:52:44 2018 +0800
	add git ignore list
// ���а�lg���ó��ˣ�
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
������git lg��Ч����
	
	

[4.8] git config ----------�����û�����-----�����ļ�
.git/config
����Git��ʱ�򣬼���--global����Ե�ǰ�û������õģ�������ӣ���ֻ��Ե�ǰ�Ĳֿ������á�
ÿ���ֿ��Git�����ļ�������.git/config�ļ��У�
cat .git/config
-----------------------------------------------------------------------------
//[ core ]
//        repositoryformatversion = 0
//        filemode = false
//        bare = false
//        logallrefupdates = true
//        symlinks = false
//        ignorecase = true
//[ branch "master"]
//[ branch "dev"]
//[ remote "github"]
//        url = git@github.com:xxx/LearnGit.git
//        fetch = +refs/heads/*:refs/remotes/github/*
//[ remote "gitee"]
//        url = git@gitee.com:xxx/LearnGit.git
//        fetch = +refs/heads/*:refs/remotes/gitee/*
-----------------------------------------------------------------------------

����ǰ�û���Git�����ļ������û���Ŀ¼�µ�һ�������ļ�.gitconfig�У�
-----------------------------------------------------------------------------
//[ user ]
//	name = xxx
//	email = xxx@foxmail.com
//[ gpg  ]
//	program = C:\\Program Files (x86)\\gnupg\\bin\\gpg.exe
//[ color ]
//	ui = true
//[ alias ]
//	co = checkout
//	ci = commit
//	br = branch
//	last = log -1
//	lg = log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit
-----------------------------------------------------------------------------
��������[ alias ]���棬Ҫɾ��������ֱ�ӰѶ�Ӧ����ɾ�����ɡ����ñ���Ҳ����ֱ���޸�����ļ�������Ĵ��ˣ�����ɾ���ļ�����ͨ���������á�


����Э���Ĺ���ģʽͨ�����£�
��1�����Ƚ�Զ�ֿ̲��¡Ϊ���زֿ�
git clone git@github.com:xxx/LearnGit.git
��2���ڱ��ش�����Զ�̷�֧��Ӧ�ķ�֧
git checkout -b <���ط�֧��> origin/<Զ�̷�֧��>
���غ�Զ�̷�֧���������һ�£�
��3���ڱ��ط�֧�������󣬿�����ͼ��git push <Զ��������> <���ط�֧��>�����Լ����޸ģ�
��2���������ʧ�ܣ������Զ�̷�֧�ȱ��ظ��£���Ҫ����git pull��ͼ�ϲ���
��3�����pullʧ�ܲ���ʾ��no tracking information������˵�����ط�֧��Զ�̷�֧�����ӹ�ϵû�д�����������git branch --set-upstream-to=<Զ��������>/<Զ�̷�֧��>? <���ط�֧��>�������ӣ�
��4������ϲ��г�ͻ��������ͻ�����ڱ����ύ��add => commit����
��5��û�г�ͻ���߽������ͻ������git push <Զ��������> <���ط�֧��>���;��ܳɹ���
--------------------- 



[4.9] git config ----------��ʾ�����û���������
// ���ÿ�ν��붼��Ҫ�����û���������
����취��
git bash���������ĿĿ¼�����룺
git config --global credential.helper store



[4.10] hosts ---------------���������
//1)�������ƿ�¡GitHub��Ŀ
https://gitee.com/

//2)���ֻ��ȵ�

//3)hosts
C:\Windows\System32\drivers\etc\hosts
//  �������������
//  �ο�ip-1:
140.82.113.4 github.com
199.232.1.194 github.global.ssl.fastly.net
140.82.113.10 codeload.github.com
//  �ο�ip-2:
140.82.113.3 github.com
151.101.25.194 github.global.ssl.fastly.net
140.82.112.10 codeload.github.com
//  �о��ؼ��ǵ�����

// ˢ�� DNS ����
cmd_s:ipconfig /flushdns
// 
// ������ping
https://www.ipaddress.com/
https://www.ip-tracker.org/locator/ip-lookup.php
https://community.spiceworks.com/tools/ip-lookup/

// ���ٴ���
//devsidecar


[4.11] 


[4.12] ��Git������־��¼
// ��ִ��Git����֮ǰ��������������ִ�����²�����
set GIT_TRACE_PACKET=1
set GIT_TRACE=1
set GIT_CURL_VERBOSE=1


[4.13] 


[4.14] git-upload-pack
// command not found
����ļ���git��git-upload-pack��git-upload-archive��git-receive-pack������git��binĿ¼��



[4.15] 



[4.16] 




[4.17] 



[4.18] 



