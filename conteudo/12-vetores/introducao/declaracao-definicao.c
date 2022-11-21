/*
    Programa      : declaracao-definicao.c
    Versão        :
    Descrição     :
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/10/2022
    Atualizado em : 12/10/2022
    Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    const int N = 5;
    // Declaração e definição de um vetor de inteiros.
    int v[] = {1, 2, 3, 4, 5};

    // Imprime os elementos do vetor.
    for (int i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
