#include <stdio.h>

int main()
{
    printf("Tamanho dos tipos em bytes (dependente do S.O. e da arquitetura)\n\n");
    printf("char        %lld\n", sizeof (char));
    printf("short       %lld\n", sizeof (short));
    printf("int         %lld\n", sizeof (int));
    printf("long        %lld\n", sizeof (long));
    printf("long long   %lld\n", sizeof (long long));
    printf("float       %lld\n", sizeof (float));
    printf("double      %lld\n", sizeof (double));
    printf("void        %lld\n", sizeof (void));
    printf("char*       %lld\n", sizeof (char*));
    printf("short*      %lld\n", sizeof (short*));
    printf("int*        %lld\n", sizeof (int*));
    printf("long*       %lld\n", sizeof (long*));
    printf("float*      %lld\n", sizeof (float*));
    printf("double*     %lld\n", sizeof (double*));
    printf("void*       %lld\n", sizeof (void*));

    return 0;
}
