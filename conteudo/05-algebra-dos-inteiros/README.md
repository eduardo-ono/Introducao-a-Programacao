> <h5> Introdução à Programação > Conteúdo </h5>

# Álgebra dos Inteiros

Prof. Eduardo Ono

<br>

## Divisão de Inteiros na Linguagem C

A linguagem C utiliza o mesmo símbolo ('/') para o operador da divisão inteira e a divisão de números de ponto flutuante. Quando ambos os operadores são inteiros, é realizada a divisão inteira, que resulta em um número inteiro. Quando um dos operandos é um número de ponto flutuante, a divisão é sobre números "reais".

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
