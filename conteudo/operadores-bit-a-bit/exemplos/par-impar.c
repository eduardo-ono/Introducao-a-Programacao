#include <stdio.h>

int main()
{
    int num = 123456;

    if ((num & 1) == 0)
        printf("Par\n");
    if ((num & 1) == 1)
        printf("Impar\n");

    return 0;
}
