<table>
<tr>
<td align="left" width="8000">
    <small>Introdução à Programação > Listas de Exercícios</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;17/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Lista 6 - Funções Definidas pelo Usuário
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Exercício 1

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.22, p. 154, adaptado) Escreva uma função que receba um número inteiro entre 1 e 32767 e o imprima como uma série de dígitos, com dois espaços entre cada dígito.

* Exemplo:

| Entrada | Saída |
| --- | :-: |
| 4562 | 4 &nbsp; 5 &nbsp;6 &nbsp; 2

<br>

## Exercício 2

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.25, p. 154, adaptado) _Achar o mínimo_. Escreva uma função que receba três números do tipo float. A função deve retornar o menor dentre esses três números.

<br>

## Exercício 3

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.26, p. 155, adaptado) _Números perfeitos._ Um número inteiro positivo é considerado um _número perfeito_ se a soma de seus fatores, incluindo o 1 (mas não o próprio número) for igual ao próprio número. Por exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3. Escreva uma função que determina se um número é perfeito. Use essa função em um programa que determine e imprima todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para confirmar se o número é realmente perfeito. Desafie o poder de seu computador testando números muito maiores que 1000.

<br>

## Exercício 4

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.27, p. 155, adaptado) ___Números primos.___ Um intriro é considerado _primo_ se for divisível apenas por 1 e por ele mesmo. Por exemplo, 2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são.

&nbsp;&nbsp;&nbsp;&nbsp;a) Escreva uma função que determine se um número é primo.

&nbsp;&nbsp;&nbsp;&nbsp;b) Use essa função em um programa que determine e imprima todos os números primos entre 1 e 10000. Quantos desses 10000 números você realmente precisa testar antes de ter certeza de que encontrou todos os primos?

&nbsp;&nbsp;&nbsp;&nbsp;c) Inicialmente, você poderia pensar que _n_/2 é o limite superior dentro do qual deveria testar para ver se um número é primo, mas você só precisa ir até a raiz quadrada de _n_. Por quê? Reescreva o programa e execute-o das duas maneiras. Estime a melhoria do desempenho.

<br>

## Exercício 5

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.28, p. 155, adaptado) ___Invertendo dígitos.___ Escreva uma função que receba um valor inteiro e retorne o número com seus dígitos invertidos.

* Exemplo:

| Entrada | Saída |
| :-: | :-: |
| 7631 | 1367 |

<br>

## Exercício 6

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.31, p. 155) ___Jogando uma moeda.___ Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deverá imprimir Cara ou Coroa. Deixe o programa jogar 100 vezes e conte o número de vezes que cada lado da moeda aparece. Imprima os resultados. O programa deverá chamar uma função _flip_ separada, que não utilize argumentos e retorne 0 (zero) para cara e 1 para coroa. [_Nota_: se o programa realisticamente simula o lançamento de uma moeda, então cada lado da moeda deve aparecer aproximadamente em metade do tempo para um total de aproximadamente 50 caras e 50 coroas.]
