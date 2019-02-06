/***********************************************************************/
/****************************** base  **********************************/
/***********************************************************************/
其他问题：
reset 后不能提交
diff HEAD

新代码:
git clone git@192.168.2.139:/home/git/9820.git




/***********************************************************************/
/**************************** git 常用 *********************************/
/***********************************************************************/
//[Num]
git help

[1.0] ----------------------------------

一、git客户端（本地仓库）的一些操作
[1.1] 设置账户(需要和github账户设置一致)
git config --global user.name xxx
git config --global user.email xxx@foxmail.com

git config --global user.name xiaoj
git config --global user.email jia.xiao@sz-speed.cn
	
//查看本地的global信息
git config [--local|--global|--system] --list/-l　　　　　　　　　　
//删除user.name信息。如果user.name对应多个值，可用unset-all来删除
git config [--local|--global|--system] --unset[-all] user.name


[1.2] 查看设置
git config --list
//user.name=xiaoj
//user.email=jia.xiao@sz-speed.cn
//core.repositoryformatversion=0
//core.filemode=true
//core.bare=false
//core.logallrefupdates=true


[1.3] 创建git本地仓库
git init
//此时会出现提示 : 
//inialized empty Git repository in d://com/liu/.git

//已经添加过 提示: 
//Reinitialized existing Git repository in /home/xiaoj/testaaa/.git/


[1.4] 查看git状态
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


[1.5] 添加git文件到暂存区（需要和版本库区分） 
git add <name>
git add bbb.txt
git add aaa.txt


[1.6] git提交文件
git commit -m "add a function in test.java"
//-m表示注释，为提交时的说明，必须要有！


[1.7] git删除文件（夹）
git rm test.txt          //删除文件
git rm -r filebook     //删除文件夹
//git rm和直接删除的区别在于git rm会将此文件的操作记录删除，而直接删除仅仅是删除了物理文件，没有删除和此文件相关的记录。git rm后会在版本库产生区别（有操作日志），而直接删除没有。
//可以用下面两种操作在版本库中删除文件：
git rm test.txt   =>    git commit -m 'delete a file'
rm test.txt        =>    git commit -am 'delete a file'
//注意：命令git rm用于删除一个文件。如果一个文件已经被提交到版本库，那么你永远不用担心误删，但是要小心，你只能恢复文件到最新版本，你会丢失最近一次提交后你修改的内容。


/***********************************************************************/
/**************************** git 日志 *********************************/
/***********************************************************************/
[2.0] ----------------------------------

[2.1] git操作日志
#显示当前及之前的版本号
git log --decorate --graph --oneline --all
//* 3c38201 (HEAD, master) test 2
//* be74e6e test

#将版本历史显示为一行，历史版本号全部显示
git log --pretty=oneline
//3c38201268daa8f79c60b92715fa4967cd51c55b test 2
//be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1 test

#将版本历史显示为一行，历史版本号部分显示
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

git reflog
//3c38201 HEAD@{0}: reset: moving to 3c38201
//be74e6e HEAD@{1}: reset: moving to HEAD^
//3c38201 HEAD@{2}: commit: test 2
//be74e6e HEAD@{3}: commit (initial): test

git log ––pretty=oneline


[2.2] 版本回退
//执行版本退回后，本地工作区的内容会自动和回退到的版本库版本的内容保持同步
git reset --hard HEAD^    回退到上一个版本
git reset --hard HEAD^^   回退到上上个版本，以此类推，一次提交即为一个版本
git reset --hard HEAD~100
git reset --hard e9efa77  回退到 e9efa77  版本


/***********************************************************************/
/*************************** git chechout ******************************/
/***********************************************************************/

[3.0] ----------------------------------
[3.1] 撤销

git diff test_branch_name　　　　　　　　　　　　　　　　　　　　　　　 #查看当前branch与test_branch_name中代码的区别
git push XXX branch_name　　　　　　　　　　　　　　　　　　　　　　　　#上传指定的branch到远端


