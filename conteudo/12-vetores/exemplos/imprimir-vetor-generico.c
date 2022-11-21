/*
    Programa      : imprimir-vetor-generico.c
    Versão        : 
    Descrição     : Função que imprime um vetor de tipo "genérico".
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/10/2022
    Atualizado em : 12/10/2022
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Alterar o tipo do vetor aqui:
#define TIPO float

void imprimirVetor(TIPO v[], const int N, char *fmt);

int main()
{
    const int N = 5;
    TIPO v[] = {1, 2, 3, 4, 5};

    imprimirVetor(v, N, "%.3f ");

    return 0;
}

void imprimirVetor(TIPO v[], const int N, char *fmt)
{
    for (int i = 0; i < N; i++)
    {
        printf(fmt, v[i]);
    }
    printf("\n");
}
