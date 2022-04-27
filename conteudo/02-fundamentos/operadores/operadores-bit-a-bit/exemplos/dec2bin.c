/*
Programa      : dec2bin.c
Versão        : 1.0
Descrição     : Conversor decimal para binário.
Desenvolvedor : Eduardo Ono
Criado em     : 26/04/2022
Atualizado em : 26/04/2022
Comentários   : Utiliza apenas deslocamento de bits.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--)
    {
        if ((i - 3) % 4 == 0)
            printf(" ");
        printf("%d", num >> i);

    }
    printf("\n");

    return 0;
}
