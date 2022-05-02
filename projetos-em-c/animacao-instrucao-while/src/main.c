/*
Programa      : animação-instrução-while
Versão        : 1.0
Descrição     : Simula a execução de uma instrução "while".
Desenvolvedor : Eduardo Ono
Criado em     : 30/04/2022
Atualizado em : 01/05/2022
Comentários   : Somente para fins didáticos. Plataforma Windows.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "../../../lib/console.h"
// #include "../../../lib/console.c"

typedef struct
{
    char codigo[80];
    COORD pos;
    int length;
} Codigo;

void desenharBorda(Codigo);
void removerBorda(Codigo);
void input(COORD);
void desenharMemoriaVar(Codigo, int *);
char *posicaoCodigo(char **, const int, Codigo *);

int main()
{
    const int NUM_LINHAS = 15; // Número de elementos (linhas) do vetor "linhas"
    char *linhas[] = {
        "int main()",
        "{",
        "    int i;", // declaracao_var
        "",
        "    i = 0;", // definicao_var
        "",
        "    while (  i < 10  )", // condicional_while: i < 10
        "    {",
        "        printf(\"%d  \", i);", // instrucao1
        "",
        "        i++;", // instrucao2
        "    }",
        "",
        "    return 0;", // return0
        "}",
    };

    const int NUM_CODIGOS_INICIAIS = 2;
    char *strings_codigos_iniciais[] = {
        "int i;",
        "i = 0;",
    };

    const int NUM_CODIGOS_LOOP = 3;
    char *strings_codigos_loop[] = {
        "i < 10",
        "printf(\"%d  \", i);",
        "i++;",
    };

    Codigo codigo_final;

    COORD posAtual = {0, 0}, pos;
    Codigo varMemoria, codigos_iniciais[NUM_CODIGOS_INICIAIS], codigos_loop[NUM_CODIGOS_LOOP];
    const int N = 10;
    int i;

    /* Análise do "código do programa" */
    // Determina a posição de início dos códigos iniciais
    for (int i = 0; i < NUM_CODIGOS_INICIAIS; i++)
    {
        strcpy(codigos_iniciais[i].codigo, strings_codigos_iniciais[i]);
        codigos_iniciais[i].length = strlen(strings_codigos_iniciais[i]);
        posicaoCodigo(linhas, NUM_LINHAS, &codigos_iniciais[i]);
    }
    // Determina a posição de início dos códigos do loop
    for (int i = 0; i < NUM_CODIGOS_LOOP; i++)
    {
        strcpy(codigos_loop[i].codigo, strings_codigos_loop[i]);
        codigos_loop[i].length = strlen(strings_codigos_loop[i]);
        posicaoCodigo(linhas, NUM_LINHAS, &codigos_loop[i]);
    }
    // Determina a posição de início dos códigos finais
    strcpy(codigo_final.codigo, "return 0;");
    codigo_final.length = strlen(codigo_final.codigo);
    posicaoCodigo(linhas, NUM_LINHAS, &codigo_final);

    /* Tela de Saída */
    hideCursor(true);
    clrscr();
    // Imprime o código-fonte exemplo
    for (int i = 0; i < NUM_LINHAS; i++)
        printf("%s\n", linhas[i]);
    printf("\n====================== TELA DE SA%cDA ======================\n\n", 214);
    // Animação dos códigos iniciais
    posAtual = getCursorXY();
    gotoxy(0, 0);
    input(posAtual); // Aguarda input do usuário
    // Borda da variável i e do seu "placeholder"
    desenharBorda(codigos_iniciais[0]);
    // desenharBorda(var);
    varMemoria.pos.X = 60;
    varMemoria.pos.Y = 2;
    desenharVarMemoria(varMemoria.pos, &i, sizeof i);
    input(posAtual);
    removerBorda(codigos_iniciais[0]);
    desenharBorda(codigos_iniciais[1]);
    i = 0;
    desenharVarMemoria(varMemoria.pos, &i, sizeof i);
    input(posAtual);
    removerBorda(codigos_iniciais[1]);
    // Borda da condicional do "while"
    desenharBorda(codigos_loop[0]);
    input(posAtual);
    removerBorda(codigos_loop[0]);
    // Loop da instrução "while"
    for (i = 0; i < N; i++)
    {
        for (int j = 1; j < NUM_CODIGOS_LOOP; j++)
        {
            desenharBorda(codigos_loop[j]);
            gotoxy(posAtual.X, posAtual.Y);
            switch (j)
            {
            case 1:
                printf("%d  ", i);
                posAtual = getCursorXY();
                break;
            case 2:
                pos = getCursorXY();
                i++;
                desenharVarMemoria(varMemoria.pos, &i, sizeof i);
                i--;
                gotoxy(pos.X, pos.Y);
                break;
            }
            input(posAtual);
            removerBorda(codigos_loop[j]);
        }
        desenharBorda(codigos_loop[0]);
        input(posAtual);
        removerBorda(codigos_loop[0]);
    }
    // Borda do return
    desenharBorda(codigo_final);
    input(posAtual);
    removerBorda(codigo_final);
    gotoxy(posAtual.X, posAtual.Y + 2);
    hideCursor(false);

    return 0;
}

// Desenha a borda em relação à posição do primeiro caractere da instrução.
void desenharBorda(Codigo codigo)
{
    COORD pos = codigo.pos;
    int length = codigo.length;

    pos.X -= 2;
    pos.Y -= 1;
    gotoxy(pos.X, pos.Y);
    putchar(218); // caractere superior esquerdo
    for (int i = 0; i < length + 2; i++)
        putchar(196); // caractere superior
    putchar(191);     // caractere superior direito
    gotoxy(pos.X, ++pos.Y);
    putchar(179); // caractere lateral esquerda
    gotoxy(pos.X + length + 3, pos.Y);
    putchar(179); // caractere lateral direita
    gotoxy(pos.X, ++pos.Y);
    putchar(192); // caractere inferior esquerdo
    for (int i = 0; i < length + 2; i++)
        putchar(196); // caractere inferior
    putchar(217);     // caractere inferior direito
    gotoxy(codigo.pos.X, codigo.pos.Y);
}

// Remove a borda em função do primeiro caractere da instrução.
void removerBorda(Codigo codigo)
{
    COORD pos = codigo.pos;
    int length = codigo.length;

    gotoxy(pos.X - 2, pos.Y - 1);
    for (int i = 0; i < length + 4; i++)
        putchar(' '); // superior
    gotoxy(pos.X - 2, pos.Y);
    putchar(' '); // lateral esquerda
    gotoxy(pos.X + length + 1, pos.Y);
    putchar(' '); // lateral direita
    gotoxy(pos.X - 2, pos.Y + 1);
    for (int i = 0; i < length + 4; i++)
        putchar(' '); // inferior
    gotoxy(pos.X, pos.Y);
}

// Recebe o input para o próximo passo da execução.
void input(COORD pos)
{
    if (getch() == 27)
    {
        gotoxy(pos.X, pos.Y);
        printf("\n\n");
        exit(1);
    }
}

// Determina a posição X e Y do início de um código.
char *posicaoCodigo(char **linhas, const int NUM_LINHAS, Codigo *codigo)
{
    int linha;
    char *p;

    for (linha = 0; linha < NUM_LINHAS; linha++)
    {
        p = strstr(linhas[linha], codigo->codigo);
        if (p != NULL)
            break;
    }
    codigo->pos.X = (short)(p - linhas[linha]);
    codigo->pos.Y = (short)linha;

    return p;
}
