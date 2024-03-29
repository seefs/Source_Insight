
基础路径设置:
Inward   = False
//Backward = 44
Save:node\android\project\Macro_as_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Demo\DrawerBehavior
base:\\



AsFile:base:



//Customize 

//set height scale for main view (0f to 1f)
//设置主视图的高度比例（0f至1f）
drawer.setViewScale(Gravity.START, 0.9f);

//set main view elevation when drawer open (dimension)
//设置抽屉打开时的主视图高程（尺寸）
drawer.setViewElevation(Gravity.START, 20); 

//set drawer overlay coloe (color)
//设置抽屉覆盖的可乐（颜色）
drawer.setViewScrimColor(Gravity.START, Color.TRANSPARENT); 

//set drawer elevation (dimension)
//设置抽屉高度（尺寸）
drawer.setDrawerElevation(Gravity.START, 20); 

//set maximum of contrast ratio between white text and background color.
//设置白色文本和背景颜色之间的最大对比度。
drawer.setContrastThreshold(3); 

//set end container's corner radius (dimension)
//设置终端容器的拐角半径（尺寸）
drawer.setRadius(Gravity.START, 25); 



//Advance 3D Drawer Layout
//先进的3D抽屉布局

// set degree of Y-rotation ( value : 0 -> 45)
//设置Y旋转度（值：0-> 45）
drawer.setViewRotation(Gravity.START, 15); 



//Card Effect
//	卡效果

//set end container's corner radius (dimension)
//设置终端容器的拐角半径（尺寸）
drawer.setRadius(Gravity.START, 25);



//Advance Drawer Layout
//进纸器布局

//assign custom behavior for "Left" drawer
//为“左”抽屉分配自定义行为
drawer.useCustomBehavior(Gravity.START); 

//assign custom behavior for "Right" drawer 
//为“右侧”抽屉分配自定义行为
drawer.useCustomBehavior(Gravity.END); 





//Maven

//	<dependency>
//	  <groupId>com.infideap.drawerbehavior</groupId>
//	  <artifactId>drawer-behavior</artifactId>
//	  <version>0.2.2</version>
//	  <type>pom</type>
//	</dependency>

//Gradle

//	dependencies {
//	   implementation 'com.infideap.drawerbehavior:drawer-behavior:0.2.2'
//	}


//	repositories {
//	 maven{
//	   url "https://dl.bintray.com/infideap2/Drawer-Behavior"
//	 }
//	}








