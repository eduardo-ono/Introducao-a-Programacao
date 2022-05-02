/*
Programa      : console.c
Versão        : 1.0
Descrição     : Biblioteca para manipulação da tela da saída.
Desenvolvedor : Eduardo Ono
Criado em     : 01/05/2022
Atualizado em : 01/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

#include "console.h"

void clrscr()
{
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
#endif
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}

void hideCursor(bool flag)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 10;
    info.bVisible = flag ? FALSE : TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(int x, int y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(hStdout, position);
}

COORD getCursorXY()
{
    COORD pos;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
    {
        pos.X = csbi.dwCursorPosition.X;
        pos.Y = csbi.dwCursorPosition.Y;
    }
    return pos;
}

void dec2bin(char decimal, char bin[])
{
    int j = 0;

    for (int i = 7; i >= 0; i--, j++)
    {
        bin[j] = (decimal >> i) & 1 ? '1' : '0';
    }
    bin[j] = '\0';
}

// Desenha uma representação de uma variável na memória:
// int size (bytes)
void desenharVarMemoria(COORD origem, void *endereco, int size)
{
    const int NUM_BITS = 8; // Número de bits por célula
    COORD pos = origem;
    char divisoriaHorizontal[32];
    int i;
    char *p = (char *)endereco;
    char binario[NUM_BITS + 1];

    // Divisória horizontal
    for (i = 0; i < NUM_BITS + 2 && i < 32 - 1; i++)
        divisoriaHorizontal[i] = 196; // caractere superior
    divisoriaHorizontal[i] = '\0';

    pos.X -= 2;
    pos.Y--;
    for (int i = 0; i < size; i++)
    {
        gotoxy(pos.X, pos.Y);
        putchar(195); // caractere divisao esquerda
        printf("%s", divisoriaHorizontal);
        putchar(180); // caractere divisao direita
        gotoxy(pos.X, ++pos.Y);
        putchar(179); // caractere lateral esquerda
        dec2bin(*p, binario);
        printf(" %s", binario);
        p++;
        gotoxy(pos.X + NUM_BITS + 3, pos.Y);
        putchar(179); // caractere lateral direita
        gotoxy(pos.X, ++pos.Y);
        putchar(195); // caractere inferior esquerdo
        printf("%s", divisoriaHorizontal);
        putchar(180); // caractere inferior direito
    }

    pos = origem;
    pos.X = pos.X > 21 ? pos.X - 21 : 0;
    // Imprime os endereços de memória
    for (int i = 0; i < size; i++)
    {
        gotoxy(pos.X, pos.Y);
        printf("0x%p", p);
        p++;
        pos.Y += 2;
    }
    pos = origem;
}
