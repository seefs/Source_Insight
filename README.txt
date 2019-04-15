# si_mini
# 1) 在公司用这套完整版;

/***********************************************************************/

# 2) Source_Insight 相关git:
# 2.1) 完整版工具，总大小 53M
    同时上传SVN和git; 公司上传SVN注意还原路径; git暂时没人用, 我在家也不用, 不用改路径直接上传;
https://github.com/seefs/Source_Insight

# 2.2) 小工具，总大小 1.4M内 (删除不通用的文件)
https://github.com/seefs/Source_Insight_mini

# 2.3) 小工具，总大小 1.4M内 (半成品, 有些无关的笔记, SI加载工程note/xxxx, 方便同时上传笔记+宏, 私有)
https://github.com/seefs/Source_Insight_private

# 2.4) 配置--菜单+快捷键+字体+窗口
https://github.com/seefs/Source_Insight_4_0_cfg

/***********************************************************************/

# 3) Tool 相关git:
https://github.com/seefs/tool.git
https://github.com/seefs/tool_mini.git


/***********************************************************************/
# 4) git 命令:
# 4.1) 下载git windows版本：
地址略

# 4.2) 参考配置+详细命令：
https://github.com/seefs/Source_Insight/blob/master/node/ToolsMsg/Macro_git.h


# 4.3) git 命令:
# 4.3.1) clone:
git clone https://github.com/seefs/Source_Insight.git
git clone https://github.com/seefs/Source_Insight_mini.git
git clone https://github.com/seefs/Tool.git
git clone https://github.com/seefs/Tool_mini.git

# 4.3.2) remote:
//git remote add siMini  https://github.com/seefs/Source_Insight_mini.git
//git remote rm origin
//git remote -v
//git pull master:siMini

# 4.3.3) config:
git config --global user.name usr_xj
git config --global user.name usr_org
git config --global user.email seefs@163.com
git config --list

# 4.3.4) 更新:
git pull
git pull origin dev
git pull origin master:dev

# 4.3.5) 提交:
git push


