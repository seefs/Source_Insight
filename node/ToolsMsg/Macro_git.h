
其他问题：
reset 后不能提交
diff HEAD


/***********************************************************************/


//目录[Num][Ca]:
// 1. git 常用
Save:node\ToolsMsg\Macro_git.h \[1.1\] git config ----------设置账户(需要和github账户设置一致)
Save:node\ToolsMsg\Macro_git.h \[1.2\] git config --list ---查看设置
Save:node\ToolsMsg\Macro_git.h \[1.3\] git init ------------创建git本地仓库
Save:node\ToolsMsg\Macro_git.h \[1.4\] git status ----------查看git状态
Save:node\ToolsMsg\Macro_git.h \[1.5\] git add -------------添加git文件到暂存区（需要和版本库区分） 
Save:node\ToolsMsg\Macro_git.h \[1.6\] git rm --------------git删除文件（夹）
Save:node\ToolsMsg\Macro_git.h \[1.7\] git commit ----------git提交文件
Save:node\ToolsMsg\Macro_git.h \[1.8\] git pull ------------拉取
Save:node\ToolsMsg\Macro_git.h \[1.9\] git push ------------上传
Save:node\ToolsMsg\Macro_git.h \[1.10\] git help
// 2. git 日志
Save:node\ToolsMsg\Macro_git.h \[2.1\] git log -------------git操作日志
Save:node\ToolsMsg\Macro_git.h \[2.2\] git reset -----------版本回退
Save:node\ToolsMsg\Macro_git.h \[2.3\] git checkout --------git还原操作
Save:node\ToolsMsg\Macro_git.h \[2.4\] git reset -----------git暂存区撤销到工作区操作
Save:node\ToolsMsg\Macro_git.h \[2.5\] git fetch -----------git版本区撤销到工作区操作
Save:node\ToolsMsg\Macro_git.h \[2.6\] git diff ------------对比
Save:node\ToolsMsg\Macro_git.h \[2.7\] .gitconfig ----------设置对比/合并工具
Save:node\ToolsMsg\Macro_git.h \[2.8\] git difftool --------对比工具
Save:node\ToolsMsg\Macro_git.h \[2.9\] git mergetool -------合并工具
Save:node\ToolsMsg\Macro_git.h \[2.10\] patch --------------- 
Save:node\ToolsMsg\Macro_git.h \[2.11\] git stash
Save:node\ToolsMsg\Macro_git.h \[2.12\] 
// 3. git remote
Save:node\ToolsMsg\Macro_git.h \[3.1\] git remote -v -------远程仓库
Save:node\ToolsMsg\Macro_git.h \[3.2\] git remote add ------多个远程仓库
Save:node\ToolsMsg\Macro_git.h \[3.3\] git checkout -b -----远程仓库分支
Save:node\ToolsMsg\Macro_git.h \[3.4\] git fetch/git pull --更新
Save:node\ToolsMsg\Macro_git.h \[3.5\] git branch ----------分支
Save:node\ToolsMsg\Macro_git.h \[3.6\] git tag -------------
Save:node\ToolsMsg\Macro_git.h \[3.7\] 
// 4. other
Save:node\ToolsMsg\Macro_git.h \[4.1\] git mv --------------文件重命名
Save:node\ToolsMsg\Macro_git.h \[4.2\] .gitignore ----------忽略特殊文件
Save:node\ToolsMsg\Macro_git.h \[4.3\] git clean -----------
Save:node\ToolsMsg\Macro_git.h \[4.4\] sourceTree ----------工具
Save:node\ToolsMsg\Macro_git.h \[4.5\] window下载
Save:node\ToolsMsg\Macro_git.h \[4.6\] 设置Git UI颜色
Save:node\ToolsMsg\Macro_git.h \[4.7\] git config --global  为命令配置别名
Save:node\ToolsMsg\Macro_git.h \[4.8\] .git/config ---------修改配置文件
Save:node\ToolsMsg\Macro_git.h \[4.9\] 解决每次进入都需要输入用户名和密码




[1.1] git config----------设置账户(需要和github账户设置一致)
git config --global user.name xxx
git config --global user.email xxx@foxmail.com

git config --global user.name xiaoj
git config --global user.email jia.xiao@sz-speed.cn
	
//查看本地的global信息
git config [--local|--global|--system] --list/-l　　　　　　　　　　
//删除user.name信息。如果user.name对应多个值，可用unset-all来删除
git config [--local|--global|--system] --unset[-all] user.name



