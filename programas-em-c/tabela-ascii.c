#include <stdio.h>

int main()
{
    int i;

    printf("\nTABELA ASCII ESTENDIDA (8-bit)");
    printf("\n------------------------------\n");

    /*
        Os 32 primneiros caracteres da tabela ASCII (0 a 31) são caracteres de controle e,
        portanto, não são imprimíveis.
    */
    for (i = 32; i < 256; i++)
    {
        if (i % 32 == 0) printf("\n%3d  ", i);
        printf("%c ", i);
    }
    printf("\n");

    return 0;
}
