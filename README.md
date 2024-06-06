# 基于PYQN的深度学习加速器

## 概述

本实验参考了.....

本实验的步骤为Vitis HLS生成IP核、Vivado生成Block Design，最后下板进行测试。详见部署步骤。

为了方便，本仓库提供了上述步骤中的全部中间工程及生成文件。

## 软硬件环境

### 硬件环境

- 一台可以安装Vivado、有网线接口、USB接口的电脑。
- PYNQ开发板。FPGA型号为<font color=red>xc7z010clg400-1</font>，PS部分型号为<font color=red>ARM Cortex-A9</font>。

### 软件环境

- Vivado 2018.3，请在[此处](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/vivado-design-tools/archive.html)找到安装包。经检验可以在Windows11系统中安装。
- MobaXTerm。可以直接安装[最新版](https://mobaxterm.mobatek.net/)。
- 开发板驱动程序。请在[此处](./tools/镜像烧录)找到安装包与安装方法。
- 镜像制作工具。请在[此处](./tools/开发板驱动)找到该程序。

## 项目结构

```

```

## 部署步骤

直接参考[/docs/实验步骤](./docs/实验步骤)。其他文档、软件、工程均可以由此自顶向下的学习。

## TO DO LIST

这里为后来者列了一系列可以继续迭代的方向。

- [ ] 更新POOL核等文件，使得工程可以在**更高版本的Vivado软件**中完成综合。
- [ ] 重新训练网络，获得**更好的权重**，提升网络的精度。
- [ ] 基于卷积、池化、全连接算子，探索**更多的CNN网络结构**，提高精度或完成其他任务。
