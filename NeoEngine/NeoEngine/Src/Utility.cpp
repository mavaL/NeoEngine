#include "stdafx.h"
#include "Utility.h"
#include "MathDef.h"

namespace Ext
{
	std::wstring AnsiToUnicode( const char* src )
	{
		WCHAR dest[MAX_PATH];
		MultiByteToWideChar( CP_ACP, 0, src,
			strlen(src)+1, dest, sizeof(dest)/sizeof(dest[0]) );

		return std::wstring(dest);
	}

	STRING UnicodeToEngine( const WCHAR* src )
	{
		char dest[MAX_PATH];
		WideCharToMultiByte( CP_ACP, 0, src, -1,
			dest, MAX_PATH, NULL, NULL );

		return std::string(dest);
	}

	//Helper function to count set bits in the processor mask.  
	static DWORD CountSetBits(ULONG_PTR bitMask)  
	{  
		DWORD LSHIFT = sizeof(ULONG_PTR)*8 - 1;  
		DWORD bitSetCount = 0;  
		ULONG_PTR bitTest = (ULONG_PTR)1 << LSHIFT;      
		DWORD i;  

		for (i = 0; i <= LSHIFT; ++i)  
		{  
			bitSetCount += ((bitMask & bitTest)?1:0);  
			bitTest/=2;  
		}  

		return bitSetCount;  
	}  

	DWORD GetLogicalCpuCount()
	{
		typedef BOOL (WINAPI *LPFN_GLPI)(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION, PDWORD);

		BOOL done;
		BOOL rc;
		DWORD returnLength;
		DWORD procCoreCount;
		DWORD byteOffset;
		PSYSTEM_LOGICAL_PROCESSOR_INFORMATION buffer, ptr;
		LPFN_GLPI Glpi;

		Glpi = (LPFN_GLPI) GetProcAddress(GetModuleHandle(TEXT("kernel32")), "GetLogicalProcessorInformation");

		if (NULL == Glpi)
		{
			//TODO: 难道XP系统就不能获取逻辑CPU个数了??
			MessageBoxA(nullptr, "Don't support GetLogicalProcessorInformation(). Assume one CPU!", "Error", MB_ICONERROR);
			return 1;
		}

		done = FALSE;
		buffer = NULL;
		returnLength = 0;

		while (!done) 
		{
			rc = Glpi(buffer, &returnLength);

			if (FALSE == rc) 
			{
				if (GetLastError() == ERROR_INSUFFICIENT_BUFFER) 
				{
					if (buffer) 
						free(buffer);

					buffer=(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)malloc(returnLength);
				} 
				else 
				{
					MessageBoxA(nullptr, "Error when called getLogicalProcessorInformation(). Assume one CPU!", "Error", MB_ICONERROR);
					return 1;
				}
			} 
			else done = TRUE;
		}

		DWORD nLogicalCpuCount = 0;
		procCoreCount = 0;
		byteOffset = 0;
		ptr=buffer;

		while (byteOffset + sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION) <= returnLength)   
		{
			switch (ptr->Relationship)   
			{  
			case RelationProcessorCore:  
				// A hyperthreaded core supplies more than one logical processor.  
				nLogicalCpuCount += CountSetBits(ptr->ProcessorMask);  
				break;
			}  
			byteOffset += sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION);  
			ptr++;  
		}  
		free (buffer);

		return nLogicalCpuCount;
	}
}