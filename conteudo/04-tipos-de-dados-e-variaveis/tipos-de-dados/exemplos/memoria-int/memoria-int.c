/*
Programa      : memoria-int.c
Versão        : 1.0
Descrição     : Representação de uma variável do tipo int na memória.
Desenvolvedor : Eduardo Ono
Criado em     : 01/05/2022
Atualizado em : 01/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

#include "../../../../../lib/console.h"
// #include "../../../../../lib/console.c"

int main()
{
    int num;
    COORD origem = { 21, 5 }; // { X > 20, Y > 4 }
    COORD savedPos;

    do
    {
        clrscr();
        printf("Entre com um numero inteiro ou 0 (zero) para sair: ");
        scanf("%d", &num);
        getchar();
        savedPos = getCursorXY();
        if (num == 0)
        {
            gotoxy(savedPos.X, savedPos.Y + 1);
            return 0;
        }
        printf("Tecle <ENTER> para continuar...");
        savedPos = getCursorXY();
        desenharVarMemoria(origem, (void *)&num, sizeof num);
        gotoxy(0, origem.Y + 2 * sizeof num + 2);
        printf("%d\n", num);
        getchar();
    } while (num != 0);


    return 0;
}
