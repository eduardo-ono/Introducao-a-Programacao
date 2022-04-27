/*
Programa      : operador-gt-gt.c
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 26/04/2022
Atualizado em : 26/04/2022
Comentários   : 
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    num = num >> 1;
    printf("%d\n", num);

    return 0;
}
