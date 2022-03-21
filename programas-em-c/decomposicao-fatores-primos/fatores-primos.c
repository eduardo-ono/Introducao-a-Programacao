#include <stdio.h>

int main()
{
    int num = 100, i;

    for (i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
