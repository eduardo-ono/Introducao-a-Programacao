#include <stdio.h>

int main()
{
    int v[] = { 5, 6, 2, 4, 5 };
    int *w;

    w = v;
    printf("%d\n", w[0]);
    printf("%d\n", w[1]);
    printf("%d\n", w[10]);


    return 0;
}
