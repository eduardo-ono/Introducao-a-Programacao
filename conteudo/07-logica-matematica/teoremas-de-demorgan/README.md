<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo > Lógica Matemática</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;11/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Teoremas de DeMorgan</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Teormas de DeMorgan

### Em Linguagem Matemática

> Sejam _A_ e _B_ proposições. A conjunção de duas ou mais proposições é realizada através dos operadores "E" e "OU", sendo que o resultado da operação também é uma proposição. Na conjunção que utiliza ambos os operadores, o "E" tem precedência sobre o "OU", da mesma forma que a operação de multiplicação tem precedência sobre a soma.

* Negação do "E":

  * <strong> ¬ (_A_ &and; _B_) &nbsp;=&nbsp; ¬ _A_ &nbsp;&or;&nbsp; ¬ _B_ </strong>

* Negação do "OU":

  * <strong> ¬ (_A_ &or; _B_) &nbsp;=&nbsp; ¬ _A_ &nbsp;&and;&nbsp; ¬ _B_ </strong>

### Em Linguagem C

* <strong> ! (_A_ && _B_) &nbsp;=&nbsp; ! _A_ &nbsp;||&nbsp; ! _B_ </strong>

* <strong> ! (_A_ || _B_)  &nbsp;=&nbsp; ! _A_ &nbsp;&&&nbsp; ! _B_ </strong>

<br>

### Demonstração dos Teoremas de DeMorgan:

* <strong> ¬ ( _A_ &and; _B_ ) &nbsp;=&nbsp; ¬ _A_ &nbsp;&or;&nbsp; ¬ _B_ </strong>

|  _A_  |  _B_  | ¬ _A_ | ¬ _B_ | _A_ &and; _b_ | ¬ (_A_ &and; _B_) | ¬ _A_ &or; ¬ _B_ |  
| :-: | :-: |  :-:  |  :-:  |      :-:      |         :-:       |        :-:       |
|  0  |  0  |   1   |   1   |       0       |          1        |         1        |
|  0  |  1  |   1   |   0   |       0       |          1        |         1        |
|  1  |  0  |   0   |   1   |       0       |          1        |         1        |
|  1  |  1  |   0   |   0   |       1       |          0        |         0        |

<br>

* <strong> ¬ ( _A_ &or; _B_ ) &nbsp;=&nbsp; ¬ _A_ &nbsp;&and;&nbsp; ¬ _B_ </strong>

|  _A_  |  _B_  | ¬ _A_ | ¬ _B_ | _A_ &or; _b_ | ¬ (_A_ &or; _B_) | ¬ _A_ &and; ¬ _B_ |  
| :-: | :-: |  :-:  |  :-:  |      :-:     |        :-:       |         :-:       |
|  0  |  0  |   1   |   1   |       0      |         1        |          1        |
|  0  |  1  |   1   |   0   |       1      |         0        |          0        |
|  1  |  0  |   0   |   1   |       1      |         0        |          0        |
|  1  |  1  |   0   |   0   |       1      |         0        |          0        |

<br>

### Exemplos em Linguagem em C

* Programa que verifica se o peso de uma pessoa está normal ou não, segundo o critério do IMC (Índice de Massa Corporal):

```c
if (imc >= 18.5 && imc < 25.0)
    printf("Peso normal.\n");

if (imc < 18 || imc >= 25.0)
    printf("Peso abaixo ou acima do ideal.\n" );
```

* Código equivalente:

```c
a = imc >= 18.5;
b = imc < 25.0;

if (a && b)
    printf("Peso normal.\n");

if (!a || !b)
    printf("Peso abaixo ou acima do ideal.\n");
```

OBS.: A linguagem C não aceita "sujeito oculto" como na Matemática:

* _Joãozinho tropeçou e caiu._ // ERRADO (em programação)!

* _Joãozinho tropeçou e Joãozinho caiu._  // CORRETO!

* IMC maior ou igual a 18.5 e menor que 25.0 // ERRADO (em programação)! Não aceita "sujeito oculto". Na Matemática OK.

* IMC maior ou igual a 18.5 e IMC menor que 25.0 // CORRETO!

```c
if (18.5 <= imc < 25.0)  // ERRADO!
    printf("Peso normal.\n");

if (imc >= 18.5 && imc < 25.0)  // CORRETO!
    printf("Peso normal.\n");
```

<br>
