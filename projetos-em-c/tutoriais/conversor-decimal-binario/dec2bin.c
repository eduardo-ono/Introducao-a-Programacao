/*
Programa      : dec2bin.c
Versão        : 1.1
Descrição     : Conversor de número inteiro de 32-bit para binário.
Desenvolvedor : Eduardo Ono
Criado em     : 26/04/2022
Atualizado em : 26/04/2022
Comentários   : Somente para a plataforma Windows (por enquanto).
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>

#define APP_NAME "Conversor de inteiro (32-bit) para binario"
#define APP_VERSION "1.1"
#define ENDL putchar('\n')

void clrscr();
void delay(int);
void hideCursor(bool);
void gotoxy(int, int);
COORD getCursorXY();
void dec2bin(char, char *);
void desenharBlocoMemoria(COORD, int, void *);
void desenharBarramento(COORD, COORD, bool);
void moveBinString(char *, COORD, COORD);
void coolPrint(char *, int);

int main(int argc, char *argv[])
{
    char str[100];
    const int milliseconds = 0;
    COORD posInicialBarramento, posBlocoMemoria, savedPos, posFinalBarramento;
    int num;
    char *p = (char *)&num;
    char bin[9];

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--version") == 0)
            printf("%s\n%s\n", APP_NAME, APP_VERSION);
        return 0;
    }

    do
    {
        clrscr();
        sprintf(str, "Conversor de um n%cmero inteiro de 32-bit para bin%crio\n", 163, 160);
        coolPrint(str, milliseconds);
        for (int i = 0; i < 53; i++)
            putchar(205);
        ENDL; ENDL;
        sprintf(str, "Entre com um n%cmero inteiro ou 0 (zero) para sair: ", 163);
        coolPrint(str, milliseconds);
        scanf("%i", &num);
        getchar();
        if (num == 0)
            break;
        savedPos = getCursorXY();
        posBlocoMemoria.X = 40;
        posBlocoMemoria.Y = 8;
        posFinalBarramento.X = 0;
        posFinalBarramento.Y = posBlocoMemoria.Y + 10;
        desenharBlocoMemoria(posBlocoMemoria, sizeof num, (void *)&num);
        delay(3000);
        for (int i = 3; i >= 0; i--)
        {
            posInicialBarramento.X = posBlocoMemoria.X;
            posInicialBarramento.Y = posBlocoMemoria.Y + 2 * i;
            gotoxy(posInicialBarramento.X, posInicialBarramento.Y);
            desenharBarramento(posInicialBarramento, posFinalBarramento, false);
            gotoxy(posFinalBarramento.X, posFinalBarramento.Y);
            dec2bin(*(p + i), bin);
            printf("%s", bin);
            delay(1000);
            desenharBarramento(posInicialBarramento, posFinalBarramento, true);
            desenharBlocoMemoria(posBlocoMemoria, sizeof num, (void *)&num);
            posFinalBarramento.X = posFinalBarramento.X + 8;
        }
        gotoxy(savedPos.X, savedPos.Y);
        printf("Tecle <ENTER> para continuar...");
        getchar();
    } while (num != 0);

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

void delay(int milisegundos)
{
    usleep(1000 * milisegundos);
}

void gotoxy(int x, int y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(hStdout, position);
}

void hideCursor(bool flag)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 10;
    info.bVisible = flag ? FALSE : TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
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

void dec2bin(char dec, char bin[])
{
    int j = 0;

    for (int i = 7; i >= 0; i--, j++)
    {
        bin[j] = (dec >> i) & 1 ? '1' : '0';
    }
    bin[j] = '\0';
}

void desenharBarramento(COORD origem, COORD destino, bool apagarBarramento)
{
    COORD pos = origem;
    int miliseg = 50;
    char
        barraVertical = 179,
        dobraInicial = 193,
        cantoDobraInicial = 217,
        barraHorizontal = 196,
        dobraFinal = 194,
        cantoDobraFinal = 218;

    if (apagarBarramento)
    {
        barraVertical = ' ';
        dobraInicial = ' ';
        cantoDobraInicial = ' ';
        barraHorizontal = ' ';
        dobraFinal = ' ';
        cantoDobraFinal = ' ';
        miliseg = 0;
    }

    // Desenha o início do barramento
    pos.Y++; // Uma linha abaixo do conteúdo da última célula da memória
    while (pos.Y < destino.Y - 1)
    {
        gotoxy(pos.X, pos.Y);
        delay(miliseg);
        for (int i = 0; i < 8; i++)
            putchar(barraVertical);
        pos.Y++;
    }
    // Desenha a dobra inicial do barramento
    pos.X += 7;
    gotoxy(pos.X, pos.Y);
    putchar(cantoDobraInicial);
    pos.X--;
    for (int i = 7; i > 0; i--, pos.X--)
    {
        gotoxy(pos.X, pos.Y);
        putchar(dobraInicial);
        delay(miliseg / 10);
    }
    // Desenha a parte horizontal do barramento
    while (pos.X > destino.X + 7)
    {
        gotoxy(pos.X, pos.Y);
        putchar(barraHorizontal);
        delay(miliseg / 10);
        pos.X--;
    }
    // Desenha a dobra final do barramento
    for (pos.X = destino.X + 7; pos.X > destino.X; pos.X--)
    {
        gotoxy(pos.X, pos.Y);
        putchar(dobraFinal);
        delay(miliseg / 10);
    }
    gotoxy(pos.X, pos.Y);
    putchar(cantoDobraFinal); // Canto inferior esquerdo
    gotoxy(pos.X, pos.Y);
    delay(5 * miliseg);
}

void desenharBlocoMemoria(COORD pos, int size, void *endereco)
{
    COORD savedPos = pos;
    const int length = 8 * sizeof(char);
    char *p = (char *)endereco;
    char ch;
    char bin[9];

    if (pos.Y == 0)
        pos.Y += 1;
    for (int i = 0; i < size; i++)
    {
        // Canto superior esquerdo ou divisória esquerda
        gotoxy(pos.X - 2, pos.Y - 1);
        ch = (i == 0) ? 218 : 195;
        putchar(ch);
        // Borda horizontal
        for (int j = 0; j < length + 2; j++)
            putchar(196);
        // Canto superior direito ou divisória direita
        ch = (i == 0) ? 191 : 180;
        putchar(ch);
        // Barra vertical esquerda da célula
        gotoxy(pos.X - 2, pos.Y);
        putchar(179);
        // Imprime o conteúdo da célula
        dec2bin(*p, bin);
        printf(" %s", bin);
        // Barra vertical direita da célula
        gotoxy(pos.X + length + 1, pos.Y);
        putchar(179);
        // Canto inferior esquerdo ou divisória esquerda
        gotoxy(pos.X - 2, pos.Y + 1);
        ch = (i == size - 1) ? 192 : 195;
        putchar(ch);
        // Borda horizontal inferior
        for (int j = 0; j < length + 2; j++)
            putchar(196);
        ch = (i == size - 1) ? 217 : 180;
        putchar(ch);
        // Imprime o endereço de memória
        gotoxy(pos.X - 21, pos.Y);
        printf("0x%p", p);
        p++;
        pos.Y += 2;
    }

    gotoxy(savedPos.X, savedPos.Y);
}

void moveBinString(char str[], COORD origem, COORD destino)
{
    COORD pos = origem, pos_anterior = origem;
    double miliseg = 50;

    gotoxy(origem.X, origem.Y);
    pos.X += 12;
    pos_anterior = pos;
    while (pos.Y <= destino.Y)
    {
        gotoxy(pos.X, pos.Y);
        printf("%s", str);
        delay(miliseg);
        gotoxy(pos_anterior.X, pos_anterior.Y);
        printf("        ");
        pos.Y++;
        pos_anterior = pos;
    }
    while (pos.X >= destino.X)
    {
        gotoxy(pos.X, pos.Y);
        printf("%s", str);
        if (pos.X > destino.X + 8)
        {
            delay(miliseg);
            gotoxy(pos_anterior.X, pos_anterior.Y);
            printf("        ");
        }
        pos.X -= 2;
        pos_anterior = pos;
    }
}

void coolPrint(char *str, int miliseconds)
{
    for (int i = 0; i < strlen(str); i++)
    {
        putchar(str[i]);
        delay(miliseconds);
    }
}
