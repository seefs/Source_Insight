
# 当前项目路径:
basePath = D:\project\C\Demo\fontforge
base:\\


### 格式要求(参数)
// open format:
//   sfd
//   ttf
//   bdf
// use info:
//   TeXHeight
//   TeXDepth
//   Encoding--cn=Unicode


### 输出编码
//输出编码
build\pe\
build\pe\scriptfile.pe
build\pe\scriptfile_cnt.pe
build\pe\scriptfile_code.pe


### scriptfile.pe--输出chr48~chr71属性
//font info 0~50
fontforge -script pe/scriptfile.pe AAA_FONT_CN.ttf


### scriptfile_cnt.pe--输出chr1~chr65509属性非空
//font cnt: 39429 (原)
//fontforge -script pe/scriptfile_cnt.pe NotoSans.ttf


### scriptfile_code.pe--输出code到txt
//font code: 14179
fontforge -script pe/scriptfile_code.pe AAA_FONT_CN.ttf>_log_CN_ALL.txt

//	 use step:--注意错误步骤
//	   ttf--bdf--FontForge--(open error!)
//	   ttf--bdf--FontForge--sfd--(open error!)
//	   ttf--bdf--FontForge--ttf--3501
//	   ttf--bdf--all--FontForge--ttf/sfd--13496(max 65509)



### 清除 (pe格式用ansi, 不能用utf8)
build\pe\
build\pe\scriptclear_big5.pe
build\pe\scriptclear_gb2312.pe
build\pe\scriptclear_merge.pe
build\pe\scriptclear_mnoV.pe
build\pe\test.pe
//run test
fontforge -script pe/scriptclear_gb2312.pe _test.sfd ".sfd">_log.txt
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.sfd ".sfd">_log_merge.txt
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.ttf ".ttf">_log_merge.txt
fontforge -script pe/test.pe _test.sfd 37 ".sfd"
fontforge -script pe/test.pe _test.sfd 37 ".ttf"
fontforge -script pe/test.pe AAA_FONT_CN.ttf 37 ".ttf"
//run (.sfd再转.ttf的, 展讯可以用)
fontforge -script pe/scriptclear_big5.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_gb2312.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_merge.pe AAA_FONT_CN.sfd ".sfd"
fontforge -script pe/scriptclear_mnoV.pe AAA_FONT_CN.sfd ".sfd"
//	font kp cnt: 9657
//	font rm 656535 cnt: 29772
//	font rm cnt: 41458
// 注意项
//   0x5760字符: .sfd没问题 .ttf没问题 .lib有问题


### 总结 用fontTool操作
// 原lib
1.8910简+繁: 2M+4.5M=6.5M
2.T107简+繁: 2M+1.8M=3.8M, 一宽一窄, 大内存可用
// 新fontforge-lib
1.big-合并简+繁:       4.49M，估计也丢失字符 (BIG_FORGE.lib)
2.small-merge de:  2.45M，丢失一部分字符 (SMALL_FORGE.lib)
3.small-ttc de:    2.84M  (SMALL_FORGE_TC.lib)
// 新FONTTOOL-lib
1.big--tts1: 4.51M，(BIG_FTOOL_NS.lib)
2.big--tts2: 5.17M，(BIG_FTOOL_NSSC.lib)
3.big--tts3: 5.24M，(BIG_FTOOL_NSTC.lib)
4.small--tts1: 2.45M，(SMALL_FTOOL_NS.lib)
5.small--tts2: 2.84M，(SMALL_FTOOL_NSSC.lib)
6.small--tts3: 2.88M，(SMALL_FTOOL_NSTC.lib)

// 对比效果
86B0: NS>DEF>NSST=NSTT
// 属性
//FBBx FBBy: 字体的宽度和高度(defW=16, 90%W=14)
//maxbearingY-未压缩: 上移4(最优)
//maxbearingY---压缩: 上移2(最优)
// 最终使用
//LANG_FONT_HAN_TRAD_TW_VECTOR_SMALL_FTOOL_NS_BY4
// 步骤:
// --"置"和"恢"字明显区别, 这个字库有问题
MS_MMI_Main\source\resource\Common\FONT\Zouk TTF\NotoSans.ttf +
// --恢字阴影多一点
MS_MMI_Main\source\resource\Common\FONT\Zouk TTF\NotoSansCJKsc-Regular.ttc +
tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe + 
tools\DEBUG_TOOL\FONTTOOL\Bin\Han_merge_small.ini + 
//导入时maxbearingY设置为4(上移4解决显示超边界问题)
//应该要选矢量flag


// SPCSS01127227
//		矢量字体的大小和宽度是依照算法计算出来的，有阴影应该是原始 ttf 字库不合适造成, 。建议更换 ttf 字库.
//		目前工具能调整矢量字体部分:  
//		“Max Brearing Y Delta”―― 调整字符上下偏移，取值范围
//		“Shrink Percent[50%-100%]” ―― 字型高度缩小的百分比[50-100]
//		“Compress”               ――  轮廓和符合字型数据压缩





