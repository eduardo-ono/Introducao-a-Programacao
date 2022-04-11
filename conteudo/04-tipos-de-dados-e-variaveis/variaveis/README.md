> Introdução à Programação > Conteúdo

# Variáveis

Prof. Eduardo Ono

<br>

## Conceitos

> _Declarar_ uma variável é informar o tipo e o nome no programa.

* A linguagem C aceita a declaração de várias variáveis na mesma instrução. A separação entre as variáveis é feita por uma vírgula.

```c
int main()
{
  int idade;
  float peso, altura; // Declaração de duas variáveis na mesma instrução
}
```

> _Definir_ uma variável é atribuir um valor a uma variável. A atribuição é realizada através do operador de atribuição `=`.

```c
int main()
{
    // Declaração de variáveis.
    int idade;
    float peso, altura;

    // Atribuição de valores a variáveis.
    idade = 56;
    peso = 74;
    altura = 1.72;
}

```

* A linguagem C aceita a declaração e definição de uma variável na mesma instrução.

```c
int main()
{
  int idade = 56;
  float peso = 74, altura = 1.72;
}
```

<br>

## Observações

* Todas as variáveis devem ser declaradas antes de serem utilizadas.

* Na linguagem C, todas as variáveis devem ser declaradas no início da função na qual serão utilizadas.

<br>

## Vídeos de Apoio

| Thumb | Descrição |
| --- | --- |
| [![thumb](https://img.youtube.com/vi/XOpC05ywEvQ/default.jpg)](https://www.youtube.com/watch?v=n68tJh2mIx4&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=4) | <sup>[Bóson Treinamentos]</sup> [04 - Programação em Linguagem C - Declaração e Atribuição de Variáveis](https://www.youtube.com/watch?v=n68tJh2mIx4&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=4)<br><sub>(32:26, YouTube, Jul/2017)</sub>

<br>
