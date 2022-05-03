/*
Programa      : memoria-float.c
Versão        : 1.0
Descrição     : Representação de uma variável do tipo float na memória.
Desenvolvedor : Eduardo Ono
Criado em     : 01/05/2022
Atualizado em : 03/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

#include "../../../../../lib/console.h"
// #include "../../../../../lib/console.c"

int main()
{
    float num;
    COORD origem = { 21, 5 }; // { 20 < X < 60, 4 < Y < 15 }
    COORD savedPos;

    do
    {
        clrscr();
        printf("Entre com um numero inteiro ou 0 (zero) para sair: ");
        scanf("%f", &num);
        getchar();
        savedPos = getCursorXY();
        if (num == 0)
        {
            gotoxy(savedPos.X, savedPos.Y + 1);
            return 0;
        }
        gotoxy(0, origem.Y + 2 * sizeof num + 2);
        desenharVarMemoria(origem, (void *)&num, sizeof num);
        gotoxy(savedPos.X, savedPos.Y);
        printf("Tecle <ENTER> para continuar...");
        savedPos = getCursorXY();
        getchar();
    } while (num != 0);

    return 0;
}
