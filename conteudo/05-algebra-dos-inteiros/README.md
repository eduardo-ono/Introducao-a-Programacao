<table>
<tr>
<td align="left" width="8000">
    <small>Introdução à Programação > Conteúdo</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;05/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Álgebra dos Inteiros
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Divisão de Inteiros na Linguagem C

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A divisão de um número inteiro _D_ por um outro inteiro _d_ é dada por:

    D = d x q + r

onde _D_ é o dividendo, _d_ o divisor, _q_ o quociente e _r_ o resto da divisão.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;A linguagem C utiliza o símbolo ('/') tanto para o operador da divisão inteira quanto para a divisão de números de ponto flutuante. Quando ambos os operandos são inteiros, é realizada a divisão inteira, que resulta em um número inteiro. Quando um dos operandos é um número de ponto flutuante, a divisão é sobre números "reais".

* Exemplos:

  ```c
  int a;
  float x;

  a = 1 / 2;
  printf("%d", a); // saída: 0

  x = 1 / 2; // A divisão continua sendo uma divisão de inteiros
  printf("%f", x); // saída: 0.000000

  x = 1.0 / 2;
  printf("%f", x); // saída: 0.500000

  x = 1 / 2.0;
  printf("%f", x); // saída: 0.500000

  x = 1.0 / 2.0;
  printf("%f", x); // saída: 0.500000
  ```

<br>
