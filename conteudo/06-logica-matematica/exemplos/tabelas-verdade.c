/*
Programa      : tabelas-verdade.c
Versão        : 1
Descrição     : Imprime as Tabelas-Verdade
Desenvolvedor : Eduardo Ono
Criado em     : 31/03/2022
Atualizado em : 31/03/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void formatarCaracteres(char *, int);
void drawHorizontalBorder(char, int, int *, const int);
void imprimirLinha(int, int, int);

int main()
{
    int a, b, s;
    int v[10];
    char tituloTabela[79];

    strcpy(tituloTabela, "| A | B | A.B |");
    formatarCaracteres(tituloTabela, strlen(tituloTabela));
    printf("Tabela-Verdade do \"E\":\n");
    v[0] = 4; v[1] = 8;
    drawHorizontalBorder('T', 15, v, 2);
    printf("%s\n", tituloTabela);
    drawHorizontalBorder('I', 15, v, 2);
    a = 0; b = 0;
    s = a && b;
    imprimirLinha(a, b, s);
    a = 0; b = 1;
    s = a && b;
    imprimirLinha(a, b, s);
    a = 1; b = 0;
    s = a && b;
    imprimirLinha(a, b, s);
    a = 1; b = 1;
    s = a && b;
    imprimirLinha(a, b, s);
    drawHorizontalBorder('B', 15, v, 2);

    strcpy(tituloTabela, "| A | B | A+B |");
    formatarCaracteres(tituloTabela, strlen(tituloTabela));
    printf("Tabela-Verdade do \"OU\":\n");
    v[0] = 4; v[1] = 8;
    drawHorizontalBorder('T', 15, v, 2);
    printf("%s\n", tituloTabela);
    drawHorizontalBorder('I', 15, v, 2);
    a = 0; b = 0;
    s = a || b;
    imprimirLinha(a, b, s);
    a = 0; b = 1;
    s = a || b;
    imprimirLinha(a, b, s);
    a = 1; b = 0;
    s = a || b;
    imprimirLinha(a, b, s);
    a = 1; b = 1;
    s = a || b;
    imprimirLinha(a, b, s);
    drawHorizontalBorder('B', 15, v, 2);

    return 0;
}

// Formata os caracteres do título e das bordas da tabela.
void formatarCaracteres(char *v, const int N)
{
    int i;

    for (i = 0; i < N; i++)
    {
        switch (v[i])
        {
            case '|': v[i] = 179; break;
            case '.': v[i] = 250; break;
        }
    }
}

// Desenha a borda superior da tabela.
void drawHorizontalBorder(char borderPos, int size, int v[], const int N)
{
    int i, j = 0;
    char leftCorner = 218, rightCorner = 191, div = 194;

    switch (borderPos)
    {
        case 'T':
            leftCorner = 218;
            rightCorner = 191;
            div = 194;
            break;
        case 'B':
            leftCorner = 192;
            rightCorner = 217;
            div = 193;
            break;
        case 'I':
            leftCorner = 195;
            rightCorner = 180;
            div = 197;
    }

    printf("%c", leftCorner);
    for (i = 1; i < size-1; i++)
    {
        if (i == v[j])
        {
            printf("%c", div);
            j++;
        }
        else
            printf("%c", 196);
    }
    printf("%c\n", rightCorner);
}

void imprimirLinha(int a, int b, int s)
{
     printf("%c %d %c %d %c  %d  %c\n", 179, a, 179, b, 179, s, 179);
}
