#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char *letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p = letras;

    for (int i = 0; i < 5; i++)
        ++p;

    printf("%c\n", *(++p));

    return 0;
}