[3.2] git还原操作
//丢弃工作区的操作，但不会丢失暂存区的操作(add操作能将更改添加到暂存区)，
//实际上就是用版本库里的版本替换工作区的版本，无论工作区是修改还是删除，都可以“一键还原”
git checkout -- readme.txt


[3.3] git暂存区撤销到工作区操作
//工作区修改了文件，而且执行了add，但还没执行commit，暂存区还是可以撤销的
git reset HEAD readme.txt
//备注：git reset命令既可以回退版本，也可以把暂存区的修改回退到工作区。当我们用HEAD时，表示最新的版本。


[3.4] git版本区撤销到工作区操作
git fetch --all
git reset --hard origin/master

/***********************************************************************/
/**************************** git diff   *******************************/
/***********************************************************************/
[4.0] ----------------------------------

[4.1] 对比 git diff
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








/***********************************************************************/
/**************************** git remote *******************************/
/***********************************************************************/
[5.0] ----------------------------------

[5.1] remote


git remote add XXX https://github.com/username/repo_name.git　 　　#设置github的连接
git clone git://github.com/your_account/aimed_repo.git　　　　　　　#复制一个repo到本地
git remote -v　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　#查看本地设置的url连接信息

git status　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　#查看当前工作的
git branch　　　　　　　　　　　　　　　　　　　　　　　　　　　　 #查看本地所有的
git branch -a　　　　　　　　　　　　　　　　　　　　　　　　　　　#查看远程的所有分支
git branch -d branch_name　　　　　　　　　　　　　　　　　　　　　　　 #删除本地branch_name这一分支
git push origin --delete branch_name　　　　　　　　　　　　　　　　 　 #删除名为branch_name的远程分支
git pull　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　#将远程上的版本与本地版本进行合并，相当于get fetch + git merge


[5.2] 与github/gitee协同使用（git代码托管服务器）
和GitHub相比，码云（Gitee）也提供免费的Git仓库。此外，还集成了代码质量检测、项目演示等功能。对于团队协作开发，码云还提供了项目管理、代码托管、文档管理的服务，5人以下小团队免费。

[5.3] 配置远程仓库免密登陆
（1）在用户主目录下，看看有没有.ssh目录，如果有，再看看这个目录下有没有id_rsa和id_rsa.pub这两个文件，如果已经有了，可直接跳到下一步。如果没有，打开Shell（Windows下打开Git Bash），创建SSH Key：ssh-keygen -t rsa -C "xxx@foxmail.com"    
备注：一路回车，执行生成 id_rsa 私钥 和 id_rsa.pub 公钥，Windows用户在git bash中输入上述指令
（2）获得key的内容，复制下来，添加到gitHub的SSH key中
windows位置：?C:\Users\用户名\.ssh\id_rsa.pub
Linux位置：cat ~/.ssh/id_rsa.pub



（3）ssh -T git@github.com   #验证key，根据提示输入yes，添加为信任主机
或者ssh -T git@git.oschina.net

[5.4] 添加远程仓库
git remote add origin https://github.com/xxx/LearnGit.git（https方式）
（ssh方式）
此处可以为https地址也可以是ssh地址，orign为设置的远程仓库的别名，强烈建议使用ssh方式，因为https方式每次都要输入用户名和密码
如果需要修改传输协议：
（1）git remote rm <远程主机名>（删除远程仓库）
（2）设置传输方式和目标远程仓库
（3）git push -u <远程主机名> <本地分支名>

码云的添加远程仓库方法：
git remote add origin git@gitee.com:xxx/LearnGit.git（ssh方式）
如果git remote add失败，并报错：fatal: remote origin already exists.
说明本地库已经关联了一个名叫origin的远程库，此时，可以先用git remote -v查看远程库信息：
origin  git@github.com:xxx/LearnGit.git (fetch)
origin  git@github.com:xxx/LearnGit.git (push)
表示本地库已经关联了Github上的origin远程库，需要先删除已有的Github库：
git remote remove origin
再关联码云的远程库（注意路径中需要填写正确的用户名）：
git remote add gitee git@gitee.com:xxx/LearnGit.git

