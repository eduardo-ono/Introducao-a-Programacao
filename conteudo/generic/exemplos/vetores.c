/*
    Programa      : generics-vetores.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 10/10/2022
    Atualizado em : 10/10/2022
    Comentários   : C11 em diante.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define isCompatible(x, type) _Generic(x, type: true, default: false)
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
    for (int i = 0; i < N; i++)
    {
        if (isCompatible(v[i], int) || isCompatible(v[i], short int))
            printf("%d ", (int)v[i]);
        else if (isCompatible(v[i], long int))
            printf("%ld ", (long int)v[i]);
        else if (isCompatible(v[i], float))
            printf("%f ", (float)v[i]);
        else if (isCompatible(v[i], double))
            printf("%lf ", (double)v[i]);
        else if (isCompatible(v[i], long double))
            printf("%Lf ", (long double)v[i]);
    }
    printf("\n");
}
