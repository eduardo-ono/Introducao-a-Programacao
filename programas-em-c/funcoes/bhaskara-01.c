#include <stdio.h>
#include <math.h>

int bhaskara(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b*b - 4*a*c;
    if (delta < 0)
        return 1;
    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);

    return 0;
}

int main()
{
    float a, b, c, x1, x2;

    printf("Entre com os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (bhaskara(a, b, c, &x1, &x2) == 0)
    {
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else
    {
        printf("Nao ha raizes reais!\n");
    }

    return 0;
}
