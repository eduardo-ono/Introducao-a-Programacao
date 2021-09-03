#include <stdio.h>

int main()
{
    printf("Tamanho dos tipos (dependente do S.O. e da arquitetura)\n\n");
    printf("void:      %lld byte(s)\n", sizeof (void));
    printf("char:      %lld byte(s)\n", sizeof (char));
    printf("short:     %lld byte(s)\n", sizeof (short));
    printf("int:       %lld byte(s)\n", sizeof (int));
    printf("long long: %lld byte(s)\n", sizeof (long long));
    printf("long:      %lld byte(s)\n", sizeof (long));
    printf("float:     %lld byte(s)\n", sizeof (float));
    printf("double:    %lld byte(s)\n", sizeof (double));
    printf("char*:     %lld byte(s)\n", sizeof (char*));
    printf("short*:    %lld byte(s)\n", sizeof (short*));
    printf("int*:      %lld byte(s)\n", sizeof (int*));
    printf("long*:     %lld byte(s)\n", sizeof (long*));
    printf("float*:    %lld byte(s)\n", sizeof (float*));
    printf("double*:   %lld byte(s)\n", sizeof (double*));
    printf("void*:     %lld byte(s)\n", sizeof (void*));

    return 0;
}
