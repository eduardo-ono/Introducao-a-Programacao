/*
Programa      : util.c
Versão        : 1
Descrição     : Biblioteca de utilidades
Desenvolvedor : Eduardo Ono
Criado em     : 23/05/2022
Atualizado em : 23/05/2022
Comentários   :
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "util.h"

// flag = 1 para iniciar o benchmark, flag = 0 para terminar
double benchmark(int flag)
{
    static clock_t now = 0;
    double tempo = 0;

    if (flag != 0)
        now = clock();
    else
    {
        now = clock() - now;
        tempo = (double)now / CLOCKS_PER_SEC;
    }

    return tempo;
}
