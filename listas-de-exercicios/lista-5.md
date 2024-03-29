<table>
<tr>
<td align="left" width="8000">
    <small>Introdução à Programação > Listas de Exercícios</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;03/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista 5 - Estruturas de Repetição
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Exercício 1

&nbsp;&nbsp;&nbsp;&nbsp;Escreva um programa que peça ao usuário para entrar com dois números inteiros _n_ e _num_. O programa deverá imprimir _n_ vezes o número _num_.

* Exemplos:

| Entrada | Saída |
| --- | :-: |
| 3 &nbsp; 8 | 8 &nbsp;8 &nbsp;8 
| 1 &nbsp; 4 | 4
| 7 &nbsp; 10 | 10 &nbsp;10 &nbsp;10 &nbsp;10 &nbsp;10 &nbsp;10 &nbsp;10
| 0 &nbsp; 9 | 

<br>

## Exercício 2

&nbsp;&nbsp;&nbsp;&nbsp;[SEDWICK_1990, _adaptado_] Escreva um programa que peça ao usuário para entrar com uma fração no formato _a_/_b_. O programa deverá simplificar a fração, se possível.

* Exemplo:

| Entrada | Saída |
| :-: | :-: |
| 5/10 | 1/2
| 180/100 | 9/5
| 18/3 | 6
| 3/2 | 3/2
| 6/0 | Divisão por zero.
| 0/0 | Indeterminado.

<br>

## Exercícios do livro [DEITEL-6e_2011]

* 4.11 (pág. 109)

* 4.12 (pág. 109)

* 4.13 (pág. 109) 

* 4.20 (pág. 110)

* 4.27 (pág. 110)

* 4.29 (pág. 111)

<br>

## Exercício 9

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__*Números triangulares*__. Um __número triangular__ é um número natural que pode ser representado na forma de um triângulo equilátero. O _n_-ésimo número triangular pode ser visto como o número de pontos de uma forma triangular com lado formado por _n_ pontos, o que equivale à soma dos primeiros _n_ números naturais.

<p align="center">
<img src="./imagens/numeros-triangulares.png" alt="img" width="250px">
</p>

&nbsp;&nbsp;&nbsp;&nbsp;a) Escreva um programa que peça ao usuário para entrar com um número inteiro positivo (_n_ > 0). O programa deverá imprimir a sequência dos _n_ primeiros números triangulares e calcular a média aritmética desses números.

&nbsp;&nbsp;&nbsp;&nbsp;b) Há alguma relação entre o número de pares e o número de ímpares na sequência dos _n_ primeiros números triangulares?

| _n_ | Pares | Impares |
| :-: | :-: | :-: |
| 1 | 0 | 1
| 2 | 0 | 2
| ...

&nbsp;&nbsp;&nbsp;&nbsp;c) A média aritmética dos _n_ primeiros números triangures é sempre um número inteiro, exceto quando _n_ é múltiplo de 3. Por quê?

| _n_ | Soma / _n_ | Média |
| :-: | :-: | :-: |
| 1 | 1 / 1 | 1
| 2 | 4 / 2 | 2
| 3 | 10 / 3  | 3.333...
| 4 | 20 / 4 | 5
| 5 | 35 / 5 | 7
| 6 | 56 / 6 | 9.333...
| 7 | 84 / 7 | 12
| ... | ... | ...

<br>

<details>
<summary>
  <strong>Resolução</strong>
</summary>
<section markdown="1">

a) 

| _n_ | _número triangular (nt)_ |
| :-: | --- |
| 1 | 1 |
| 2 | 1 + 2 = 3
| 3 | 1 + 2 + 3 = 6
| 4 | 1 + 2 + 3 + 4 = 10
| 5 | 1 + 2 + 3 + 4 + 5 = 15
| ... | ...
| _n_ | 1 + 2 + 3 + ... + _n_ = _n_(_n_ + 1) / 2

```c
#include <stdio.h>

int main()
{
    int num, nt;

    printf("Entre com um número inteiro positivo: ");
    scanf("%d", &num);

    for (int n = 1; n <= num; n++)
    {
        nt = n * (n + 1) / 2;
        printf("%d  ", nt);
    }
    printf("\n");

    return 0;
}
```

b)

c)

| _n_ | Soma dos _n_ primeiros números triangulares |
| :-: | --- |
| 1 | 1 = 1
| 2 | 1 + 3<br>= 4<br>= 2&sup2;
| 3 | 1 + 3 + 6 = (1 + 3) + 6<br>= 4 + 6<br>= 2&sup2; + 6
| 4 | 1 + 3 + 6 + 10 = (1 + 3) + (6 + 10)<br>= 4 + 16<br>= 2&sup2; + 4&sup2;
| 5 | (1 + 3) + (6 + 10) + 15<br>= 4 + 16 + 15<br>= 2&sup2; + 4&sup2; + 15
| 6 | (1 + 3) + (6 + 10) + (15 + 21)<br>= 4 + 16 + 36<br>= 2&sup2; + 4&sup2; + 6&sup2;
| 7 | (1 + 3) + (6 + 10) + (15 + 21) + 28<br>= 2&sup2; + 4&sup2; + 6&sup2; + 28
| 8 | (1 + 3) + (6 + 10) + (15 + 21) + (28 + 36)<br>= 2&sup2; + 4&sup2; + 6&sup2; + 8&sup2;
| ... | ...
| _n_ | _n_(_n_ + 1)(_n_ + 2) / 6

</section>
</details>

<br>

## Exercício 10

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Supondo que os dois programas a seguir sejam executados ao mesmo tempo, qual dos dois termina primeiro? Justifique.

```c
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000000; i++)
        printf("[%d] Susanna Hoffs\n", i);

    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000000; i++)
        printf("[%d] Susanna Hoffs\r", i);

    return 0;
}
```

<br>

[DEITEL-6e_2011]: ../README.md#DEITEL-6e_2011
