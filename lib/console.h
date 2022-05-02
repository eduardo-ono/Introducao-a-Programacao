#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#ifndef CONSOLE_H
#define CONSOLE_H

void clrscr();
void hideCursor(bool);
void gotoxy(int, int);
COORD getCursorXY();
void dec2bin(char decimal, char bin[]);
void desenharVarMemoria(COORD origem, void *, int);

#endif
