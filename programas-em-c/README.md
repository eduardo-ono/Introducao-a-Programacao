> ##### Introdução à Programação

# Programas em C

Prof. Eduardo Ono

<br>

## Tópicos

### Álgebra do Inteiros

<details id="caixa-eletronico">
  <summary>
    <strong>Caixa Eletrônico</strong>
  </summary>
  <section markdown="1">
<sup><hr></sup>

* Descrição

  * Programa que determina a quantidade mínima de cada cédula (nota) a ser fornecida por um caixa eletrônico, mediante o valor do saque.

* Versões

  | Programa | Comentário |
  | --- | --- |
  | [caixa-eletronico-01.c](./algebra-dos-inteiros/caixa-eletronico-01.c) | Considera a disponibilidade de cédulas de R$ 1,00 em diante.
  | [caixa-eletronico-02.c](./algebra-dos-inteiros/caixa-eletronico-02.c) | Considera a disponibilidade de cédulas de R$ 2,00 em diante, não sendo possível o saque de R$ 1,00 ou R$ 3,00.<br> Para valores do saque para os quais o algoritmo do programa `caixa-eletronico-01.c` não funciona sem notas de R$ 1,00, subtrai R$ 4,00 do valor do saque, o que fará com que o algoritmo funcione corretamente, e compensa a subtração atribuindo 2 notas de R$ 2,00 a mais na entrega das cédulas.

<sub><hr></sub>
  </section>
</details>

<br>

### Estruturas de Seleção

<br>

### Estruturas de Repetição

<br>

### Ponteiros (Apontadores)

<br>

### Funções Definidas pelo Usuário

<details id="bhaskara">
  <summary>
    <strong>Fórmula de Bhaskara</strong>
  </summary>
  <section markdown="1">
<sup><hr></sup>

* Descrição

  * Programa que determina as duas soluções de uma equação do 2o. grau pela Fórmula de Bhaskara.

* Programas

  | Programa | Comentário |
  | --- | --- |
  | [bhaskara-01.c](./funcoes/bhaskara-01.c) | Utiliza passagem de parâmetros por referência.

<sub><hr></sub>
  </section>
</details>

### Operadores Bit-a-Bit (Bitwise Operators)

<details id="par-impar-bitwise">
  <summary>
    <strong>Par-Impar (Bitwise)</strong>
  </summary>
  <section markdown="1">
<sup><hr></sup>

* Descrição

  * Programa que determina se um número inteiro é par ou ímpar através de operadores bit-a-bit.

* Programas

  | Programa | Comentários |
  | --- | --- |
  | [par-impar-bitwise.c](./operadores-bit-a-bit/par-impar-bitwise.c) | Determina se um inteiro é par ou ímpar através de operadores bit-a-bit.

<sub><hr></sub>
  </section>
</details>

<br>