[1.2] git config --list ---查看设置
git config --list
//user.name=xiaoj
//user.email=jia.xiao@sz-speed.cn
//core.repositoryformatversion=0
//core.filemode=true
//core.bare=false
//core.logallrefupdates=true



[1.3] git init ------------创建git本地仓库
git init
//此时会出现提示 : 
//inialized empty Git repository in d://com/liu/.git

//已经添加过 提示: 
//Reinitialized existing Git repository in /home/xiaoj/testaaa/.git/



[1.4] git status查看git状态
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



[1.5] git add添加git文件到暂存区（需要和版本库区分） 
git add <name>
git add bbb.txt
git add aaa.txt



[1.6] git rm --------------git删除文件（夹）
git rm test.txt 		 //删除文件
git rm -r filebook	   //删除文件夹
//git rm和直接删除的区别在于git rm会将此文件的操作记录删除，而直接删除仅仅是删除了物理文件，没有删除和此文件相关的记录。git rm后会在版本库产生区别（有操作日志），而直接删除没有。
//可以用下面两种操作在版本库中删除文件：
git rm test.txt   =>	git commit -m 'delete a file'
rm test.txt 	   =>	 git commit -am 'delete a file'
//注意：命令git rm用于删除一个文件。如果一个文件已经被提交到版本库，那么你永远不用担心误删，但是要小心，你只能恢复文件到最新版本，你会丢失最近一次提交后你修改的内容。



[1.7] git commit ----------git提交文件
git commit -m "add a function in test.java"
//-m表示注释，为提交时的说明，必须要有！



[1.8] git pull ------------拉取
//拉取远程仓库：
git pull origin master



[1.9] git push ------------上传
git push XXX branch_name　　　　　　　　　#上传指定的branch到远端

//推送远程仓库：
git push origin master
//提交本地test分支作为远程的master分支
git push origin test:master
//提交本地test分支作为远程的test分支
git push origin test:test
//输入 github 用户名密码:
//	seefs@163.com, xjs0f0s0


//origin：远程仓库名	master：分支名称  -f：force，意为强制、强行
git push -u origin master -f



[1.10] git help


[1.11] 



[2.1] git log -------------git操作日志
//1) 显示当前及之前的版本号
git log --decorate --graph --oneline --all
//* 3c38201 (HEAD, master) test 2
//* be74e6e test

//2) 将版本历史显示为一行，历史版本号全部显示
git log --pretty=oneline
//3c38201268daa8f79c60b92715fa4967cd51c55b test 2
//be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1 test

//3) 将版本历史显示为一行，历史版本号部分显示
git log --pretty=oneline --abbrev-commit
git log --graph      #查看分支合并图

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

//5) -p 选项展开显示每次提交的内容差异，用 -2 则仅显示最近的两次更新
git log -p -2



[2.2] git reset -----------版本回退
//执行版本退回后，本地工作区的内容会自动和回退到的版本库版本的内容保持同步
git reset --hard HEAD^    回退到上一个版本
git reset --hard HEAD^^   回退到上上个版本，以此类推，一次提交即为一个版本
git reset --hard HEAD~100
git reset --hard e9efa77  回退到 e9efa77  版本



[2.3] git checkout --------git还原操作
//丢弃工作区的操作，但不会丢失暂存区的操作(add操作能将更改添加到暂存区)，
//实际上就是用版本库里的版本替换工作区的版本，无论工作区是修改还是删除，都可以“一键还原”
git checkout -- readme.txt



[2.4] git reset -----------git暂存区撤销到工作区操作
//工作区修改了文件，而且执行了add，但还没执行commit，暂存区还是可以撤销的
git reset HEAD readme.txt
//备注：git reset命令既可以回退版本，也可以把暂存区的修改回退到工作区。当我们用HEAD时，表示最新的版本。



[2.5] git fetch ----------git版本区撤销到工作区操作
git fetch --all
git reset --hard origin/master



[2.6] git diff ------------对比
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

git diff <分支名> <分支名> -- 文件名

git diff test_branch_name　　　　　　　　 #查看当前branch与test_branch_name中代码的区别



[2.7] .gitconfig设置对比/合并工具
//difftool,mergetool
git config --global diff.tool bc3
git config --global difftool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

git config --global merge.tool bc3
git config --global mergetool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

//也可以直接修改.gitconfig 文件，直接增加如下:
C:\Users\Administrator\.gitconfig
//	[diff]
//		tool = bc3
//	[difftool "bc3"]
//		path = d:/program files/beyond compare 3/bcomp.exe
//	[merge]
//		tool = bc3
//	[mergetool "bc3"]
//		path = d:/program files/beyond compare 3/bcomp.exe

