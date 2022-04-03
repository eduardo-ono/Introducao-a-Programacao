> Introdução à Programação > Conteúdo

# Tipos de Dados

Prof. Eduardo Ono

<br>

## Conceitos

> _Declarar_ uma variável é informar o tipo e o nome no programa.

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
  boolean par;
  int num = 4;

  par = num % 2 == 0;
  if (par == TRUE)
      printf("Par\n");
  else
    printf("Impar\n");

  return 0;
}
```

### Vídeos de Apoio

| Thumb | Descrição |
| --- | --- |
| [![thumb](https://img.youtube.com/vi/WC7dIAz4lT0/default.jpg)](https://www.youtube.com/watch?v=WC7dIAz4lT0) | <sup>[Programação Descomplicada Linguagem C]</sup> [[C99] Aula 107 - O tipo booleano](https://www.youtube.com/watch?v=WC7dIAz4lT0)<br><sub>(2:58, YouTube, Abr/2018)</sub>

<br>
