#include <stdio.h>

int main()
{
    int lado_max = 5;
    int a, b, c, cont = 0;

    for (a = 1; a <= lado_max; a++)
        for (b = 1; b <= lado_max; b++)
            for (c = 1; c <= lado_max; c++)
            {
                if (a*a == b*b + c*c)
                {
                    cont++;
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
    cont /= 2;
    printf("%d\n", cont);

    return 0;
}