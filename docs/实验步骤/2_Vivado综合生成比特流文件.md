# Vivado综合生成比特流文件

在这一步骤，你需要：

- 上一步生成的卷积IP核
- pool IP core，即池化操作IP核

池化IP核可以在[src文件夹](../../src/step2)下找到。

你将得到：

- mnist_cnn.bit
- mnist_cnn.tcl
- mnist_cnn.hwh

这三个文件将在上板时被用到。这三个文件可以在[这里](../../projects/VIvado/out)找到

### 2.1 创建Vivado项目