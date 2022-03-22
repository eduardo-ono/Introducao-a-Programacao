#include <stdio.h>

void bordaSuperior()
{
    int i;

    printf("\n     %c", 218); // Canto superior esquerdo
    // Borda superior
    for (i = 1; i < 32; i++)
        printf("%c%c%c%c", 196, 196, 196, 194);
    printf("%c%c%c%c", 196, 196, 196, 191); // Canto superior direito
}

void bordaInterna()
{
    int i;

    printf("\n     %c", 195); // Borda esquerda
    // Linha horizontal
    for (i = 1; i < 32; i++)
        printf("%c%c%c%c", 196, 196, 196, 197);
    printf("%c%c%c%c", 196, 196, 196, 180); // Borda direita
}

void bordaInferior()
{
    int i;

    printf("\n     %c", 192); // Canto superior esquerdo
    // Borda superior
    for (i = 1; i < 32; i++)
        printf("%c%c%c%c", 196, 196, 196, 193);
    printf("%c%c%c%c", 196, 196, 196, 217); // Canto superior direito
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
    bordaSuperior();
    for (i = 32; i < 256; i++)
    {
        if (i % 32 == 0 )
        {
            if (i > 32)
            {
                printf("%c", 179);
                bordaInterna();
            }
            printf("\n%3d  ", i);
        } 
        printf("%c %c ", 179, i );
    }
    bordaInferior();
    printf("\n");

    return 0;
}
