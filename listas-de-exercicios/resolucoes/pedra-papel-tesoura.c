#include <stdio.h>

int main()
{
    int a, b;

    printf("Entre com as duas \"maos\": ");
    scanf("%d%d", &a, &b);

    // Validação da entrada
    if ((a < 0 || a > 4 || b < 0 || b > 4))
    {
        printf("Valores invalidos!\n");
        return 1;
    }

    if (a == b)
        printf("empate\n");
    else if (b == ((a + 1) % 5) || b == ((a + 2) % 5))
        printf("%d\n", a);
    else 
        printf("%d\n", b); 

    return 0;
}
