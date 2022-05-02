/*
Programa      : dec2bin
Versão        : 02
Descrição     : Conversor decimal para binário.
Desenvolvedor : Eduardo Ono
Criado em     : 26/04/2022
Atualizado em : 26/04/2022
Comentários   : Utiliza apenas deslocamento de bits.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Entre com um número inteiro: ");
    scanf("%d", &num);

    for (i = 8 * sizeof num - 1; i >= 0; i--)
        printf("%d", (num >> i) & 1);
    printf("\n");

    return 0;
}