因为git本身是分布式版本控制系统，可以同步到另外一个远程库，当然也可以同步到另外两个远程库，所以一个本地库可以既关联GitHub，又关联码云！
使用多个远程库时，要注意git给远程库起的默认名称是origin，如果有多个远程库，我们需要用不同的名称来标识不同的远程库。仍然以learngit本地库为例，先删除已关联的名为origin的远程库：
git remote rm origin
然后，先关联GitHub的远程库：
git remote add github git@github.com:xxx/LearnGit.git
注意，远程库的名称叫github，不叫origin了。
接着，再关联码云的远程库：
git remote add gitee git@gitee.com:xxx/LearnGit.git
同样注意，远程库的名称叫gitee，不叫origin。
现在，我们用git remote -v查看远程库信息，可以看到两个远程库：gitee   git@gitee.com:xxx/LearnGit.git (fetch)
gitee   git@gitee.com:xxx/LearnGit.git (push)
github  git@github.com:xxx/LearnGit.git (fetch)
github  git@github.com:xxx/LearnGit.git (push)
如果要推送到GitHub，使用命令：
git push github master
如果要推送到码云，使用命令：
git push gitee master
这样一来，本地库就可以同时与多个远程库互相同步：


[5.5] 查看远程仓库及传输协议
git remote
git remote -v  查看名称和详细地址


[5.6] 删除远程仓库
git remote remove <远程主机名>


[5.7] 推送本地分支到远程仓库
git push <远程主机名> <本地分支名>:<远程分支名>
如果省略远程分支名，则表示将本地分支推送与之存在“追踪关系”的远程分支（通常两者同名），如果该远程分支不存在，则会被新建。
git push origin <本地分支名>
git push origin master
如果当前分支与多个主机存在追踪关系，则可以使用-u选项指定一个默认主机，这样以后就可以不加任何参数使用git push。
git push -u <远程主机名> <本地分支名>  例如：git push -u origin master


[5.8] 将远程仓库克隆为本地仓库
git clone git@github.com:xxx/LearnGit.git
注意：
（1）不能使用别名
（2）默认情况下，从远程clone到本地的库只能看到master分支，如果要将远程的分支同步到本地：
git checkout -b <本地分支名> <远程主机名>/<远程分支名>
前提是远程<远程主机名>必须存在名为<远程分支名>的分支，而且<本地分支名>和<远程分支名>最好一致。


[5.9] 本地仓库更新
将远程存储库中的更改合并到当前分支中。在默认模式下，git pull是git fetch后跟git merge FETCH_HEAD的缩写。更准确地说，git pull使用给定的参数运行git fetch，并调用git merge将检索到的分支头合并到当前分支中。 使用--rebase，它运行git rebase而不是git merge。
以下是一些示例：
git pull <远程主机名> <远程分支名>:<本地分支名>
比如，要取回origin主机的next分支，与本地的master分支合并，需要写成下面这样 -
git pull origin next:master
如果远程分支(next)要与当前分支合并，则冒号后面的部分可以省略。上面命令可以简写为：
git pull origin next
上面命令表示，取回origin/next分支，再与当前分支合并。实质上，这等同于先做git fetch，再执行git merge。
git fetch origin  =>  git merge origin/next
在某些场合，Git会自动在本地分支与远程分支之间，建立一种追踪关系(tracking)。比如，在git clone的时候，所有本地分支默认与远程主机的同名分支，建立追踪关系，也就是说，本地的master分支自动“追踪”origin/master分支。Git也允许手动建立追踪关系：
git branch --set-upstream-to=远程主机名/<远程分支名>? <本地分支名>
比如git branch --set-upstream-to=origin/next master，指定master分支追踪origin/next分支。
git pull origin
上面命令表示，本地当前分支自动与对应的origin主机”追踪分支”(remote-tracking branch)进行合并。
如果当前分支只有一个追踪分支，连远程主机名都可以省略。
git pull
上面命令表示，当前分支自动与唯一一个追踪分支进行合并。
如果合并需要采用rebase模式，可以使用–rebase选项。
git pull --rebase <远程主机名> <远程分支名>:<本地分支名>

