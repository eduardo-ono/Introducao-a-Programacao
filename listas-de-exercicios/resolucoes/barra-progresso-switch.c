#include <stdio.h>
#include <math.h>

int main()
{
    float progresso;
    int barras = 0;
    char barra = 177;

    printf("Entre com o valor do progresso [0-100]: ");
    scanf("%f", &progresso);

    // Validação da entrada.
    if (progresso < 0 || progresso > 100)
    {
        printf("Entrada invalida!\n");
        return 1;
    }

    barras = (int)progresso / 10;
    switch (barras)
    {
        case 10: printf("%c", barra);
        case  9: printf("%c", barra);
        case  8: printf("%c", barra);
        case  7: printf("%c", barra);
        case  6: printf("%c", barra);
        case  5: printf("%c", barra);
        case  4: printf("%c", barra);
        case  3: printf("%c", barra);
        case  2: printf("%c", barra);
        case  1: printf("%c", barra); break;
        case  0: printf("|");
    }
    printf(" [%.1f %%]\n", progresso);

    return 0;
}
