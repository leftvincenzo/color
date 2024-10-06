#include <iostream>
#include <windows.h>

using namespace std;

string red = "\033[31m";
string yel = "\033[33m";
string blu = "\033[34m";
string mag = "\033[35m";
string reset = "\033[0m"; 

void enableVirtualTerminalProcessing() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}

int main() {
    enableVirtualTerminalProcessing();

    reg();

    system("pause");
    return 0;
}

