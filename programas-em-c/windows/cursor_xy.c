/*
Programa      : cursor_xy
Versão        : 1
Descrição     : Move o cursor para a posição x, y.
Desenvolvedor : Eduardo Ono
Criado em     : 28/03/2022
Atualizado em : 28/03/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

void clrscr();
void gotoxy(int, int);

int main()
{
    int x = 10, y = 10;

    clrscr();
    gotoxy(x, y);
    printf("OK");
    printf("\n");

    return 0;
}

// Limpa a tela.
void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

// Posiciona o cursor na posição x, y (linha, coluna)
void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}
