/*
    Programa      : bhaskara-v0.c
    Versão        : 
    Descrição     : 
    Desenvolvedor : Eduardo Ono
    Criado em     : 02/12/2022
    Atualizado em : 02/12/2022
    Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float a = 2, b = -10, c = 12;
    float delta, x1, x2;

    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("x1 = %f   x2 = %f\n", x1, x2);

    return 0;
}
