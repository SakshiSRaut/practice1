#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

#include <limits>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <bitset>

#include <windows.h>
#include <tchar.h>
#include <stdio.h>


using namespace std;

int iNo1;

int iNo4;


int iNo2;
void get_file_list(string DATA_DIR)
{
    HANDLE hFind;
    WIN32_FIND_DATAA data;
	iNo2=4;
    hFind = FindFirstFileA(DATA_DIR.c_str(), &data);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            printf("%s\n", data.cFileName);
        } while (FindNextFileA(hFind, &data));
        FindClose(hFind);
    }
}
iNo1 =11;
//adding comments 
void enumaratefile()
{

    string DATA_DIR = "C:\\Users\\admin\\Desktop\\abc\\*.*";
    //string DATA_DIR = "c:\\Users\\GilLevi\\Downloads\\GraphsSURF\\GraphsSURF\\bark\\*.jpg";
    //string OUT_DIR = "D:\\drobpox\\Dropbox\\BinaryDescriptors\\LFW\\LATCH_TXT_FILES\\LATCH8";

    //Simple comments writing to check pull operation 

    get_file_list(DATA_DIR);

}
