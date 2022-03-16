> Introdução à Programação > Conteúdo

# Tipos de Dados e Variáveis

Prof. Eduardo Ono

<br>

## Tipos de Dados

| Tipo | Tamanho<br>(Windows 64-bit) | Tamanho<br>(Linux 64-bit) |
| --- | :-: | :-: |
| char | 8-bit<br>(-128 a 127) | 8-bit<br>(-128 a 127)
| short<br>short int | |
| int | 32-bit<br>(-32768 a 32767) | 32-bit<br>(-32768 a 35767)
| long<br>long int | 32-bit | 64-bit
| float | 32-bit | 32-bit
| double | 64-bit | 64-bit

* Programa em C para determinar o tamanho de cada tipo:

    ```c
    #include <stdio.h>

    int main()
    {
        printf("Tamanho dos tipos (em bytes)\n\n");
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
    ```

## Modificadores de Tipos

* short, long, unsigned

## Especificadores de Formatos

* Utilizados dentro de strings

| Tipo | Especificador de Formato (Máscara) |
| --- | :-: |
| char | `%c`
| int | `%d` ou `%i`
| long | `%ld`
| float | `%f`
| double | `%lf`
