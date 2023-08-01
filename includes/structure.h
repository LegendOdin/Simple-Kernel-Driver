#pragma once
#include <ntdef.h>
#include <ntddk.h>
#include <ntifs.h>
#include <ntstrsafe.h>
#include <ntimage.h>

//Define usables
typedef unsigned char       BYTE;
typedef struct _RTL_PROCESS_MODULE_INFO{
    HANDLE Section; //Leave Empty or crash away
    PVOID  BaseMap; //Must have entry
    PVOID  MapImage; //Must have entry
    ULONG  SizeofImage; //
    ULONG  Flags;
    USHORT LoadOrderIndex;
    USHORT InitiateOrderIndex;
    USHORT OffsetFilename;
    UCHAR FilePath[MAXIMUM_FILE_NAME];
} _RTL_PROCESS_MODULE_INFO, * PRTL_PROCESS_MODULE_INFO;