git fetch和git pull的区别
（1）git fetch：相当于是从远程获取最新版本到本地，不会自动合并。
git fetch origin mastergit log -p master..origin/mastergit merge origin/master
以上命令的含义：
首先从远程的origin的master主分支下载最新的版本到origin/master分支上
然后比较本地的master分支和origin/master分支的差别
最后进行合并
上述过程其实可以用以下更清晰的方式来进行：
git fetch origin master:tmpgit diff tmp git merge tmp
（2）git pull：相当于是从远程获取最新版本并merge到本地
git pull origin master
上述命令其实相当于git fetch 和 git merge
在实际使用中，git fetch更安全一些，因为在merge前，可以查看更新情况，然后再决定是否合并。


[5.10] 查看/创建/切换/删除/合并分支
//1) 查看分支
git branch
//* master

//2) 创建分支
git branch <name>


//3) 创建并切换到分支
git checkout -b <name>
//备注：git checkout命令加上-b参数表示创建并切换，相当于以下两条命令
git branch <name>git checkout <name>


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



[5.16] 创建tag
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


[5.17] 查看tag
git tag    #显示的tag不是按时间顺序排列，而是按字母顺序排列
如果想查看tag和commit的对应关系，可以用
git log --pretty=oneline --abbrev-commit
如果想查看tag的的详细情况，可以用
git show <tagname>


[5.18] 删除tag
创建的标签都只存储在本地，不会自动推送到远程。所以，打错的标签可以在本地安全删除：
git tag -d <tagname>
如果标签已经推送到远程，要删除远程标签就麻烦一点：
（1）先本地删除：git tag -d <tagname>
（2）再远程删除：git push origin :refs/tags/<tagname>


[5.19] 推送标签至远程
git push origin <tagname>
或者，一次性推送全部尚未推送到远程的本地标签：
git push origin --tags



/***********************************************************************/
/**************************** git stash *******************************/
/***********************************************************************/
[6.0] ----------------------------------

[6.1] 现场的保存与恢复: git stash

git stash        #将目前的工作现场保存
git stash list   #查看所有保存的工作现场


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





[6.2] 设置Git UI颜色
让Git显示颜色，会让命令输出看起来更醒目
git config --global color.ui true


[6.3] 忽略特殊文件
（1）在Git工作区的根目录下创建一个特殊的.gitignore文件，然后把要忽略的文件名填进去，Git就会自动忽略这些文件。不需要从头写.gitignore文件，GitHub已经为我们准备了各种配置文件，只需要组合一下就可以使用了。所有配置文件可以直接在线浏览：https://github.com/github/gitignore
忽略文件的原则是：
忽略操作系统自动生成的文件，比如缩略图等；
忽略编译生成的中间文件、可执行文件等，也就是如果一个文件是通过另一个文件自动生成的，那自动生成的文件就没必要放进版本库，比如Java编译产生的.class文件；
忽略你自己的带有敏感信息的配置文件，比如存放口令的配置文件。
比如一个完成的.gitignore文件，内容如下：
------------------------------
# Windows:Thumbs.dbehthumbs.dbDesktop.ini

# Python:*.py[ cod]*.so*.egg*.egg-infodistbuild
-------------------------------
（2）把.gitignore也提交到Git
git add .gitignore
git commit -m "there is a description"
就完成了！当然检验.gitignore的标准是git status命令是不是显示working tree clean。
使用Windows的注意：如果在资源管理器里新建一个.gitignore文件，系统会非常弱智地提示必须输入文件名，但是在文本编辑器里“保存”或者“另存为”就可以把文件保存为.gitignore了。

（3）如果确实想要添加已经被.gitignore忽略的文件，可以用-f强制添加到Git
git add -f test.class

