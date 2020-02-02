# include <windows.h>
# include <stdio.h>
# include <tlhelp32.h>
# include <stdbool.h>


int main(){
    int countProcess=0;
    PROCESSENTRY32 currentProcess;
    currentProcess.dwSize = sizeof(currentProcess);
    HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);

    if (hProcess == NULL)
    {
        printf("CreateToolhelp32Snapshot()调用失败\n");
        return -1;
    }
    bool bMore=Process32First(hProcess, &currentProcess);
    while (bMore)
    {
        printf("PID=%5u    PName=%s\n", currentProcess.th32ProcessID, currentProcess.szExeFile);
        bMore=Process32Next(hProcess, &currentProcess);
        countProcess++;
    }
    CloseHandle(hProcess);
    printf("共有以上%d个进程在运行\n", countProcess);
    printf("调试使用————————————————————————————————————————————");
    system("pause");
    return 0;
    
    
}