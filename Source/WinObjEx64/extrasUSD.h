/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2015 - 2016
*
*  TITLE:       EXTRASUSD.H
*
*  VERSION:     1.41
*
*  DATE:        01 Mar 2015
*
*  Common header file for Extras User Shared Data dialog.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

static LPWSTR T_PROCESSOR_FEATURES[] = {
	L"PF_FLOATING_POINT_PRECISION_ERRATA",
	L"PF_FLOATING_POINT_EMULATED",
	L"PF_COMPARE_EXCHANGE_DOUBLE",
	L"PF_MMX_INSTRUCTIONS_AVAILABLE",
	L"PF_PPC_MOVEMEM_64BIT_OK",
	L"PF_ALPHA_BYTE_INSTRUCTIONS",
	L"PF_XMMI_INSTRUCTIONS_AVAILABLE",
	L"PF_3DNOW_INSTRUCTIONS_AVAILABLE",
	L"PF_RDTSC_INSTRUCTION_AVAILABLE",
	L"PF_PAE_ENABLED",
	L"PF_XMMI64_INSTRUCTIONS_AVAILABLE",
	L"PF_SSE_DAZ_MODE_AVAILABLE",
	L"PF_NX_ENABLED",
	L"PF_SSE3_INSTRUCTIONS_AVAILABLE",
	L"PF_COMPARE_EXCHANGE128",
	L"PF_COMPARE64_EXCHANGE128",
	L"PF_CHANNELS_ENABLED",
	L"PF_XSAVE_ENABLED",
	L"PF_ARM_VFP_32_REGISTERS_AVAILABLE",
	L"PF_ARM_NEON_INSTRUCTIONS_AVAILABLE",
	L"PF_SECOND_LEVEL_ADDRESS_TRANSLATION",
	L"PF_VIRT_FIRMWARE_ENABLED",
	L"PF_RDWRFSGSBASE_AVAILABLE",
	L"PF_FASTFAIL_AVAILABLE",
	L"PF_ARM_DIVIDE_INSTRUCTION_AVAILABLE",
	L"PF_ARM_64BIT_LOADSTORE_ATOMIC",
	L"PF_ARM_EXTERNAL_CACHE_AVAILABLE",
	L"PF_ARM_FMAC_INSTRUCTIONS_AVAILABLE",
	L"PF_RDRAND_INSTRUCTION_AVAILABLE",
	L"PF_ARM_V8_INSTRUCTIONS_AVAILABLE",
	L"PF_ARM_V8_CRYPTO_INSTRUCTIONS_AVAILABLE",
	L"PF_ARM_V8_CRC32_INSTRUCTIONS_AVAILABLE",
	L"PF_RDTSCP_INSTRUCTION_AVAILABLE",
	L""
};

static LPCWSTR T_SharedDataFlags[9] = {
	L"DbgErrorPortPresent",
	L"DbgElevationEnabled",
	L"DbgVirtEnabled",
	L"DbgInstallerDetectEnabled",
	L"DbgLkgEnabled",
	L"DbgDynProcessorEnabled",
	L"DbgConsoleBrokerEnabled",
	L"DbgSecureBootEnabled",
	L"DbgMultiSessionSku"
};

#define MAX_KNOWN_SUITEMASKS 18
static VALUE_DESC SuiteMasks[MAX_KNOWN_SUITEMASKS] = {
	{ L"ServerNT", VER_SERVER_NT },
	{ L"WorkstationNT", VER_WORKSTATION_NT },
	{ L"SmallBusiness", VER_SUITE_SMALLBUSINESS },
	{ L"Enterprise", VER_SUITE_ENTERPRISE },
	{ L"BackOffice", VER_SUITE_BACKOFFICE },
	{ L"Communications", VER_SUITE_COMMUNICATIONS },
	{ L"Terminal", VER_SUITE_TERMINAL },
	{ L"SmallBussinessRestricted", VER_SUITE_SMALLBUSINESS_RESTRICTED },
	{ L"EmbeddedNT", VER_SUITE_EMBEDDEDNT },
	{ L"DataCenter", VER_SUITE_DATACENTER },
	{ L"SingleUserTS", VER_SUITE_SINGLEUSERTS },
	{ L"Personal", VER_SUITE_PERSONAL },
	{ L"Blade", VER_SUITE_BLADE },
	{ L"EmbeddedRestricted", VER_SUITE_EMBEDDED_RESTRICTED },
	{ L"SecurityAppliance", VER_SUITE_SECURITY_APPLIANCE },
	{ L"StorageServer", VER_SUITE_STORAGE_SERVER },
	{ L"ComputeServer", VER_SUITE_COMPUTE_SERVER },
	{ L"HomeServer", VER_SUITE_WH_SERVER }
};

VOID extrasCreateUsdDialog(
	_In_ HWND hwndParent
	);