（4）怀疑.gitignore写的有问题，需要查找哪个规则写错了，可以用git check-ignore命令检查：
git check-ignore -v App.class.gitignore:3:*.class    App.class
表示.gitignore的第3行规则忽略了App.class这个文件，于是我们就可以知道应该修订哪个规则。


[6.4] 为命令配置别名
（1）命令可以简写，用git st表示git status，再比如用co表示checkout、ci表示commit、br表示branch：
git config --global alias.co checkoutgit config --global alias.ci commitgit config --global alias.br branch
以后提交就可以简写成：
git ci -m "there is a description"
--global参数是全局参数，也就是这些命令在这台电脑的所有Git仓库下都有用。

（2）命令git reset HEAD <filename>可以撤销暂存区的修改（unstage），重新放回工作区。既然是一个unstage操作，就可以配置一个unstage别名：
git config --global alias.unstage 'reset HEAD'
就可以简化命令：
git unstage test.py   =   git reset HEAD test.py

（3）配置一个git last，让其显示最后一次提交信息：
git config --global alias.last 'log -1'
这样，用git last就能显示最近一次的提交：
git lastcommit 015851cbe2902bf01fbba198af5d6705dc0e03ac (HEAD -> dev)
Author: xxx <xxx@foxmail.com>
Date:   Mon Apr 23 13:52:44 2018 +0800
    add git ignore list
（4）还有把lg配置成了：
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
来看看git lg的效果：


[6.5] 修改配置文件
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



/***********************************************************************/
/**************************** git other  *******************************/
/***********************************************************************/

[7.1] 文件重命名: git mv
git mv filename newfilename


[7.2] 设置对比/合并工具:
git config --global diff.tool bc3
git config --global difftool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

git config --global merge.tool bc3
git config --global mergetool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

//也可以直接修改.gitconfig 文件，直接增加如下:
C:\Users\Administrator\.gitconfig
//	[diff]
//	    tool = bc3
//	[difftool "bc3"]
//	    path = d:/program files/beyond compare 3/bcomp.exe
//	[merge]
//	    tool = bc3
//	[mergetool "bc3"]
//	    path = d:/program files/beyond compare 3/bcomp.exe

//设置好后，使用命令是 git difftool 而不是之前的 git diff 了。
//git difftool 说明文档：http://git-scm.com/docs/git-difftool.html


[7.3] 忽略某个目录或文件不上传
touch .gitignore
Save:SI\.gitignore
//	MacroSBD/sbd_base.em
//	node/Simple_CTRL_B.h

git difftool -y MacroSBD/sbd_base.em
git difftool -y node/Simple_CTRL_B.h


/***********************************************************************/
/**************************** git windows  *****************************/
/***********************************************************************/
window下git下载 github 项目

1) window下载
https://git-scm.com/downloads
	
2) clone
git clone https://github.com/seefs/Source_Insight.git

git remote add github https://github.com/seefs/Source_Insight.git
git remote rm origin
git remote -v

git remote set-url --push github https://github.com/seefs/Source_Insight11.git
git remote -v

3) cfg
git config --global user.name xj
//git config --global user.name xj_01
git config --global user.email seefs@163.com
git config --list

4) pull/push
//拉取远程仓库：
git pull origin master

//推送远程仓库：
git push origin master
//提交本地test分支作为远程的master分支
git push origin test:master
//提交本地test分支作为远程的test分支
git push origin test:test
//输入 github 用户名密码:
//  seefs@163.com, xjs0f0s0

5) 由于有些部分不上传, 创建分支
git branch myCustom
git checkout myCustom
git add .
git status
git commit -m "ts, bug chg"

git difftool
git difftool -d
git difftool -d 0c8427888be95166e9c4f948feeca44bfa6e6c72
git difftool -d ef03b673a7dc71c047714191c19dc77aad92ccb9

git mergetool

git checkout master
	
git stash
git checkout bugFixBranch
git pull --rebase origin master
fix the bug
git add .
git commit -m ''
git push
git checkout test
git stash pop


