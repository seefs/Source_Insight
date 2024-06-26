
基础路径设置:
Inward   = True
Backward = 66
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Sqlite\EmployeeKotlin
base:\\


AsFile:base:




.gitignore
build.gradle                                // gradle版本, kotlin版本
gradle.properties
gradlew
gradlew.bat
LICENSE
local.properties
README.md
settings.gradle
app\.gitignore
app\build.gradle                            //版本号与依赖关系
app\proguard-rules.pro
app\src\main\AndroidManifest.xml

//名字太长，改短
kotlinPath = app\src\main\java\com\lopatin\employeekotlin\
kotlin:\\

kotlin:EmployeeApplication.kt
kotlin:activities\main\MainActivity.kt                            // 主界面
kotlin:activities\main\MainActivityContract.kt
kotlin:activities\main\MainActivityNavigator.kt
kotlin:activities\main\MainActivityPresenter.kt                   // 
kotlin:activities\main\MainActivityPresenter.kt               fun^getDataFromRawAndSetToDatabase          //
kotlin:activities\main\MainActivityPresenter.kt               fun^getDataFromRaw 					      // json -> data
kotlin:activities\main\MainActivityPresenter.kt               fun^fillDatabase 					          // data -> db
kotlin:activities\main\MainActivityPresenter.kt               fun^createSpecialtyFragment
kotlin:fragments\BaseFragment.kt
kotlin:fragments\employee_info\EmployeeInfoFragment.kt
kotlin:fragments\employee_info\EmployeeInfoFragmentContract.kt
kotlin:fragments\employee_info\EmployeeInfoFragmentPresenter.kt
kotlin:fragments\employee_list\EmployeeListFragment.kt
kotlin:fragments\employee_list\EmployeeListFragmentAdapter.kt
kotlin:fragments\employee_list\EmployeeListFragmentContract.kt
kotlin:fragments\employee_list\EmployeeListFragmentNavigator.kt
kotlin:fragments\employee_list\EmployeeListFragmentPresenter.kt			getData	          // db -> data
kotlin:fragments\specialty\SpecialtyListFragment.kt               // List
kotlin:fragments\specialty\SpecialtyListFragmentAdapter.kt
kotlin:fragments\specialty\SpecialtyListFragmentContract.kt       
kotlin:fragments\specialty\SpecialtyListFragmentNavigator.kt
kotlin:fragments\specialty\SpecialtyListFragmentPresenter.kt      fragmentIsStarting
kotlin:model\data\DatabaseEmployee.kt
kotlin:model\data\Employee.kt
kotlin:model\data\EmployeeList.kt                                 // <- json
kotlin:model\data\Specialty.kt
kotlin:model\database\
kotlin:model\database\EmployeeDatabaseHelper.kt                   // db 3个表
kotlin:model\database\EmployeeDatabaseInfo.kt
kotlin:model\database\EmployeeDatabaseManager.kt                  // db Manager
kotlin:navigation\NavigationContract.kt       //
kotlin:navigation\NavigationManager.kt        //
kotlin:network\JsonConverterRetrofit.kt
kotlin:network\RetrofitApi.kt
kotlin:utils\Utils.kt

app\src\main\res\drawable\ic_launcher_background.xml
app\src\main\res\drawable-v24\ic_launcher_foreground.xml
app\src\main\res\layout\activity_main.xml
app\src\main\res\layout\fragment_employee_info.xml
app\src\main\res\layout\fragment_employee_list.xml
app\src\main\res\layout\fragment_specialty.xml
app\src\main\res\layout\item_employee_list.xml
app\src\main\res\layout\item_specialty_fragment_list.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher.xml
app\src\main\res\mipmap-anydpi-v26\ic_launcher_round.xml
app\src\main\res\mipmap-hdpi\ic_launcher.png
app\src\main\res\mipmap-hdpi\ic_launcher_round.png
app\src\main\res\mipmap-mdpi\ic_launcher.png
app\src\main\res\mipmap-mdpi\ic_launcher_round.png
app\src\main\res\mipmap-xhdpi\ic_launcher.png
app\src\main\res\mipmap-xhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxhdpi\ic_launcher_round.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher.png
app\src\main\res\mipmap-xxxhdpi\ic_launcher_round.png
app\src\main\res\raw\all_employees.json                           // json数据
app\src\main\res\values\colors.xml
app\src\main\res\values\color_palettes_material_design.xml
app\src\main\res\values\dimens.xml
app\src\main\res\values\strings.xml
app\src\main\res\values\styles.xml

