// ==============================================================
// File generated on Fri Dec 06 22:28:59 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xpool.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XPool_CfgInitialize(XPool *InstancePtr, XPool_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XPool_Start(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL) & 0x80;
    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XPool_IsDone(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XPool_IsIdle(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XPool_IsReady(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XPool_EnableAutoRestart(XPool *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XPool_DisableAutoRestart(XPool *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_AP_CTRL, 0);
}

void XPool_Set_CHin_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_CHIN_V_DATA, Data);
}

u32 XPool_Get_CHin_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_CHIN_V_DATA);
    return Data;
}

void XPool_Set_Hin_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_HIN_V_DATA, Data);
}

u32 XPool_Get_Hin_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_HIN_V_DATA);
    return Data;
}

void XPool_Set_Win_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_WIN_V_DATA, Data);
}

u32 XPool_Get_Win_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_WIN_V_DATA);
    return Data;
}

void XPool_Set_Kx_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_KX_V_DATA, Data);
}

u32 XPool_Get_Kx_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_KX_V_DATA);
    return Data;
}

void XPool_Set_Ky_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_KY_V_DATA, Data);
}

u32 XPool_Get_Ky_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_KY_V_DATA);
    return Data;
}

void XPool_Set_mode_V(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_MODE_V_DATA, Data);
}

u32 XPool_Get_mode_V(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_MODE_V_DATA);
    return Data;
}

void XPool_Set_feature_in(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_FEATURE_IN_DATA, Data);
}

u32 XPool_Get_feature_in(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_FEATURE_IN_DATA);
    return Data;
}

void XPool_Set_feature_out(XPool *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_FEATURE_OUT_DATA, Data);
}

u32 XPool_Get_feature_out(XPool *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_FEATURE_OUT_DATA);
    return Data;
}

void XPool_InterruptGlobalEnable(XPool *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_GIE, 1);
}

void XPool_InterruptGlobalDisable(XPool *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_GIE, 0);
}

void XPool_InterruptEnable(XPool *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_IER);
    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_IER, Register | Mask);
}

void XPool_InterruptDisable(XPool *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_IER);
    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_IER, Register & (~Mask));
}

void XPool_InterruptClear(XPool *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPool_WriteReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_ISR, Mask);
}

u32 XPool_InterruptGetEnabled(XPool *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_IER);
}

u32 XPool_InterruptGetStatus(XPool *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPool_ReadReg(InstancePtr->Axilites_BaseAddress, XPOOL_AXILITES_ADDR_ISR);
}

