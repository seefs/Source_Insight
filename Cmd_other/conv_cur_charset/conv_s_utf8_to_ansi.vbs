

charset_old = "UTF-8"
charset_new = "GB2312"


' Convert the entire directory, there can be no non-existent folders:
ConvPath ".\\..\\..\\node\\S\\Info",charset_new
ConvPath ".\\..\\..\\node\\S\\install",charset_new
ConvPath ".\\..\\..\\node\\S\\Mirror",charset_new
ConvPath ".\\..\\..\\node\\S\\Mirror\\Lang",charset_new
ConvPath ".\\..\\..\\node\\S\\Mirror\\Wu",charset_new
ConvPath ".\\..\\..\\node\\S\\project",charset_new
ConvPath ".\\..\\..\\node\\S\\project\\Doc",charset_new
ConvPath ".\\..\\..\\node\\S\\projectBank",charset_new
ConvPath ".\\..\\..\\node\\S\\projectTry",charset_new
ConvPath ".\\..\\..\\node\\S\\study",charset_new
ConvPath ".\\..\\..\\node\\S\\World",charset_new

' Convert a single file:
convertct ".\\..\\..\\node\\S\\Macro_Note_S.h",charset_new


MsgBox "End of character encoding conversion",,"prompt"
  
'Write the content of the read file to the file with the specified encoding
Function ConvPath(fdpath,charset)
	Set fso = CreateObject("scripting.filesystemobject")
	Set fd = fso.GetFolder(fdpath)
	Set fl=fd.Files
	For each f in fl
	 convertct f.Path,charset
	Next
End Function
  
'Write the content of the read file to the file with the specified encoding
Function convertct(filepath,charset)
	Dim FileName, FileContents, dFileContents
	FileName = filepath 
	FileContents = LoadFile(FileName)
	Set savefile = CreateObject("adodb.stream")
	savefile.Type = 2  'Here 1 is binary and 2 is text
	savefile.Mode = 3
	savefile.Open()
	savefile.charset = charset
	savefile.Position = savefile.Size
	savefile.Writetext(FileContents)  'write write binary, writetext write text
	savefile.SaveToFile filepath,2
	savefile.Close()
	set savefile = nothing
End Function

'Read the file with the file encoding
Function LoadFile(Path)
    Dim Stm2
    Set Stm2 = CreateObject("ADODB.Stream")
    Stm2.Type = 2
    Stm2.Mode = 3
    Stm2.Open
    Stm2.Charset = CheckCode(path)
    'Stm2.Charset = "UTF-8"
    'Stm2.Charset = "Unicode"
    'Stm2.Charset = "GB2312"
    Stm2.position = Stm2.Size
    Stm2.LoadFromFile Path
    LoadFile = Stm2.ReadText
    Stm2.Close
    Set Stm2 = Nothing
End Function


'This function checks and returns the encoding type of the file
Function CheckCode(file)
	Dim slz
	set slz = CreateObject("Adodb.Stream") 
	slz.Type = 1
	slz.Mode = 3
	slz.Open
	slz.Position = 0
	slz.Loadfromfile file
	Bin=slz.read(2)
	If is_valid_utf8(read(file)) Then
	Codes="UTF-8"
	ElseIf AscB(MidB(Bin,1,1))=&HFF and AscB(MidB(Bin,2,1))=&HFE Then
	Codes="Unicode"
	Else
	Codes="GB2312"
	End if
	slz.Close
	Set slz = Nothing
	CheckCode = Codes
End Function


'Convert Byte () array to String
Function read(path)
    Dim ado, a(), i, n
    Set ado = CreateObject("ADODB.Stream")
    ado.Type = 1 : ado.Open
    ado.LoadFromFile path
    n = ado.Size - 1
    ReDim a(n)
    For i = 0 To n
        a(i) = ChrW(AscB(ado.Read(1)))
    Next
    read = Join(a, "")
End Function


'Accurately verify whether the file is utf-8 (can verify the UFT-8 file without BOM header)
Function is_valid_utf8(ByRef input) 'ByRef to improve efficiency
    Dim s, re
    Set re = New Regexp
    s = "[\xC0-\xDF]([^\x80-\xBF]|$)"
    s = s & "|[\xE0-\xEF].{0,1}([^\x80-\xBF]|$)"
    s = s & "|[\xF0-\xF7].{0,2}([^\x80-\xBF]|$)"
    s = s & "|[\xF8-\xFB].{0,3}([^\x80-\xBF]|$)"
    s = s & "|[\xFC-\xFD].{0,4}([^\x80-\xBF]|$)"
    s = s & "|[\xFE-\xFE].{0,5}([^\x80-\xBF]|$)"
    s = s & "|[\x00-\x7F][\x80-\xBF]"
    s = s & "|[\xC0-\xDF].[\x80-\xBF]"
    s = s & "|[\xE0-\xEF]..[\x80-\xBF]"
    s = s & "|[\xF0-\xF7]...[\x80-\xBF]"
    s = s & "|[\xF8-\xFB]....[\x80-\xBF]"
    s = s & "|[\xFC-\xFD].....[\x80-\xBF]"
    s = s & "|[\xFE-\xFE]......[\x80-\xBF]"
    s = s & "|^[\x80-\xBF]"
    re.Pattern = s
    is_valid_utf8 = (Not re.Test(input))
End Function