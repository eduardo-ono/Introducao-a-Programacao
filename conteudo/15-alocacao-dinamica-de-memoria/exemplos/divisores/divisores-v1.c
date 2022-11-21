/*
    Programa      : divisores-v1.c
    Versão        : v1
    Descrição     : Determina os divisores naturais de um inteiro.
    Desenvolvedor : Eduardo Ono
    Criado em     : 09/11/2022
    Atualizado em : 09/11/2022
    Comentários   :
    Referências   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void ordenarVetor(long long int v[], const int N);

int main()
{
    long long int *v;
    int length = 0;
    long long int num = 2200123450000;
    long long int menor_quociente;

    // Aloca na "heap" espaço para armazenar um inteiro do tipo long int.
    v = (long long int *)malloc(2 * sizeof *v);
    if (v == NULL)
        return 1;
    length = 2;

    // Armazena o primeiro divisor (1) no vetor.
    v[0] = 1;
    v[1] = num;

    menor_quociente = 100;
    for (long long int i = 2; i < menor_quociente; i++)
    {
        if (num % i == 0)
        {
            v = (long long int *)realloc(v, (length + 1) * sizeof *v);
            length++;
            v[length - 1] = i;
            menor_quociente = num / i;
            if (i < menor_quociente)
            {
                v = (long long int *)realloc(v, (length + 1) * sizeof *v);
                length++;
                v[length - 1] = num / i;
            }
        }
    }

    // Ordena o vetor.
    ordenarVetor(v, length);

    // Imprime o vetor.
    for (int i = 0; i < length; i++)
    {
        printf("%lld ", v[i]);
    }
    printf("\n");

    // Libera o espaço alocado para o vetor v.
    free(v);

    return 0;
}

void ordenarVetor(long long int v[], const int N)
{
    long long int aux;

    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
}
