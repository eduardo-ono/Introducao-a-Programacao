#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// flag = 1 para iniciar o benchmark, flag = 0 para terminar
double benchmark(int flag)
{
    static clock_t now = 0;
    double tempo = 0;

    if (flag > 0)
        now = clock();
    else
    {
        now = clock() - now;
        tempo = (double)now / CLOCKS_PER_SEC;
    }

    return tempo;
}

double somarElVetor(int vet[], const int N)
{
    register int i;
    double soma = 0;

    for (i = 0; i < N; i++)
    {
        soma += *(vet + i);
    }
    return soma;

}

double somarElVetorPtr(int *array, const int N)
{
    double soma = 0;
    register int *ptr = array;
    int *ptr1 = ptr + N;

    while (ptr < ptr1)
    {
        soma += *ptr;
        ptr++;
    }

    return soma;
}

int main()
{
    const int N = 100000000;
    int *v = NULL;
    double soma;
    double tempo;

    // Cria o vetor de inteiros na memória "heap"
    v = (int *)malloc(N * sizeof (v[0]));

    // Inicializa o vetor v
    for (int i = 0; i < N; i++)
    {
        v[i] = i + 1;
    }

    benchmark(1);
    soma = somarElVetor(v, N);
    tempo = benchmark(0);
    printf("Soma = %.1lf\n", soma);
    printf("Tempo = %.4lf ms\n", tempo);

    benchmark(1);
    soma = somarElVetorPtr(v, N);
    tempo = benchmark(0);
    printf("Soma = %.1lf\n", soma);
    printf("Tempo = %.4lf ms\n", tempo);

    free(v);

    return 0;
}
