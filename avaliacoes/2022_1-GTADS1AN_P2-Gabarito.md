<table>
<tr>
<td align="left" width="8000">
    <small>Introdução a Programação > Avaliações</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;08/06/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">

Gabarito da 2a. Avaliação - GTADS1AN

</h1>

<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Questão 1

* Saída

```
4  8
```

* Explicação

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Um endereço de memória em um sistema de 64-bit possui o tamanho de 64-bit, ou 8 bytes.


<br>

## Questão 2

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Na declaração de um ponteiro, o tipo não é do ponteiro mas sim do objeto apontado pelo ponteiro. Tal fato é necessário para derreferenciar o ponteiro.

<br>

## Questão 3

* a)

```c
bool triangulo(float a, float b, float c, float *pPerimetro, float *pArea)
{
    float s;

    if (a < b + c && b < a + c && c < b + a)
    {
        *pPerimetro = a + b + c;
        s = *pPerimetro / 2;
        *pArea = sqrt(s * (s - a) * (s - b) * (s - c));
        return true;
    }
    else
        return false;
}
```

* b)

```c
#include <stdio.h>
#include <sdtbool.h>
#include <math.h>

int main()
{
    float a, b, c, perimetro, area;

    printf("Entre com os três lados do triângulo: ");
    scanf("%f %f %f", &a,&b, &c);

    if (triangulo(a, b, c, &perimetro, &area))
    {
        printf("Perímetro = %f\n", perimetro);
        printf("Área = %f\n", area);
    }
    else
        printf("Entrada inválida!\n");

    return 0;
}
```

<br>

## Questão 4

```c
#include <stdio.h>

int main()
{
    const int tempo_maximo = 4800; // em segundos
    int mm, ss;
    int tempo_total = 0, tempo_musica, num_musicas = 0;

    while (tempo_total < tempo_maximo)
    {
        printf("Entre com o tempo da música [mm:ss]: ");
        scanf("%d:%d", &mm, &ss);
        if (mm >= 0 && mm < 60 && ss >= 0 && ss < 60)
        {
            tempo_musica = 60 * mm + ss;
            if (tempo_total + tempo_musica <= tempo_maximo)
            {
                tempo_total += tempo_musica;
                num_musicas++;
            }
            else
                break;
        }
    }
    printf("Número de músicas = %d\n", num_musicas);
    printf("Tempo total = %d:%02d\n", tempo_total / 60, tempo_total % 60);

    return 0;
}
```

<br>

## Questão 5

* a)

```
010011110110110010100000 =
= 1 x 2^22 + 1 x 2^19 + 1 x 2^18 + 1 x 2^17 + 1 x 2^16 + 1 x 2^14 + 1 x 2^13 + 1 x 2^11 + 1 x 2^10 + 1 x 2^7 + 1 x 2^5
= 4194304 + 524288 + 262144 + 131072 + 65536 + 16384 + 8192 + 2048 + 1024 + 128 + 32
= 5205152
```

* Outra forma, utilizando um programa:

```c
#include <stdio.h>

int main()
{
    int num = 0b010011110110110010100000; // Número binário

    printf("%d\n", num);

    return 0;
}
```

* Saída

```
5205152
```

* b)

```c
#include <stdio.h>

int main()
{
    int num = 5205152; // int num = 0b010011110110110010100000;
    char *p;

    p = (char *)&num;
    printf("%c%c%c\n", *(p + 2), *(p + 1), *p);

    return 0;
}
```

<br>
