


//sbd_base 路径设置
Save:Macro\sbd_base.em


//Macro_Set_Base 路径设置
Save:node\set\Macro_Set_Base.h


//定制路径设置: (新加的话参考已有路径)
// Save:
Save:Macro\sbd_base.em  getSavePath(0)
Save:Macro\sbd_file.em  "Save:"
Save:Macro\sbd_f11.em   "Save"

// Project:
//Save:Macro\sbd_base.em  getCustomPath(0)
//Save:Macro\sbd_file.em  "Project:"
//Save:Macro\sbd_f11.em   "Project"

// Tool:
//	  toolPath = E:\Desktop\NLP
//Save:Macro\sbd_file.em  "Tool:"
//Save:Macro\sbd_f11.em   "Tool"

// Data:
//	  dataPath = E:\Desktop\NLP
//Save:Macro\sbd_file.em  "Data:"
//Save:Macro\sbd_f11.em   "Data"

// 修改为(最新):
### Project/Data/Tool/...:
// 查找当前文件设置路径:
//	  dataPath = E:\Desktop\NLP


//测试
Save:Help\Test\Macro_Test_Path.h






