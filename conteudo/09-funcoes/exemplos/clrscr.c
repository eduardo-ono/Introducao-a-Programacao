#include <stdio.h>
#include <stdlib.h>

// Protótipo da função.
void clrscr();

int main()
{
    clrscr();
    printf("Ol%c mundo!\n", 160);

    return 0;
}

void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
