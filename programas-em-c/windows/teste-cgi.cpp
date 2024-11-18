#define _WIN32_WINNT 0x601
#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    // Get window handle to console, and device context
    HWND console_handle = GetConsoleWindow();
    HDC dng = GetDC(console_handle);

    while (1)
    for (int i = 1000; i < 1020; i++)
        for (int j = 500; j < 520; j++)
            SetPixel(dng, i, j, RGB(255, 0 , 0));
    
    COLORREF color = GetPixel(dng, 1000, 500);

    cout << (int)GetRValue(color) << endl;
    cout << (int)GetGValue(color) << endl;
    cout << (int)GetBValue(color) << endl;

    ReleaseDC(console_handle, dng);

    getchar();

    return 0;
}
