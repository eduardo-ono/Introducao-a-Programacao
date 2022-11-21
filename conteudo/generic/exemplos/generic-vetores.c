/*
    Programa      : generic-vetores.c
    Versão        :
    Descrição     :
    Desenvolvedor : Eduardo Ono
    Criado em     : 10/10/2022
    Atualizado em : 12/10/2022
    Comentários   : C11 em diante.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define isCompatible(x, type) _Generic(x, type         \
                                       : true, default \
                                       : false)
#define TIPO float

void imprimirVetor(TIPO v[], const int N);

int main()
{
    const int N = 5;
    TIPO v[] = {1, 2, 3, 4, 5};

    imprimirVetor(v, N);

    return 0;
}

void imprimirVetor(TIPO v[], const int N)
{
    char *fmt = NULL;

    if (N <= 0)
        return;

    if (isCompatible(*v, int) || isCompatible(v[0], short int))
        fmt = "%d ";
    else if (isCompatible(*v, long int))
        fmt = "%ld ";
    else if (isCompatible(*v, long long int))
        fmt = "%lld ";
    else if (isCompatible(*v, float))
        fmt = "%f ";
    else if (isCompatible(*v, double))
        fmt = "%lf ";
    else if (isCompatible(*v, long double))
        fmt = "%Lf ";

    for (int i = 0; i < N; i++)
    {
        printf(fmt, (TIPO)v[i]);
    }
    printf("\n");
}
