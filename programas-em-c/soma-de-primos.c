#include <stdio.h>

int verificaPrimo(long num)
{
	int primoOk = 1;
	long divisor;

	if (num <= 1) return 0;
	for (divisor = 2; divisor <= num/2; divisor++)
		if (num % divisor == 0)
		{
			primoOk = 0;
			break;
		}
	return primoOk;
}

int main()
{
	long num, i, primos = 0, soma = 0;

	printf("Entre com um numero inteiro positivo: ");
	scanf("%ld", &num);
	for (i = 1; primos < num; i++)
		if (verificaPrimo(i))
		{
			primos++;
			soma += i;
		}
	printf("Soma = %ld\n", soma);

	return 0;
}