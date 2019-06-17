# si_mini

# 1 Source_Insight 相关git:
# v1 完整工具，总大小 4.73M----------------------------------当前v1
    同时上传SVN和git; 
    SVN: 公司用, 上传注意还原路径; 
    git: 没有混用, 不用改路径直接上传;
https://github.com/seefs/Source_Insight

# v2 小工具，总大小 2.1M
    git: 删除不通用的文件, (现在用不上, v1够小); 
https://github.com/seefs/Source_Insight_mini

# v3 私有工具，总大小 1.7M
    git: 私有笔记, 
         专用笔记, (如微信, 用 SI加载工程note/xxxx, 方便同时上传项目+笔记+宏)
https://github.com/seefs/Source_Insight_private

# v4 配置，总大小 1.2M
    菜单 + 快捷键 + 字体 + 窗口 
https://github.com/seefs/Source_Insight_4_0_cfg

# v5 备份，总大小 48M
    v1 不用的文件放这边, (android笔记空间比较大)
https://github.com/seefs/Source_Insight_bak

/***********************************************************************/

# 2 Tool 相关git:
https://github.com/seefs/tool.git
https://github.com/seefs/tool_mini.git


/***********************************************************************/
# 3 git 命令:

# 1) 下载git windows版本：
地址略

# 2) 参考配置+详细命令：
https://github.com/seefs/Source_Insight/blob/master/node/ToolsMsg/Macro_git.h


# 3) git 命令:
# 3.1) clone:
git clone https://github.com/seefs/Source_Insight.git
git clone https://github.com/seefs/Source_Insight_mini.git
git clone https://github.com/seefs/Tool.git
git clone https://github.com/seefs/Tool_mini.git

# 3.2) remote:
//git remote add siMini  https://github.com/seefs/Source_Insight_mini.git
//git remote rm origin
//git remote -v
//git pull master:siMini

# 3.3) config:
git config --global user.name usr_xj
git config --global user.name usr_org
git config --global user.email seefs@163.com
git config --list

# 3.4) 更新:
git pull
git pull origin dev
git pull origin master:dev

# 3.5) 提交:
git push


