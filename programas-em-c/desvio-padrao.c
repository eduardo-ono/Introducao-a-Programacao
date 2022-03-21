#include <stdio.h>
#include <math.h>

int main()
{
    const int N = 3;
    float v[] = { 17, 8, 20 };
    float soma = 0, media, somatorio = 0, variancia, desvio_padrao;
    int i;

    // Cálculo da média aritmética
    for (i = 0; i < N; i++)
        soma = soma + v[i];
    media = soma / N;

    // Cálculo do desvio padrão
    for (i = 0; i < N; i++)
        somatorio = somatorio + pow(v[i] - media, 2);
    variancia = somatorio / N;
    desvio_padrao = sqrt(variancia);

    printf("Media = %f\n", media);
    printf("Variancia = %f\n", variancia);
    printf("Desvio padrao = %f\n", desvio_padrao);

    return 0;
}
