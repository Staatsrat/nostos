#include <iostream>
#include <windows.h>
#pragma comment(lib, "user32.lib")

int main() {
    SYSTEM_INFO siSysInfo;
    GetSystemInfo(&siSysInfo);
    std::cout << siSysInfo.dwProcessorType;

    
    return 0;
}
