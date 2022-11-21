/*
    Programa      : vetor-dinamico.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 12/10/2022
    Atualizado em : 12/10/2022
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // NULL, malloc(), calloc(), realloc()

int main()
{
    int *v = NULL;
    long long int length;

    printf("Entre com o numero de elementos do vetor: ");
    scanf("%lld", &length);

    v = (int *)malloc(length * sizeof *v); // Ou: v = (int *)calloc(length, sizeof *v);
    if (v == NULL)
    {
        printf("Erro na alocacao do vetor!\n");
        return 1;
    }

    for (long long int i = 0; i < length; i++)
    {
        v[i] = i % 100;
        // printf("%d ", v[i]);
    }
    printf("Tamanho do espaco alocado = %f MB \n", length * sizeof *v / 1024.0 / 1024);
    free(v);

    return 0;
}
