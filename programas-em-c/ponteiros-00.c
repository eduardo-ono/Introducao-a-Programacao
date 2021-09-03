#include <stdio.h>

int trocar(int *px, int *py) {

    int aux;

    aux = *px;
    *px = *py;
    *py = aux;

    return 0;
}

int main()
{
    int x = 50, y = 100;

    trocar(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
