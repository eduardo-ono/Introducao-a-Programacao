#include <stdio.h>

int main()
{
    int a = 256;
    char *p = (char *)&a;

    p = p + 1;
    printf("%p\n", &a);
    printf("%d", *p);

    return 0;
}
