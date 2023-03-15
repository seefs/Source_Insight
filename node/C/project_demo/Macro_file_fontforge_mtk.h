
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

// ttf转bdf
build\ttf_mtk\

//输出编码
build\pe\
build\pe\scriptfile_code.pe
//font code: 7432 / 7432 / 5822 / 5822 / 5822 / 7431
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_30x30.bdf>ttf_mtk/_log_GB2312_30x30.txt
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_34x34.bdf>ttf_mtk/_log_GB2312_34x34.txt
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_TRIM_32.bdf>ttf_mtk/_log_GB2312_TRIM_32.txt
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_TRIM_32_BOLD.bdf>ttf_mtk/_log_GB2312_TRIM_32_BOLD.txt
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_TRIM_34_MSYH.bdf>ttf_mtk/_log_GB2312_TRIM_34_MSYH.txt
fontforge -script pe/scriptfile_code.pe ttf_mtk/S_36_CHINESE.bdf>ttf_mtk/_log_S_36_CHINESE.txt
//font code: 5822+
fontforge -script pe/scriptfile_code.pe ttf_mtk/GB2312_TRIM_22.bdf>ttf_mtk/_log_GB2312_TRIM_22.txt










