> ##### Introdução à Programação > Conteúdo

# Ponteiros (ou Apontadores)

Prof. Eduardo Ono

<br>

## Conceitos

> Um __*ponteiro*__, também chamado de _apontador_, é uma variável que armazena apenas um endereço de memória.

<br>

> Quando um ponteiro recebe o endereço de um espaço alocado por uma variável, por exemplo, dizemos que o ponteiro "aponta" para essa variável.

## Exemplos

```c
#include <stdio.h>

int main()
{
    int a = 5;
    int *pa;

    pa = &a;
    *pa = 10;

    printf("a = %d\n", a); // Saída: 10
}
```

* Descrição do programa, instrução à instrução:

<table>
<tr>
  <th>Instrução</th>
  <th>Descrição</th>
</tr>

<tr>
<td>

```c
int a = 5;
```
</td>
<td>Espaço na memória alocado para a variável <em>a</em> e atribuição do valor 5 à variável na mesma instrução.</td>
</tr>

<tr>
<td>

```c
int *pa;
```
</td>
<td>Espaço na memória alocado para a variável ponteiro <em>pa</em>. Neste momento, <em>pa</em> "aponta" para "lixo", uma vez que ainda nenhum endereço foi atribuído ao ponteiro <em>pa</em>.</td>
</tr>

<tr>
<td>

```c
pa = &a;
```
</td>
<td><em>pa</em> recebe o endereço de <em>a</em>. A partir deste momento, dizemos que <em>pa</em> "aponta" para <em>a</em>.</td>
</tr>

<tr>
<td>

```c
*pa = 10;
```
</td>
<td>O objeto na memória (variável) apontado por <em>pa</em> recebe 10. <em>pa</em> continua armazenando o endereço de <em>a</em> (obtido por &<em>a</em>).</td>
</tr>

</table>

<br>

## Vídeos de Apoio

| Thumb | Descrição |
| --- | --- |
| [![img](https://img.youtube.com/vi/n5TJPAhquKo/default.jpg)](https://www.youtube.com/watch?v=n5TJPAhquKo) | <sup>[Prof Romerson Oliveira]</sup> [AEDS 9: Ponteiros - Conceitos e Funcionamento na Memória](https://www.youtube.com/watch?v=n5TJPAhquKo)<br><sub>(9:49, YouTube, Jan/2021)</sub>
| [![img](https://img.youtube.com/vi/3p6_-sxrJ2c/default.jpg)](https://www.youtube.com/watch?v=3p6_-sxrJ2c) | <sup>[Professor Rafael Ivo]</sup> [Programação em C - 11 - Ponteiros](https://www.youtube.com/watch?v=3p6_-sxrJ2c)<br><sub>(10:16, YouTube, Ago/2020)</sub>

<br>
