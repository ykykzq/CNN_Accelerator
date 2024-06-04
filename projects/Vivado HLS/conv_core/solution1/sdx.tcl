# ==============================================================
# File generated on Tue Jun 04 13:29:14 +0800 2024
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../src/main.cpp -cflags { -Wno-unknown-pragmas}
add_files src/conv_core.h
add_files src/conv_core.cpp
set_part xc7z010clg400-1
create_clock -name default -period 10
