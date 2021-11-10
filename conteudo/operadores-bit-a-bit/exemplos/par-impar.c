#include <stdio.h>

int main()
{
    int num = 123456;

    if ((num & 1) == 0)
        printf("O numero %d e par!", num);
    if ((num & 1) == 1)
        printf("O numero %d e impar!", num);

    return 0;
}
