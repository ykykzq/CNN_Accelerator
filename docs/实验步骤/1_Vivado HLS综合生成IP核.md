# Vivado HLS综合生成IP核

在这一步骤，你需要：

- conv_core.cpp
- conv_core.h

- main.cpp

这三个文件均可以在src文件夹中找到。前两个文件用于生成IP核，最后一个文件用于验证正确性。

你将得到：

- export.zip

即用于卷积操作的IP核。

## 步骤

### 1.1 创建Vivado HLS项目

​	在桌面双击Vivado HLS快捷方式，或在开始菜单->Xilinx Design Tools->Vivado HLS打开Vivado HLS工具。点击“Quick Start”下方的“Create New Project”，或点击菜单栏中的File->New Project。然后，填写项目名称，并选择项目所在的路径，如图1-1所示。

<center><img src="../pictures/step1/1-1.png" width = 550></center>
<center>图1-1 创建Vivado HLS项目</center>

​	点击Next，进入源文件添加窗口。在Top Function一栏内填写`conv_core`，作为顶层函数名，如图1-2所示。

<center><img src="../pictures/step1/1-2.png" width = 550></center>
<center>图1-2 填写Top Function名</center>

​	点击Next，进入Test Bench的测试源文件添加窗口。此时暂不添加，继续点击Next，进入项目配置窗口。点击Part Selection线框内部的“…”按钮，打开器件选择窗口。如图1-3所示。

<center><img src="../pictures/step1/1-3.png" width = 550></center>
<center>图1-3 设置芯片型号</center>

​	输入`xc7z010clg400-1`，即我们板子的FPGA型号，然后点击“OK”按钮，

<center><img src="../pictures/step1/1-4.png" width = 550></center>
<center>图1-4 选择芯片型号</center>

​	点击“Finish”按钮，完成项目的创建，进入主界面，如图1-5所示。

<center><img src="../pictures/step1/1-5.png" ></center>
<center>图1-5 Vitis HLS主界面</center>

​	Vivado HLS主界面主要包括6个部分：1）菜单栏和工具条。菜单栏和普通的IDE差不多，尤其接近Eclipse，这是因为Vivado HLS就是基于Eclipse开发的。工具栏包含了常用的功能按钮，如综合、仿真、打包IP核等。2）视图切换按钮，用于在Debug、综合和分析3个视图之间切换。3）项目管理窗口，用于管理项目源文件、测试源文件、IP核压缩包等文件。4）工作区：用于编辑源码和调试。5）控制台和报错信息窗口：用于查看报错信息和串口输出等。6）Outline窗口：用于显示项目相关的信息，包括顶层函数输入输出变量所对应的硬件模块的接口信号总线协议等。

### 1.2 添加源文件

​	将所提供的`conv_core.cpp`、`conv_core.h`和`main.cpp`三个源文件拷贝至工程目录下。然后在项目管理窗口的Source图标处右键，选择Add File，选择刚才拷贝的除`main.cpp`之外的源文件，如图1-6所示。

<center><img src="../pictures/step1/1-6.png" width = 650></center>
<center>图1-6 添加源文件</center>

​	双击Source下的源文件。可编辑其代码，如图1-7所示。

<center><img src="../pictures/step1/1-7.png"></center>
<center>图1-7 查看或编辑源代码</center>

​	类似地，在Test Bench图标处右键添加`main.cpp`，如图1-8所示。

<center><img src="../pictures/step1/1-8.png" width = 250></center>
<center>图1-8 添加测试源文件</center>

### 1.3 C代码仿真/CSIM

​	点击Project->Run C Simulation或工具条中的CSim按钮，如图1-9所示。

<center><img src="../pictures/step1/1-9.png" width = 350></center>
<center>图1-9 点击进行CSim</center>

​	点击CSim后，直接在弹出的窗口中点击“OK”按钮以开始C语言仿真。CSim是纯软件的仿真，仅用于验证代码功能的正确性。

&emsp;&emsp;CSim完毕后，工作区将弹出一个名为`conv_core_csim.log`的CSim日志文件以便查看仿真结果，也可在控制台窗口查看源码的编译过程及相应的测试结果，如图1-10所示。

<center><img src="../pictures/step1/1-10.png" width = 650></center>
<center>图1-10 查看CSim结果</center>

### 1.4 C代码调试（非必要）

​	如果CSim时不能通过测试，则需要对代码进行debug。Vivado HLS工具的调试方法和Eclipse基本一致。

&emsp;&emsp;点击CSim按钮，在弹出的窗口中勾选Launch Debugger，如图1-11所示。

<center><img src="../pictures/step1/1-11.png" width = 300></center>
<center>图1-11 开始debug</center>

&emsp;&emsp;点击“OK”按钮，将自动进入跟Eclipse一样的Debug视图。可在代码行数的左侧空白处双击以添加断点，如图2-11所示。

<center><img src="../pictures/step1/1-12.png" width = 450></center>
<center>图1-12 添加断点</center>

&emsp;&emsp;点击工具条中的Step Into(F5)或Step Over(F6)按钮，开始debug。此时，可在右上方的Variable窗口查看变量的值，如图2-12所示。

<center><img src="../pictures/step1/1-13.png"></center>
<center>图1-13 debug时查看变量的值</center>

&emsp;&emsp;debug完成后，点击图2-12左上角形如红色正方形的按钮，或用快捷键Ctrl+F2结束调试。此时，再点击图2-12右上角的Synthesis按钮，回到图2-4所示的主界面/综合界面。