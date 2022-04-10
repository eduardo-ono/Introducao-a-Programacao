<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;09/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
if..else
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Conceitos

> A instrução if..else é utilizada quando se quer desviar a execução das instruções mediante um teste booleano.

Exemplo: Instrução que determina se um número inteiro é par ou ímpar.

<table>
<tr>
<tr>
    <th>Código em C</th>
    <th>Fluxograma</th>
</tr>

<tr>
<td valign="top">

```c
int main()
{
  int num;

  scanf("%d", &num);
  if (num % 2 == 0)
      printf("O numero e par.\n");
  else
      printf("O numero e impar.\n");

  return 0;
}
```

</td>

<td>

```mermaid
flowchart TD
INICIO([INÍCIO]) --> DECLARACAO[Declaração da variável num]
DECLARACAO --> INPUT[/Entrada do valor de num/]
INPUT --> C{'num' é par?}
C --> |true| OUTPUT_TRUE[Imprime que o número é par]
C --> |false| OUTPUT_FALSE[Imprime que o número é ímpar]
OUTPUT_TRUE --> RETURN[Retorno da função]
OUTPUT_FALSE --> RETURN
RETURN --> FIM([FIM])
```

</td>

</tr>
</table>

<br>
