#include <stdio.h>

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *v1; // ponteiro para um inteiro

    v1 = v; // v1 "aponta" para onde v está "apontando", ou seja, v[0]
    v1[0] = 100;
    v1[1] = 200;

    printf("v[0] = %d,  v[1] = %d,  v[3] = %d\n", v[0], v[1], v[2]); //> 100, 200, 3
    printf("Tamanho de v: %d\n", (int)sizeof v); //> 40 
    printf("Tamanho de v1: %d\n", (int)sizeof v1); //> 8

    return 0;
}
