#include <stdio.h>

int main()
{
    int num = 1234567890, i, produtorio = 1, multiplicidade;

    for (i = 2; i <= num; i++)
    {
        multiplicidade = 0;
        while (num % i == 0)
        {
            num = num / i;
            multiplicidade++;
        }
        if (multiplicidade > 0)
            produtorio = produtorio * (multiplicidade + 1);
    }

    printf("%d\n", produtorio);

    return 0;
}
