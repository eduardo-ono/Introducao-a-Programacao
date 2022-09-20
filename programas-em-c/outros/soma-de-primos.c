#include <stdio.h>
#include <stdbool.h>

bool testaPrimo(int num)
{
    bool primo = 1;
    int divisor;

    if (num <= 1)
        return false;

    for (divisor = 2; primo && (divisor <= num/2); divisor++)
        if (num % divisor == 0)
            primo = false;

    return primo;
}

int main()
{
    int num, i, primos = 0, soma = 0;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);
    for (i = 1; primos < num; i++)
        if (testaPrimo(i))
        {
            primos++;
            soma += i;
        }
    printf("Soma = %d\n", soma);

    return 0;
}
