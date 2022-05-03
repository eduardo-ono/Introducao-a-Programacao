<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo > Tipos de Dados e Variáveis > Tipos de Dados</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;03/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Representação de Números na Memória
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Como Utilizar o Programa

* Copiar os arquivos `console.h` (arquivo cabeçalho) e `console.c` (biblioteca) para o mesmo diretório onde se encontra o programa.

* Incluir no programa os arquivos `console.h` e `console.c`. Como estarão no mesmo diretório, não é necessário especificar o "path":

```c
#include "console.h"
#include "console.c"
```

* Adaptar as instruções `int num;` conforme desejado, por exemplo, para `char num;`, `float num;`, `double num;`, etc.

* Adaptar a instrução `scanf("%d", &num);` conforme o tipo escolhido para a variável `num`, por exemplo, `scanf("%f", &num);` se `num` for do tipo `float`.

<br>

## Sugestão de valores a serem testados

| Tipo | Valores |
| :-: | :-: |
| char | 1<br>127<br>128<br>-1 |
| int | 1<br>255<br>256<br>1.048.576<br>1.073.741.824<br>-1<br>-2 |
| float | 1<br>255<br>256<br>-1 |
| double | 1<br>255<br>256<br>-1 |