//设置好后，使用命令是 git difftool 而不是之前的 git diff 了。
//git difftool 说明文档：http://git-scm.com/docs/git-difftool.html



[2.8] git difftool --------对比工具
git difftool
git difftool -y MacroSBD/sbd_base.em
git difftool -y node/Simple_CTRL_B.h

git difftool -d
git difftool -d 0c8427888be95166e9c4f948feeca44bfa6e6c72
	
git difftool -d dev master
git difftool -d master dev

//对比远程仓库:
git difftool master origin/master -d -y



[2.9] git mergetool -------合并工具
//先git commit 再git merge
git mergetool aaa.txt
// merge vim:
//	按下字母键 c（此时进入编辑状态），可以开始修改注释信息了
//	按下Esc (退出编辑状态)； 接着连按两次大写字母Z，保存好退出


//去除git mergetool不产生*.orig文件
//使用git mergetool合并分支时，总会产生以*.orig为扩展名的备份文件，每次都要手动删除，
//感觉很繁琐，实际上可以修改Git配置，禁止产生备份文件。 
//打开控制台（或终端）执行如下命令：
git config --global mergetool.keepBackup false
 
//或者直接进入系统用户目录下，修改.gitconfig文件，增加如下内容：
//	[mergetool]
//		prompt = true
//		keepBackup = false


[2.10] patch ---------------
// 编译源码 
diff -Nur Asrc Adest > test1.patch
cd Bdest 
patch -p1 <../test1.patch
diff -Nur Bsrc Bdest > test2.patch
patch -R -p1
几个提交间
git format-patch 前提交..后提交
对方用git am *.patch
没提交可以用git diff > *.patch不标准



[2.11] git stash
现场的保存与恢复: git stash

git stash		 #将目前的工作现场保存
git stash list	 #查看所有保存的工作现场
	
	
#工作现场还在，Git把stash内容存在某个地方了，但是需要恢复一下，有两个办法：
git stash apply stash@{0}

#恢复，但是恢复后，stash内容并不删除，你需要用
git stash drop stash@{0}

#另一种方式是用，恢复的同时把stash内容也删了，这种方式省时省力
git stash pop
//注意点：
//（1）如果在分支下新建文件，而尚未执行add操作，stash无法将新文件纳入保存的现场，因为stash只对被修改的被追踪的文件和暂存的变更有效，对于新文件必须先执行add。
//（2）如果修改分支下的已被追踪的文件，不管有没有对修改的文件进行add操作，如果执行stash，所有修改会被纳入保存的现场，而文件会恢复成修改前的状态。
//恢复现场后，文件又呈现被修改后的状态。特别的是，如果修改的文件在stash前已经被add了，恢复现场后，暂存区的内容就会清空，相当于这个文件从未被add一样。

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




[3.1] git remote -v --------------远程仓库
// 查看远程仓库及传输协议
git remote
git remote -v  查看名称和详细地址

git status　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　#查看当前工作的
git branch　　　　　　　　　　　　　　　　　　　　　　　　　　　　 #查看本地所有的
git branch -a　　　　　　　　　　　　　　　　　　　　　　　　　　　#查看远程的所有分支
git branch -d branch_name　　　　　　　　　　　　　　　　　　　　　　　 #删除本地branch_name这一分支
git push origin --delete branch_name　　　　　　　　　　　　　　　　 　 #删除名为branch_name的远程分支
git pull　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　#将远程上的版本与本地版本进行合并，相当于get fetch + git merge
	


[3.2] git remote add ------多个远程仓库
// 添加远程仓库
git remote add github git@github.com:xxx/LearnGit.git
git remote add gitee git@gitee.com:xxx/LearnGit.git
// 删除 (同样是Github, 只能关联一个)
git remote remove <远程主机名>
git remote rm origin
// 查看远程库信息
git remote -v
// 
gitee   git@gitee.com:xxx/LearnGit.git (push)
github  git@github.com:xxx/LearnGit.git (fetch)
github  git@github.com:xxx/LearnGit.git (push)
// 推送
git push <远程主机名> <本地分支名>:<远程分支名>
git push origin <本地分支名>
git push github master
git push gitee master
// 推送, 指定一个默认主机
git push -u <远程主机名> <本地分支名>
git push -u origin master
// set-url
git remote set-url --push github https://github.com/seefs/Source_Insight.git
git remote -v



[3.3] git checkout -b -----远程仓库分支
// 从远程clone到本地的库只能看到master分支，如果要将远程的分支同步到本地：
git checkout -b <本地分支名> <远程主机名>/<远程分支名>



