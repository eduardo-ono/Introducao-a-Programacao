<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo > Estruturas de Seleção</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;10/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
if
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Conceitos

<table>
<tr>
  <th>Código em C</th>
  <th>Fluxograma</th>
</tr>

<tr>
<td valign="top">

```c
if (teste_condicional == true)
  instrução;
```

ou 

```c
if (teste_condicional == true)
{
  instrução;
}
```
</td>

<td>

```mermaid
flowchart TD
BEGIN(( )) --> C{A condição é verdadeira?}
C --> |true| I[Executar a instrução]
I --> END(( ))
C --> |false| END
```

</td>
</tr>

<tr></tr>

<tr>
<td>

```c
if (teste_condicinal == true)
{
  instrução_1;
  instrução_2;
  ...
  instrução_n;
}
```

</td>

<td>

```mermaid
flowchart TD
BEGIN(( )) --> C{A condição é verdadeira?}
C --> |true| I[Executar a sequência de instruções:<br> instrução 1<br> instrução 2<br> ...<br> instrução n]
I --> END(( ))
C --> |false| END
```

</td>
</tr>
</table>

<br>

## Exemplos

* Verifica se uma pessoa é menor de idade:

<table>
<tr>
  <th>Código em C</th>
  <th>Fluxograma</th>
</tr>
<tr>
<td valign="top">

```c
#include <stdio.h>

int main()
{
    int idade;

    scanf("%d", &idade);
    if (idade < 18)
        printf("Menor de idade.\n");

    return 0;
}
```

</td>

<td>

```mermaid
flowchart TD
INICIO([INÍCIO]) --> I1[Declarar e definir a variável 'idade']
I1 --> INPUT[/Entrar com a idade/]
INPUT --> C{idade < 18 ?}
C --> |true| OUTPUT[Imprimir 'Menor de idade']
OUTPUT --> RETURN[Retornar 0]
C --> |false| RETURN
RETURN --> FIM([FIM])
```

</td>

</tr>
</table>

<br>
