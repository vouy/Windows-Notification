#include <windows.h>
#include <iostream>

int main()
{
    NOTIFYICONDATA Data = {};
    Data.cbSize = sizeof(NOTIFYICONDATA);
    Data.hWnd = GetConsoleWindow();
    Data.uID = 0;
    Data.uFlags = NIF_INFO;
    Data.dwInfoFlags = NIIF_INFO;
    lstrcpy(Data.szInfoTitle, L"Windows Notification");
    lstrcpy(Data.szInfo, L"Windows Notification");
    Shell_NotifyIcon(NIM_ADD, &Data);
    std::cin.get();
}