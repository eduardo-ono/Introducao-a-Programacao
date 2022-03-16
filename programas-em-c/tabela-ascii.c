#include <stdio.h>

void imprimirPos(int inicio, int fim)
{
    int i, unidade;

    printf("\n     ");
    for (i = inicio; i < fim; i++)
    {
        unidade = i % 10;
        printf("%d ", unidade);
    }
    printf("\n");
}

int main()
{
    int i;

    printf("\nTABELA ASCII ESTENDIDA (8-bit)");
    printf("\n------------------------------\n");
    /*
        Os 32 primneiros caracteres da tabela ASCII (0 a 31) são caracteres de controle e,
        portanto, não são imprimíveis.
    */
    printf("     ");
    for (i = 32; i < 256; i++)
    {
        if (i % 32 == 0)
        {
          printf("\n");
          imprimirPos(i, i + 32);
          printf("%3d  ", i);  
        } 
        printf("%c ", i);
    }
    printf("\n");

    return 0;
}
