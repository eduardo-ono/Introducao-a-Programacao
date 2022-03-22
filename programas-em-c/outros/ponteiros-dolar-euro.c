#include <stdio.h>

int converter(float real, float *dolar, float *euro)
{
    *dolar = real / 5.00;
    *euro = real / 6.00;

    return 0;
}

int main()
{
    float real, dolar, euro;

    printf("Entre com o valor em Reais: ");
    scanf("%f", &real);

    converter(real, &dolar, &euro);

    printf("Real = %.2f, Dolar = %.2f, Euro = %.2f\n", real, dolar, euro);
    printf("%p %p %p\n", &real, &dolar, &euro);

    return 0;
}