[3.4] git fetch/git pull --更新
// git pull
git pull <远程主机名> <远程分支名>:<本地分支名>
git pull origin next:master
git pull origin next
git pull origin
git pull
// rebase模式，可以使用–rebase选项。
git pull --rebase <远程主机名> <远程分支名>:<本地分支名>

// git fetch
// 相当于是从远程获取最新版本到本地，不会自动合并。
git fetch origin mastergit log -p master..origin/mastergit merge origin/master
git fetch origin master:tmpgit diff tmp git merge tmp



[3.5] git branch ----------分支
//1) 查看分支
git branch
//* master

//2) 创建分支
git branch <name>

//3) 创建并切换到分支
git checkout -b <name>
//备注：git checkout命令加上-b参数表示创建并切换，相当于以下两条命令
git branch <name>
git checkout <name>

//4) 切换分支
git checkout <name>
//切换分支后，在git bash中显示为绿色

//5) 删除分支
git branch -d <name>
//如果分支没有合并，删除分支就表示会丢失修改，此时git无法使用-d删除，可使用-D强行删除
git branch -D <name>

//6) 合并分支
git合并默认使用Fast forward模式，一旦删除分支，会丢掉分支信息，也就看不出来曾经做过合并
git merge <name>     #基于当前分支，合并另外一个分支，前提需要保证分支之间不冲突
如果强制禁用Fast forward模式，即普通模式，Git就会在merge时生成一个新的commit
git merge --no-ff -m "there is a comment" <name>
因为本次合并要创建一个新的commit，所以加上-m参数，把commit描述写进去。
工作中，肯定需要不管有没有分支被删除，都要从分支历史上就查看所有的历史分支信息，所以要使用普通模式合并。

//7) 重命令分支
git branch -m oldName newName

//8) 创建远程分支
git branch -a
//* master
//  remotes/origin/HEAD -> origin/master
//  remotes/origin/debug
//  remotes/origin/dev
//  remotes/origin/master
git push origin siMini:debug

//9) 切换远程分支
git push --set-upstream origin dev
git checkout -b dev origin/dev
//	可能要先执行
git fetch
git checkout dev

//10) 删除远程分支
git push origin --delete debug



[3.6] git tag -------------
// 创建tag
（1）git tag <tagname>   #默认在HEAD版本
（2）对指定的commit版本创建tag
需要先找到历史commit的id
git log --pretty=oneline --abbrev-commit
然后对指定的commit创建tag：
git tag <tagname> <commitid>
（3）创建带有说明的tag，用-a指定标签名，-m指定说明文字
git tag -a <tagname> -m "there is a tag description" [<commitid>]
（4）通过-s用私钥签名一个标签，签名采用PGP签名
git tag -s <tagname> -m "there is a tag description" [<commitid>]
必须首先安装gpg（GnuPG），如果没有找到gpg，或者没有gpg密钥对，就会报错，参考GnuPG帮助文档配置Key。


// 查看tag
git tag    #显示的tag不是按时间顺序排列，而是按字母顺序排列
如果想查看tag和commit的对应关系，可以用
git log --pretty=oneline --abbrev-commit
如果想查看tag的的详细情况，可以用
git show <tagname>


// 删除tag
创建的标签都只存储在本地，不会自动推送到远程。所以，打错的标签可以在本地安全删除：
git tag -d <tagname>
如果标签已经推送到远程，要删除远程标签就麻烦一点：
（1）先本地删除：git tag -d <tagname>
（2）再远程删除：git push origin :refs/tags/<tagname>


// 推送标签至远程
git push origin <tagname>
或者，一次性推送全部尚未推送到远程的本地标签：
git push origin --tags
	


[4.1] git mv --------------文件重命名
git mv filename newfilename



[4.2] .gitignore ----------忽略特殊文件
.gitignore忽略特殊文件
//1）在Git工作区的根目录下创建一个特殊的.gitignore文件，
//	然后把要忽略的文件名填进去，Git就会自动忽略这些文件。
//	不需要从头写.gitignore文件，GitHub已经为我们准备了各种配置文件，只需要组合一下就可以使用了。
//	所有配置文件可以直接在线浏览：https://github.com/github/gitignore
//	忽略文件的原则是：
//	忽略操作系统自动生成的文件，比如缩略图等；
//	忽略编译生成的中间文件、可执行文件等，也就是如果一个文件是通过另一个文件自动生成的，
//	那自动生成的文件就没必要放进版本库，比如Java编译产生的.class文件；
//	忽略你自己的带有敏感信息的配置文件，比如存放口令的配置文件。
//	比如一个完成的.gitignore文件，内容如下：
//------------------------------
//# Windows:Thumbs.dbehthumbs.dbDesktop.ini
//
//# Python:*.py[ cod]*.so*.egg*.egg-infodistbuild
//-------------------------------

