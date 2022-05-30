<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Listas de Exercícios</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;23/05/2022</small>
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

* Exemplo

| Entrada | Saída |
| --- | :-: |
| 4562 | 4 &nbsp; 5 &nbsp; 6 &nbsp; 2

<br>

## Exercício 2

&nbsp;&nbsp;&nbsp;&nbsp;([DEITEL-6e_2011], 5.25, p. 154, adaptado) __*Achar o mínimo*__. Escreva uma função que receba três números do tipo `float`. A função deverá retornar o menor dentre esses três números.

<br>

## Exercício 3

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(DEITEL-6e_2011, 5.26, p. 155, adaptado) __*Números Perfeitos.*__ Um número inteiro positivo é considerado um _número perfeito_ se a soma de seus divisores próprios, incluindo o 1 mas não o próprio número, for igual ao próprio número. Por exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3. Escreva uma função que determina se um número é perfeito. Use essa função em um programa que determine e imprima todos os números perfeitos entre 1 e 10000. Imprima os divisores de cada número perfeito para confirmar se o número é realmente perfeito. Desafie o poder de seu computador testando números muito maiores que 10000.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;OBS.: A definição de _número perfeito_ no livro do Deitel não é precisa. O autor utiliza _fatores_ no lugar de _divisores_.

<br>

<details>
<summary>
  <strong>Resolução</strong>
</summary>
<section markdown="1">

```c
#include <stdio.h>
#include <stdbool.h>

bool verificarNumPerfeito(int num);
void imprimirDivisores(int num);

int main()
{
    for (int num = 1; num <= 10000; num++)
        if (verificarNumPerfeito(num))
        {
            printf("%d  ->  ", num);
            imprimirDivisores(num);
        }
    printf("\n");

    return 0;
}

bool verificarNumPerfeito(int num)
{
    int soma_divisores = 0;

    for (int divisor = 1; divisor <= num/2; divisor++)
        if (num % divisor == 0)
            soma_divisores += divisor;

    return (num == soma_divisores);
}

// Imprime os divisoes, exceto o próprio número.
void imprimirDivisores(int num)
{
    for (int divisor = 1; divisor <= num/2; divisor++)
        if (num % divisor == 0)
            printf("%d  ", divisor);
    printf("\n");
}
```

</section>
</details>

<br>

## Exercício 4

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(DEITEL-6e_2011, 5.27, p. 155, adaptado) __*Números primos.*__ Um inteiro é considerado _primo_ se for divisível apenas por 1 e por ele mesmo. Por exemplo, 2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;a) Escreva uma função que determina se um número é primo ou não, ou seja, retorna um valor booleano.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;b) Use essa função em um programa que determina e imprime todos os números primos entre 1 e 10000. Quantos desses 10000 números você realmente precisa testar antes de ter certeza de que encontrou todos os primos?

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;c) Inicialmente, você poderia pensar que _n_/2 é o limite superior dentro do qual deveria testar para ver se um número é primo, mas você só precisa ir até a raiz quadrada de _n_. Por quê? Reescreva o programa e execute-o das duas maneiras. Estime a melhoria do desempenho.

<br>

## Exercício 5

&nbsp;&nbsp;&nbsp;&nbsp;(DEITEL-6e_2011, 5.28, p. 155, adaptado) __*Invertendo dígitos*__. Escreva uma função que receba um valor inteiro positivo e retorne o número com os seus dígitos invertidos.

* Exemplo:

| Entrada | Retorno |
| :-: | :-: |
| 7631 | 1367 |

<br>

## Exercício 6

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__*Palíndromo*__. Um __*número palíndromo*__ (ou __*capicua*__) é um número natural que permanece igual quando lido de trás para frente. Por extensão, __*palíndromo*__ é qualquer sequência de elementos com simetria linear, ou seja, que apresenta a mesma sequência de unidades nos dois sentidos.<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Aproveitando a função do exercício anterior, escreva um programa que verifica se um número inteiro positivo é _palíndromo_ ou não.


* Exemplo

| Entrada | Saída |
| :-: | --- |
| 1 | É palíndromo. |
| 2 | É palíndromo. |
| 10 | Não é palíndromo. |
| 11 | É palíndromo. |
| 33 | É palíndromo. |
| 121 | É palíndromo. |

<br>

## Exercício 7

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(DEITEL-6e_2011, 5.31, p. 155, adaptado) __*Jogando uma moeda.*__ Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deverá imprimir Cara ou Coroa. Deixe o programa jogar 100 vezes e conte o número de vezes que cada lado da moeda aparece. Imprima os resultados. O programa deverá chamar uma função _flip_ separada, que não utilize argumentos e retorne 0 (zero) para cara e 1 para coroa. [_Nota_: se o programa realisticamente simula o lançamento de uma moeda, então cada lado da moeda deve aparecer aproximadamente em metade do tempo para um total de aproximadamente 50 caras e 50 coroas.]<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Obs.: Utilize a função `srand(time(0))` para gerar uma semente para a função `rand()`. São necessárias as bibliotecas `stdlib.h`, para as funções `srand()` e `rand()`, e a biblioteca `time.h`, para a função `time()`.

* Exemplos de geração de números aleatórios 

```c
srand(time(0));
printf("%d\n", rand() % 10); // Imprime um inteiro entre 0 e 9
printf("%d\n", rand() % 50); // Imprime um inteiro entre 0 e 49
printf("%d\n", rand() % 100); // Imprime um inteiro entre 0 e 99
printf("%.1f\n", 0.1 * (rand() % 100)); // Imprime um float entre 0.0 e 9.9
printf("%.1f\n", 0.1 * (rand() % 1000)); // Imprime um float entre 0.0 e 99.9
printf("%.1f\n", 0.1 * (rand() % 10000)); // Imprime um float entre 0.0 e 999.9
printf("%.2f\n", 0.01 * (rand() % 10000)); // Imprime um float entre 0.00 e 99.99
```

<br>

## Exercício 8

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__*Fórmula de Bhaskara.*__ Dada uma equação do 2º Grau do tipo _ax_^2 + _bx_ + _c_ = 0, com a&nbsp;&ne;&nbsp;0, escreva uma função que receba os parâmetros _a_, _b_ e _c_ e calcule as raízes _x_<sub>1</sub> e _x_<sub>2</sub> da equação.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Obs.: A função não deve imprimir nenhum resultado, mas a função principal deverá imprimir as raízes calculadas pela função.

<br>

## Exercício 9

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Escreva uma função que receba um número inteiro positivo no sistema decimal e retorne o número no sistema binário.

<br>

<details>
<summary>
  <strong>Resolução</strong>
</summary>
<section markdown="1">

```c
int dec2bin(int dec)
{
    int digito;
    int bin = 0;
    int pot = 1;

    while (dec > 0)
    {
        digito = dec % 2;
        bin += digito * pot;
        pot *= 10;
        dec /= 2;
    }

    return bin;
}
```

</section>
</details>

<br>

## Exercício 10

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Escreva um programa que peça ao usuário para entrar com um número inteiro positivo no sistema decimal e imprima o número no sistema hexadecimal.

<br>

[DEITEL-6e_2011]: ../README.md#DEITEL-6e_2011
