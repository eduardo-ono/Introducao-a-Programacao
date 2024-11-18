/*
Programa      : precisao
Versão        : 1.0
Descrição     : Ilustra erro de precisão de um número fracionário.
Desenvolvedor : Eduardo Ono
Criado em     : 03/05/2022
Atualizado em : 03/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 0.0;
    int divisor = 1;

    for (int i = 1; i <= 100000; i++)
    {
        num += 0.1;
        if (i % divisor == 0)
        {
            printf("i = %d, num = %.8f\n", i, num);
            divisor *= 10;
        }
    }

    return 0;
}
