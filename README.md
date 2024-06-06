# 基于PYQN的深度学习加速器

## 概述（待完善）

本实验参考了.....。关于本次实验的理论部分，可以参考.......。

本实验建议的完成流程为......

为了便于读者从任何一个步骤开始实验，本仓库提供了上述步骤中的全部中间工程及生成文件。

## 软硬件环境

### 硬件环境

- 一台可以安装Vivado、有网线接口、USB接口的电脑。
- PYNQ开发板。FPGA型号为<font color=red>xc7z010clg400-1</font>，PS部分型号为<font color=red>ARM Cortex-A9</font>。

> **笔者自费买了一块PYNQ7010板，可以联系笔者进行借用**

### 软件环境

- Vivado 2018.3，请在[此处](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/archive.html)找到安装包。经检验可以在Windows11系统中安装。
- MobaXTerm。可以直接安装[最新版](https://mobaxterm.mobatek.net/)。
- 开发板驱动程序。请在[此处](./tools/开发板驱动软件)找到安装包与安装方法。
- 镜像制作工具。请在[此处](./tools/镜像烧录软件)找到该程序。

## 项目结构

```
├─docs
│  ├─pictures
│  ├─其他文档                    # 包括debug手册、PYNQ板说明文档等
│  └─实验步骤                    # 请按照此文件夹下文档完成实验
├─projects
│  ├─Vivado
│  │  ├─IPs                     # 工程中使用到的卷积与池化IP核
│  │  │  ├─conv
│  │  │  └─pool
│  │  ├─out                     # 放置综合生成的.bit等
│  │  └─project_1               # Vivado工程文件
│  │      
│  └─Vivado HLS
│      ├─conv_core              # Vitis HLS工程文件
│      ├─out
│      └─src                    # 设计中使用的源码
├─src 
│  ├─step1
│  ├─step2
│  └─step3                      # 上板所需文件，包括.ipynb、MNIST数据集等
└─tools                         # 完成实验必须用到的软件工具
    ├─PYNQ镜像
    ├─开发板驱动软件
    └─镜像烧录软件
```

## 部署步骤

本实验的步骤为Vitis HLS生成IP核、Vivado生成Block Design，最后下板进行测试。详见[/docs/实验步骤](./docs/实验步骤)。

## TO DO LIST

这里为后来者列了一系列可以继续迭代的方向。

- [ ] 更新POOL核等文件，使得工程可以在**更高版本的Vivado软件**中完成综合。
- [ ] 重新训练网络，获得**更好的权重**，提升网络的精度。
- [ ] 基于卷积、池化、全连接算子，探索**更多的CNN网络结构**，提高精度或完成其他任务。

欢迎各位提Pull Request/联系笔者成为Collaborator！
