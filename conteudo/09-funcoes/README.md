<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conceitos</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;02/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Funções Definidas pelo Usuário
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Conceitos

> Uma ___função___ é uma sub-rotina de um programa. Pode receber parâmetros (ou argumentos) e retornar um valor.

> Para declarar uma função é necessário informar o tipo do retorno, o nome da função e os parâmetros recebidos pela função.

> Na linguagem C, funções que não retornam nenhum valor são declaradas com o tipo de retorno `void`, e não requerem o uso do `return`. Contudo, o `return` (sem o valor do retorno) pode ser utilizado para encerrar a execução da função.

> Em algumas linguagens de programação (por exemplo, Pascal), uma funções que não retorna nenhum valor é chamada de _procedimento_.

<br>

## Estrutura de um Programa que Utiliza Funções Definidas pelo Usuário (Programador)

```c
// Inclusão das bibliotecas
#include <stdio.h>
// ...

// Protótipos das funções
// ...

int main()
{
    // ...

    return 0;
}

// Implementação das funções
// ...
```

<br>

## Exemplos

### Função que converte polegadas para centímetros:

```c
float pol2cm(float pol)
{
    return 2.54 * pol;
}
```

### Função que retorna o IMC (Índice de Massa Corporal) de uma pessoa:

```c
float calcularImc(float peso, float altura)
{
    if (peso <= 0 || altura <= 0)
        return -1;

    return peso / (altura * altura);
}
```

* Exemplo de uso da função `calcularImc()` em um programa em C:

```c
#include <stdio.h>

// Protótipo (ou assinatura) da função.
float calcularImc(float peso, float altura);

int main()
{
    float peso = 67, altura = 1.74, imc;

    imc = calcularImc(peso, altura);
    if (imc > 0)
        printf("IMC = %.1f\n", imc);
    else
        printf("Valores invalidos!\n");

    return 0;
}

// Função que calcula o IMC de uma pessoa.
float calcularImc(float peso, float altura)
{
    if (peso <= 0 || altura <= 0)
        return -1;

    return peso / (altura * altura);
}
```

### Função que limpa a tela de saída (requer a biblioteca `<stdlib.h>`):

```c
void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
```

&nbsp;&nbsp;&nbsp;&nbsp;OBS.: A função `system()` executa um comando do sistema operacional. Os comandos `clear` e `cls` são específicos das plataformas Linux e Windows, respectivamente.

* Exemplo de uso da função `clrscr()` ("clear screen"):

```c
#include <stdio.h>
#include <stdlib.h>

// Protótipo (ou assinatura) da função.
void clrscr();

int main()
{
  clrscr();
  printf("Ola mundo!");

  return 0;
}

// Limpa a tela de saída no Windows, Linux ou Mac.
void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
```

<br>
