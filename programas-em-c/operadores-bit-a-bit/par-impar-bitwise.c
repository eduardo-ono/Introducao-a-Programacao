#include <stdio.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    
    if ((num & 1) == 0)
        printf("Par\n");
    if ((num & 1) == 1)
        printf("Impar\n");

    return 0;
}
