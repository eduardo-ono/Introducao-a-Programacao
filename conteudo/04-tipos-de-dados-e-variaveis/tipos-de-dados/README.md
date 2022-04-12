> Introdução à Programação > Conteúdo

# Tipos de Dados

Prof. Eduardo Ono

<br>

## Conceitos

> _Declarar_ uma variável é informar o tipo e o nome no programa.

<br>

## Tipos de Dados em Linguagem C

| Tipo | Tamanho<br>(Windows 64-bit) | Tamanho<br>(Linux 64-bit) |
| ---  | :-:                         | :-: |
| char | 1 byte<br>(-128 a 127) | 1 byte<br>(-128 a 127)
| short int | |
| int | 4 bytes<br>(-32768 a 32767) | 4 bytes<br>(-32768 a 35767)
| long<br>ou<br>long int | 32-bit | 64-bit
| float | 32-bit | 32-bit
| double | 64-bit | 64-bit
| void | 1 byte | 1 byte

<br>

## Modificadores de Tipos Inteiros

* short, long, unsigned

<br>

## Especificadores de Formatos (Máscaras)

* Utilizados dentro de strings

| Tipo | Especificador de Formato |
| --- | :-: |
| char | `%c`
| int | `%d` ou `%i`
| long | `%ld`
| float | `%f`
| double | `%lf`

<br>

## Exemplos

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

    return 0;
}
```
<br>

## Tipos Definidos pelo Usuário

A palavra-chave `typedef` é utilizada para definição de um novo tipo:

```
typedef <tipo> <nome_do_tipo>;
```

### Exemplos

```c
#include <stdio.h>

typedef Int_Positivo unsigned int;

int main()
{
    Int_Positivo num = 100;

    printf("%ud\n", num);

    return 0;
}
```

<br>

## Vídeos de Apoio

| Thumb | Descrição |
| --- | --- |
| [![img](https://img.youtube.com/vi/yjxwP8aqlPI/default.jpg)](https://www.youtube.com/watch?v=yjxwP8aqlPI) | <sup>[Professor Rafael Ivo]</sup> [Programação em C - 02 - Tipos](https://www.youtube.com/watch?v=yjxwP8aqlPI)<br><sub>(27:58, YouTube, Mar/2020)</sub>

<br>

## O Tipo de Dado Booleano

Muitas linguagens de programação possuem o tipo "boolean", que aceita os valores `true` e `false`.
A linguagem C padrão ANSI, de 1989, também conhecida como ANSI C ou C89, não traz o tipo booleano.

Uma forma de se contornar esse problema é através da seguinte definição:

```c
typedef enum { FALSE, TRUE } boolean;
```

Exemplo de uso:

```c
#include <stdio.h>

typedef enum { FALSE, TRUE } boolean;

int main()
{
  int num;
  boolean par;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    par = num % 2 == 0;
    printf("%d\n", par); // Saída: 1 (true) ou 0 (false)

    par = TRUE;
    printf("%d\n", par); // Saída: 1

    par = FALSE;
    printf("%d\n", par); // Saída: 0

  return 0;
}
```

### O Tipo `bool`

> O padrão C99 introduziu o tipo `bool`, além dos valores `true` (1) e `false` (0). Requer a biblioteca `<stdbool.h>`.


#### Exemplos

```c
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool par;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    par = num % 2 == 0;
    printf("%d\n", par); // Saída: 1 (true) ou 0 (false)

    par = true;
    printf("%d\n", par); // Saída: 1

    par = false;
    printf("%d\n", par); // Saída: 0

    return 0;
}
```

### Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/WC7dIAz4lT0/default.jpg)](https://www.youtube.com/watch?v=WC7dIAz4lT0) | <sup>[Programação Descomplicada Linguagem C]</sup> [[C99] Aula 107 - O tipo booleano](https://www.youtube.com/watch?v=WC7dIAz4lT0)<br><sub>(2:58, YouTube, Abr/2018)</sub>

<br>
