/*
Programa      : 
Versão        : 
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 12/04/2022
Atualizado em : 20/04/2022
Comentários   : 
*/

#include <stdio.h>

int main()
{
    printf("Tamanho dos tipos (em bytes):\n");
    printf("char         %2lld\n", sizeof (char));
    printf("short        %2lld\n", sizeof (short));
    printf("int          %2lld\n", sizeof (int));
    printf("long         %2lld\n", sizeof (long));
    printf("long long    %2lld\n", sizeof (long long));
    printf("float        %2lld\n", sizeof (float));
    printf("double       %2lld\n", sizeof (double));
    printf("long double  %2lld\n", sizeof (long double));
    printf("void         %2lld\n", sizeof (void));

    return 0;
}