//2）把.gitignore也提交到Git
git add .gitignore
git commit -m "there is a description"
//就完成了！当然检验.gitignore的标准是git status命令是不是显示working tree clean。
//使用Windows的注意：如果在资源管理器里新建一个.gitignore文件，系统会非常弱智地提示必须输入文件名，
//但是在文本编辑器里“保存”或者“另存为”就可以把文件保存为.gitignore了。

//3）如果确实想要添加已经被.gitignore忽略的文件，可以用-f强制添加到Git
git add -f test.class

//4）怀疑.gitignore写的有问题，需要查找哪个规则写错了，可以用git check-ignore命令检查：
git check-ignore -v App.class.gitignore:3:*.class	 App.class
表示.gitignore的第3行规则忽略了App.class这个文件，于是我们就可以知道应该修订哪个规则。

//5）Save:SI需要忽略这几个文件角(注意: 忽略后会删除远程服务器文件)
touch .gitignore
Save:SI\.gitignore
//	MacroSBD/sbd_base.em
//	node/Simple_CTRL_B.h

//6）忽略无效, 清除本地缓存
git rm -r --cached .
git add .
git commit -m 'update .gitignore'



[4.3] git clean -----------
reset--hard
git reset --hard
git clean -f
git status 



[4.4] sourceTree ----------工具
sourceTree Git 和 Hg 客户端管理工具
sourceTree:
Git 和 Hg 客户端管理工具



[4.5] window下载
// window下载
https://git-scm.com/downloads



[4.6] 设置Git UI颜色
让Git显示颜色，会让命令输出看起来更醒目
git config --global color.ui true
	
	

[4.7] git config --global  为命令配置别名
// 命令可以简写，用git st表示git status，再比如用co表示checkout、ci表示commit、br表示branch：
git config --global alias.co checkoutgit config --global alias.ci commitgit config --global alias.br branch
以后提交就可以简写成：
git ci -m "there is a description"
--global参数是全局参数，也就是这些命令在这台电脑的所有Git仓库下都有用。

// 命令git reset HEAD <filename>可以撤销暂存区的修改（unstage），重新放回工作区。既然是一个unstage操作，就可以配置一个unstage别名：
git config --global alias.unstage 'reset HEAD'
就可以简化命令：
git unstage test.py   =   git reset HEAD test.py

// 配置一个git last，让其显示最后一次提交信息：
git config --global alias.last 'log -1'
这样，用git last就能显示最近一次的提交：
git lastcommit 015851cbe2902bf01fbba198af5d6705dc0e03ac (HEAD -> dev)
Author: xxx <xxx@foxmail.com>
Date:	Mon Apr 23 13:52:44 2018 +0800
	add git ignore list
// 还有把lg配置成了：
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
来看看git lg的效果：
	
	

[4.8] .git/config ---------修改配置文件
配置Git的时候，加上--global是针对当前用户起作用的，如果不加，那只针对当前的仓库起作用。
每个仓库的Git配置文件都放在.git/config文件中：
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

而当前用户的Git配置文件放在用户主目录下的一个隐藏文件.gitconfig中：
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
别名就在[ alias ]后面，要删除别名，直接把对应的行删掉即可。配置别名也可以直接修改这个文件，如果改错了，可以删掉文件重新通过命令配置。


多人协作的工作模式通常如下：
（1）首先将远程仓库克隆为本地仓库
git clone git@github.com:xxx/LearnGit.git
（2）在本地创建和远程分支对应的分支
git checkout -b <本地分支名> origin/<远程分支名>
本地和远程分支的名称最好一致；
（3）在本地分支完成任务后，可以试图用git push <远程主机名> <本地分支名>推送自己的修改；
（2）如果推送失败，则表明远程分支比本地更新，需要先用git pull试图合并；
（3）如果pull失败并提示“no tracking information”，则说明本地分支和远程分支的链接关系没有创建，用命令git branch --set-upstream-to=<远程主机名>/<远程分支名>? <本地分支名>创建链接；
（4）如果合并有冲突，则解决冲突，并在本地提交（add => commit）；
（5）没有冲突或者解决掉冲突后，再用git push <远程主机名> <本地分支名>推送就能成功。
--------------------- 



[4.9] 解决每次进入都需要输入用户名和密码
解决办法：
git bash进入你的项目目录，输入：
git config --global credential.helper store








