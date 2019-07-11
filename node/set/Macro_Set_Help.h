
[1.1] Macro path:
//    改变Save路径, 宏命令才能正常使用:
Save:SI\MacroSBD\sbd_base.em  getSavePath(0)


[1.2] 新加项目目录:
//新加项目目录:
Save:SI\node\set\Macro_Set_Base.h



[1.3] 其他目录:
//sbd_base 路径设置
Save:SI\MacroSBD\sbd_base.em



[1.4] 定制路径设置:
//	新加的话参考已有路径
// Save:
Save:SI\MacroSBD\sbd_base.em  getSavePath(0)
Save:SI\MacroSBD\sbd_file.em  ReplaceWord(fName
Save:SI\MacroSBD\sbd_f11.em  "Save"
// Project:
Save:SI\MacroSBD\sbd_base.em  getCustomPath(0)
Save:SI\MacroSBD\sbd_file.em  ReplaceWord(fName
Save:SI\MacroSBD\sbd_f11.em  "Project"
// Tool:
//	toolPath = E:\Desktop\NLP
Save:SI\MacroSBD\sbd_file.em  ReplaceWord(fName
Save:SI\MacroSBD\sbd_f11.em  "Tool"
// Data:
//	dataPath = E:\Desktop\NLP
Save:SI\MacroSBD\sbd_file.em  ReplaceWord(fName
Save:SI\MacroSBD\sbd_f11.em  "Data"



[2.1] 弃用
Save:SI\node\9820e\Macro_Note_9820es.h




