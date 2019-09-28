
# 查看当前地址:
$ git remote -v
origin  https://github.com/seefs/Source_Insight (fetch)
origin  https://github.com/seefs/Source_Insight (push)

# 下载命令:
$ git clone https://github.com/seefs/Source_Insight

/***********************************************************************/

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
# 功能说明和优缺点:
#
# 1) 通用版Source_Insight 宏命令工具
#    笔记建议保存在github上, 
#    缺点是只能编辑文件,


# 2) 笔记能处理cmd, python命令
#    格式比较灵活, 请参考帮助文件, 或已有笔记
#    已添加常用的工具命令: 如vc, vs2008, bcomp, svn, cp, ...
#    如何添加新命令, 以后会写一个简单说明


# 3) 最大优点(省时间和精力)
#    >> 打开文件快, 节省重复配置时间
#    >> 详细步骤 + 批处理结合, 一步一步往下执行即可, 节省思考时间
#    >> 目录索引, 创建索引也有批处理; 
#           目录就是一个文件名+编号或者单词, 转换过去;
#    >> 节省记忆时间, 新人也可以快速入门
#    >> 常用的几个键, 很好用


/***********************************************************************/
# 相关工具及配置下载:
#    
# 1) git windows版本：
#       下载地址: 见百度.
#
#    >> 更新/上传 笔记
#    
#    >> git 常用命令说明:
https://github.com/seefs/si_base/blob/master/Help/Macro_Help_Git.h


# 2) Source_Insight4.0及配置：
#       下载地址: 
https://github.com/seefs/tool/tree/master/3%20%20%E5%B7%A5%E5%85%B7/5%20%20%E6%96%87%E6%A1%A3/2%20SourceInsight

#    >> 编辑笔记: 
#       目录: .\SI\node\...
#
#    >> 自定义宏命令，批处理: 
#       目录: .\SI\Macro\...

#    >> SI配置步骤:
https://github.com/seefs/si_base/blob/master/Help/Macro_Help_SI.h
#       或者用这个配置:
https://github.com/seefs/Source_Insight_4_0_cfg




