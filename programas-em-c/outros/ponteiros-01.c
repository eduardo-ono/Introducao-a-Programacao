#include <stdio.h>

int main()
{
    int a;
    int *p;

    p = &a;
    printf("Entre com um valor inteiro: ");
    scanf("%d", p);

    printf("Valor digitado = %d\n", a);

    return 0;
}
