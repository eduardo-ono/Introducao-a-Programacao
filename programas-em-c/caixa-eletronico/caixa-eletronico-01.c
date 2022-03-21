/*
    Programa         : Caixa Eletrônico
    Versão           : 1
    Desenvolvido por : Eduardo Ono
    Data da criação  : 17/03/2022
    Atualizado em    : 17/03/2022
    Descrição        : Determina a quantidade mínima de cada nota fornecida por um caixa eletrônico,
                        mediante o valor do saque (somente valores inteiros).
    OBS.             : 
 */

#include <stdio.h>

int main()
{
    int saque;
    int notas200, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Entre com o valor do saque: ");
    scanf("%d", &saque);

    notas200 = saque / 200;
    saque = saque % 200;
    notas100 = saque / 100;
    saque = saque % 100;
    notas50 = saque / 50;
    saque = saque % 50;
    notas20 = saque / 20;
    saque = saque % 20;
    notas10 = saque / 10;
    saque = saque % 10;
    notas5 = saque / 5;
    saque = saque % 5;
    notas2 = saque / 2;
    notas1 = saque % 2;

    printf("Notas de 200,00 = %d\n", notas200);
    printf("Notas de 100,00 = %d\n", notas100);
    printf("Notas de  50,00 = %d\n", notas50);
    printf("Notas de  20,00 = %d\n", notas20);
    printf("Notas de  10,00 = %d\n", notas10);
    printf("Notas de   5,00 = %d\n", notas5);
    printf("Notas de   2,00 = %d\n", notas2);
    printf("Notas de   1,00 = %d\n", notas1);

    return 0;
}
