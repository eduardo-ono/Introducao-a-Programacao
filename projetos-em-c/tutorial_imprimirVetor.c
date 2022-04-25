#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define N 9  // Entre aqui com a quantidade de elementos do vetor

int v[] = { 1, 6, 0, 0, 0, 1, 2, 3, 4 };  // Definição do vetor


void hideCursor() {
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 10;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void gotoxy(int x, int y) {
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
   
    SetConsoleCursorPosition(hStdout, position);
}

COORD getCursorXY() {
	COORD pos;
	
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if(GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
	{
		pos.X = csbi.dwCursorPosition.X;
		pos.Y = csbi.dwCursorPosition.Y;
	}
	return pos;
}

void borda(COORD pos, int tamanho) {
	int i;
	
	gotoxy(pos.X-2, pos.Y-1);
	putchar(218);  // superior esquerdo
	for (i=0; i<tamanho+2; i++) putchar(196);  // superior
	putchar(191);  // superior direito
	gotoxy(pos.X-2, pos.Y); putchar(179);  // lateral esquerda
	gotoxy(pos.X + tamanho + 1, pos.Y); putchar(179);  // lateral direita
	gotoxy(pos.X-2, pos.Y+1);
	putchar(192);  // inferior esquerdo
	for (i=0; i<tamanho+2; i++) putchar(196);  // inferior
	putchar(217);  // inferior direito
	gotoxy(pos.X, pos.Y);
}

void removerBorda(COORD pos, int tamanho) {
	int i;
	
	gotoxy(pos.X-2, pos.Y-1);
	for (i=0; i<tamanho+4; i++) putchar(' ');  // superior
	gotoxy(pos.X-2, pos.Y); putchar(' ');  // lateral esquerda
	gotoxy(pos.X + tamanho + 1, pos.Y); putchar(' ');  // lateral direita
	gotoxy(pos.X-2, pos.Y+1);
	for (i=0; i<tamanho+4; i++) putchar(' ');  // inferior
	gotoxy(pos.X, pos.Y);
}

int main()
{
	int i;
	COORD pos, posAtual;
	
	hideCursor();
	// Imprime o código na tela de saída
	printf("#define N 9\n\n");
	printf("int main()\n");
	printf("{\n");
	printf("    int v[] = { ");
	for (i=0; i<N-1; i++) printf("%d, ", v[i]);
	printf("%d };\n\n", v[N-1]);
	printf("    int i;\n");
	printf("\n\n");
	printf("    for (  i=0  ;  i<N  ;  i++  )\n");
	printf("    {\n");
	printf("        printf(\"%%d \", v[i]);\n");
	printf("    }\n\n");
	printf("    return 0;\n");
	printf("}\n\n");
	printf("==================== TELA DE SAIDA ====================\n\n");
	posAtual = getCursorXY();
	gotoxy(0,0);
	if (getch()==27) return 0;
	// Borda vetor
	pos.X = 4; pos.Y = 4;
	borda(pos,40);
	if (getch()==27) return 0;
	// int i
	removerBorda(pos,40);
	pos.X = 16; pos.Y = 6;
	borda(pos,28);
	if (getch()==27) return 0;
	// for_P1
	pos.X = 11; pos.Y = 9;
	borda(pos,3);
	// Atualiza i
	gotoxy(16, 6);
	printf("0");
	pos.X = 11; pos.Y = 9;
	if (getch()==27) return 0;
	// for_P2
	removerBorda(pos,3);
	pos.X = 19; pos.Y = 9;
	borda(pos,3);
	if (getch()==27) return 0;
	gotoxy(posAtual.X, posAtual.Y);
	for (i=0; i<N; i++)
	{
		removerBorda(pos,3);
		// printf
		pos.X = 8; pos.Y = 11;
		borda(pos,20);
		gotoxy(posAtual.X, posAtual.Y);
		printf("%d ", v[i]);
		posAtual = getCursorXY();
		if (getch()==27) return 0;
		// for_P3
		removerBorda(pos,20);
		pos.X = 27; pos.Y = 9;
		borda(pos,3);
		// Atualiza i
		gotoxy(3*i + 16, 6);
		printf("   %d", i+1);
		gotoxy(pos.X, pos.Y);
		if (getch()==27) return 0;
		// for_P2
		removerBorda(pos,3);
		pos.X = 19; pos.Y = 9;
		borda(pos,3);
		if (getch()==27) return 0;
	}
	// return 0
	removerBorda(pos,3);
	pos.X = 4; pos.Y = 14;
	borda(pos,9);
	if (getch()==27) return 0;
	removerBorda(pos,9);
	gotoxy(posAtual.X, posAtual.Y);
	printf("\n");
	return 0;
}
