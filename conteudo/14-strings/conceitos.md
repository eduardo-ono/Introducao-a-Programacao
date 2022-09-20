
# Conceitos de Strings

__Prof. Eduardo Ono__

&nbsp;

## Definição

> Uma __*string*__ é um array de caracteres finalizado com o caractere `'\0'`.

Obs.: Não existe na linguagem C o tipo _string_.

&nbsp;

## Declaração

Uma _string_ é declarada da mesma forma que um vetor de caracteres. Uma vez definido o tamanho máximo da _string_, deve-se alocar um elememto a mais no vetor para comportar o caracter `'\0'` que determina o final da _string_.

```c
char str[65]; // Alocação de espaço para 64 caracteres + '\0'
```

&nbsp;

## Inicialização de uma string

Uma _string_ pode ser inicializada na declaração. O caractere `'\0'` será automaticamente adicionado no final da _string_. Porém, o tamanho da _string_ não poderá ser alterado.

```c
char nome[] = "Fulano de Tal";
```

Outra forma é atribuir caractere a caracter ao vetor, sendo, nesse caso, a atribuição do caractere `'\0'` ao final da _string_.

```c
char nome[65];

nome[0] = 'A';
nome[1] = 'n';
nome[2] = 'a';
nome[3] = '\0';
```

&nbsp;

## Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/x3YFQjWFGy4/default.jpg)](https://www.youtube.com/watch?v=x3YFQjWFGy4) | <sup>[Eduardo Casavella]</sup><br>[__Strings: conceito e utilização - Linguagem C__](https://www.youtube.com/watch?v=x3YFQjWFGy4)<br><sub>(11:14, YouTube, Mai/2019)</sub>
| [![img](https://img.youtube.com/vi/4x7Qht5Dmcw/default.jpg)](https://www.youtube.com/watch?v=4x7Qht5Dmcw) | <sup>[Pietro Martins De Oliveira]</sup><br>[__Linguagem C - Aula 6.2 - Strings: trabalhando com dados de texto em C (2022)__](https://www.youtube.com/watch?v=4x7Qht5Dmcw)<br><sub>(51:15, YouTube, Jul/2022)</sub>
