/*
Programa      : divisores
Versão        : 1.0
Descrição     : Determina os divisores de um número inteiro.
Desenvolvedor : Eduardo Ono
Criado em     : 17/05/2022
Atualizado em : 17/05/2022
Comentários   : 
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Entre com um número inteiro: ");
    scanf("%d", &num);
    for (int divisor = 1; divisor <= num; divisor++)
        if (num % divisor == 0)
            printf("%d  ", divisor);
    putchar('\n');

    return 0;
}
