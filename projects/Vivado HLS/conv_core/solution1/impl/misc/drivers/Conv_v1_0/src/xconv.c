// ==============================================================
// File generated on Tue Jun 04 13:29:13 +0800 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv_CfgInitialize(XConv *InstancePtr, XConv_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv_Start(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL) & 0x80;
    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XConv_IsDone(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XConv_IsIdle(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XConv_IsReady(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XConv_EnableAutoRestart(XConv *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XConv_DisableAutoRestart(XConv *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_AP_CTRL, 0);
}

void XConv_Set_CHin_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_CHIN_V_DATA, Data);
}

u32 XConv_Get_CHin_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_CHIN_V_DATA);
    return Data;
}

void XConv_Set_Hin_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_HIN_V_DATA, Data);
}

u32 XConv_Get_Hin_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_HIN_V_DATA);
    return Data;
}

void XConv_Set_Win_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_WIN_V_DATA, Data);
}

u32 XConv_Get_Win_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_WIN_V_DATA);
    return Data;
}

void XConv_Set_CHout_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_CHOUT_V_DATA, Data);
}

u32 XConv_Get_CHout_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_CHOUT_V_DATA);
    return Data;
}

void XConv_Set_Kx_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_KX_V_DATA, Data);
}

u32 XConv_Get_Kx_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_KX_V_DATA);
    return Data;
}

void XConv_Set_Ky_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_KY_V_DATA, Data);
}

u32 XConv_Get_Ky_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_KY_V_DATA);
    return Data;
}

void XConv_Set_Sx_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_SX_V_DATA, Data);
}

u32 XConv_Get_Sx_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_SX_V_DATA);
    return Data;
}

void XConv_Set_Sy_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_SY_V_DATA, Data);
}

u32 XConv_Get_Sy_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_SY_V_DATA);
    return Data;
}

void XConv_Set_mode_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_MODE_V_DATA, Data);
}

u32 XConv_Get_mode_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_MODE_V_DATA);
    return Data;
}

void XConv_Set_relu_en_V(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_RELU_EN_V_DATA, Data);
}

u32 XConv_Get_relu_en_V(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_RELU_EN_V_DATA);
    return Data;
}

void XConv_Set_feature_in(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FEATURE_IN_DATA, Data);
}

u32 XConv_Get_feature_in(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FEATURE_IN_DATA);
    return Data;
}

void XConv_Set_W(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_W_DATA, Data);
}

u32 XConv_Get_W(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_W_DATA);
    return Data;
}

void XConv_Set_bias(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_BIAS_DATA, Data);
}

u32 XConv_Get_bias(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_BIAS_DATA);
    return Data;
}

void XConv_Set_feature_out(XConv *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FEATURE_OUT_DATA, Data);
}

u32 XConv_Get_feature_out(XConv *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_FEATURE_OUT_DATA);
    return Data;
}

void XConv_InterruptGlobalEnable(XConv *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_GIE, 1);
}

void XConv_InterruptGlobalDisable(XConv *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_GIE, 0);
}

void XConv_InterruptEnable(XConv *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IER);
    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IER, Register | Mask);
}

void XConv_InterruptDisable(XConv *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IER);
    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IER, Register & (~Mask));
}

void XConv_InterruptClear(XConv *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_ISR, Mask);
}

u32 XConv_InterruptGetEnabled(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_IER);
}

u32 XConv_InterruptGetStatus(XConv *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XConv_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV_AXILITES_ADDR_ISR);
}

