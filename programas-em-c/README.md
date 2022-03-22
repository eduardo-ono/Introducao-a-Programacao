> ##### Introdução à Programação

# Programas em C

Prof. Eduardo Ono

<br>

<details id="caixa-eletronico">
  <summary>
    <strong>Caixa Eletrônico</strong>
  </summary>
  <section markdown="1">
  <sup><hr></sup>

- Descrição

  - Programa que determina a quantidade mínima de cada cédula (nota) a ser entregue por um caixa eletrônico, mediante o valor do saque.

  * Versões

    * Considera a disponibilidade de cédulas de R$ 1,00 em diante.

      * [caixa-eletronico-01.c](./caixa-eletronico/caixa-eletronico-01.c)

    * Considera a disponibilidade de cédulas de R$ 2,00 em diante, não sendo possível o saque de R$ 1,00 ou R$ 3,00.

      * [caixa-eletronico-02.c](./caixa-eletronico/caixa-eletronico-02.c)

      * Comentários: Para valores do saque para os quais o algoritmo não funciona, subtrai R$ 4,00 do valor do saque, o que fará com que o algoritmo funcione corretamente, e compensa a subtração atribuindo 2 notas de R$ 2,00 a mais na entrega das cédulas.

  <sub><hr></sub>
  </section>
</details>

<br>
