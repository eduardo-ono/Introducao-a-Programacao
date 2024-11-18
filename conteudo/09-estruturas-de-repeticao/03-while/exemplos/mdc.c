/*
Programa      : MDC
Versão        : 1
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 
Atualizado em : 
Comentários   : [SENDWICK_1990]
*/

#include <stdio.h>

int main()
{
    int a, b, aux, x, mdc;

    printf("Entre com os valores de a e b: ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0)
    {
        x = a;
        mdc = b;
        while (x > 0)
        {
            if (x < mdc)
            {
                aux = x;
                x = mdc;
                mdc = aux;
            }
            x = x - mdc;
        }
    }

    printf("a = %d, b = %d, mdc(a, b) = %d\n", a , b, mdc);

    return 0;
}
