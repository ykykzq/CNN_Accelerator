// ==============================================================
// File generated on Tue Jun 04 13:29:13 +0800 2024
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv.h"

extern XConv_Config XConv_ConfigTable[];

XConv_Config *XConv_LookupConfig(u16 DeviceId) {
	XConv_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV_NUM_INSTANCES; Index++) {
		if (XConv_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv_Initialize(XConv *InstancePtr, u16 DeviceId) {
	XConv_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

