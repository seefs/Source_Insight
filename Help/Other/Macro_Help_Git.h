
# git 常用下载/上传命令, 说明:
# 1) clone:
git clone https://github.com/seefs/SI_BASE.git


# 2) config:
git config --global user.name usr_xj
git config --global user.name usr_org
git config --global user.email seefs@163.com
git config --list


# 3) 更新:
git pull
或者
git pull origin dev
或者
git pull origin master:dev


# 4) 修改后提交本地:
git add .
git commit -m "msg"


# 5) 提交本地到服务器:
git push



#    git 其他命令说明:
https://github.com/seefs/Source_Insight/blob/master/node/ToolsMsg/Macro_git.h