#include <stdio.h>

int main()
{
    printf("Tamanho dos tipos (em bytes):\n");
    printf("char*   %d\n", (int) sizeof (char*));
    printf("short*  %d\n", (int) sizeof (short*));
    printf("int*    %d\n", (int) sizeof (int*));
    printf("long*   %d\n", (int) sizeof (long*));
    printf("float*  %d\n", (int) sizeof (float*));
    printf("double* %d\n", (int) sizeof (double*));
    printf("void*   %d\n", (int) sizeof (void*));
    printf("void   %d\n", (int) sizeof (void));

    return 0;
}
