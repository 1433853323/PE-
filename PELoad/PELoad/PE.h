# ifndef _PE_H_
# define _PE_H_

# include <stdio.h>
# include <string.h>
# include <windows.h>



#define FILE_PATH "E:\\Reverse\\�ᰮ�ƽ⹤�߰�2.0\\�ᰮ�ƽ⹤�߰�\\Tools\\Others\\ipmsg.exe"
//#define FILE_PATH "C:/Users/Qiu_JY/Desktop/LoadPE/notepad.EXE"

int GetFileLength(FILE* pf, DWORD* Length);

int MyReadFile(void** pFileAddress);

int MyReadFile_V2(void** pFileAddress, PCHAR FilePath);

int MyWriteFile(PVOID pFileAddress, DWORD FileSize, LPSTR FilePath);

int FOA_TO_RVA(PVOID FileAddress, DWORD FOA, PDWORD pRVA);

int RVA_TO_FOA(PVOID FileAddress, DWORD RVA, PDWORD pFOA);

# endif
