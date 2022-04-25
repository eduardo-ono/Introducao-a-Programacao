/*
Programa      : tutorial_for
Versão        : 1.0
Descrição     : Simula a execução de uma instrução for.
Desenvolvedor : Eduardo Ono
Criado em     : 24/04/2022
Atualizado em : 25/04/2022
Comentários   : Somente para fins didáticos. Somente para plataforma Windows.
*/

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

void clrscr();

void hideCursor(bool);
void gotoxy(int, int);
COORD getCursorXY();
void desenharBorda(COORD, int);
void removerBorda(COORD, int);
void input(COORD);

int main()
{
    const int N = 10;
    int i;
    COORD pos, posAtual, posDeclaracaoVarI, posVarI, posForCentro;
    int largura;

    hideCursor(true);
    clrscr();
    // Imprime o código-fonte exemplo na tela de saída
    printf("#include <stdio.h>\n");
    printf("\n");
    printf("int main()\n");
    printf("{\n");
    printf("    int i;\n");
    printf("\n");
    printf("\n");
    printf("    for (  i = 0  ;  i < %d  ;  i++  )\n", N);
    printf("    {\n");
    printf("        printf(\"%%d \", i);\n");
    printf("    }\n\n");
    printf("    return 0;\n");
    printf("}\n");
    printf("\n");
    printf("// Tecle <ESPA%cO> para avan%car ou <ESC> para sair...\n\n", 128, 135);
    printf("==================== TELA DE SAIDA ====================\n\n");
    posAtual = getCursorXY();
    gotoxy(0, 0);
    input(posAtual); // Aguarda input do usuário
    // Borda da variável i e do seu "placeholder"
    posDeclaracaoVarI.X = 4;
    posDeclaracaoVarI.Y = 4;
    largura = 6;
    desenharBorda(posDeclaracaoVarI, largura);
    posVarI.X = 18;
    posVarI.Y = 4;
    desenharBorda(posVarI, 10);
    printf("??????????");
    input(posAtual);
    removerBorda(posDeclaracaoVarI, largura);
    // Borda do for, primeiro campo
    pos.X = 11;
    pos.Y = 7;
    largura = 5;
    desenharBorda(pos, largura);
    i = 0;
    // Atualiza o placeholder da variável i
    gotoxy(posVarI.X, posVarI.Y);
    printf("%010d", i);
    pos.X = 11;
    pos.Y = 7;
    input(posAtual);
    removerBorda(pos, largura);
    // Borda do for, campo central
    posForCentro.X = 21;
    posForCentro.Y = 7;
    largura = 6;
    desenharBorda(posForCentro, largura);
    input(posAtual);
    removerBorda(posForCentro, largura);
    // Loop da instrução for
    for (i = 0; i < N; i++)
    {
        // Borda da instrução do corpo do for
        pos.X = 8;
        pos.Y = 9;
        largura = 17;
        desenharBorda(pos, largura);
        gotoxy(posAtual.X, posAtual.Y);
        printf("%d ", i);
        posAtual = getCursorXY();
        input(posAtual);
        removerBorda(pos, largura);
        // Borda do for, terceiro campo
        pos.X = 32;
        pos.Y = 7;
        largura = 3;
        desenharBorda(pos, largura);
        // Atualiza o "placeholder" da variável i
        gotoxy(posVarI.X, posVarI.Y);
        printf("%010d", i + 1);
        gotoxy(pos.X, pos.Y);
        input(posAtual);
        removerBorda(pos, largura);
        // Borda do for, campo central
        posForCentro.X = 21;
        posForCentro.Y = 7;
        largura = 6;
        desenharBorda(posForCentro, largura);
        input(posAtual);
        removerBorda(posForCentro, largura);
    }
    // Borda do return
    pos.X = 4;
    pos.Y = 12;
    largura = 9;
    desenharBorda(pos, largura);
    input(posAtual);
    removerBorda(pos, largura);
    gotoxy(posAtual.X, posAtual.Y + 2);
    hideCursor(false);

    return 0;
}

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

// Desenha a borda em relação à posição do primeiro caractere da instrução.
void desenharBorda(COORD pos, int tamanho)
{
    gotoxy(pos.X - 2, pos.Y - 1);
    putchar(218); // caractere superior esquerdo
    for (int i = 0; i < tamanho + 2; i++)
        putchar(196); // caractere superior
    putchar(191); // caractere superior direito
    gotoxy(pos.X - 2, pos.Y);
    putchar(179); // caractere lateral esquerda
    gotoxy(pos.X + tamanho + 1, pos.Y);
    putchar(179); // caractere lateral direita
    gotoxy(pos.X - 2, pos.Y + 1);
    putchar(192); // caractere inferior esquerdo
    for (int i = 0; i < tamanho + 2; i++)
        putchar(196); // caractere inferior
    putchar(217); // caractere inferior direito
    gotoxy(pos.X, pos.Y);
}

// Remove a borda em função do primeiro caractere da instrução.
void removerBorda(COORD pos, int tamanho)
{
    int i;

    gotoxy(pos.X - 2, pos.Y - 1);
    for (i = 0; i < tamanho + 4; i++)
        putchar(' '); // superior
    gotoxy(pos.X - 2, pos.Y);
    putchar(' '); // lateral esquerda
    gotoxy(pos.X + tamanho + 1, pos.Y);
    putchar(' '); // lateral direita
    gotoxy(pos.X - 2, pos.Y + 1);
    for (i = 0; i < tamanho + 4; i++)
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
