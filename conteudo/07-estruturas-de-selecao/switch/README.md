<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;10/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Estrutura de Seleção "switch"
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Conceitos

> A instrução `switch` substitui a instrução `if..else` aninhada, quando o teste condicional envolve apenas valores inteiros (tipos `char`, `int` e `bool (C99)`).

<br>

## Exemplos

<table>
<tr>
  <th>Código em C</th>
  <th>Fluxograma</th>
</tr>

<tr>
<td valign="top">
  <table>
  <tr><th align="left">if-else "aninhado"</th></tr>
  <tr><td>

```c
int main()
{
    int mes;

    printf("Entre com o numero do mes: );
    scanf("%d", &mes);

    if (mes == 1) printf("Janeiro\n");
    else if (mes == 2) printf("Fevereiro\n");
    else if (mes == 3) printf("Marco\n");
    // ...
    else if (mes == 12) printf("Dezembro\n");
    else printf("Mes invalido!\n");
    
    return 0;
}
```
  </td></tr>
  </table>

  <table>
  <tr><th align="left">switch</th></tr>
  <tr><td>

  ```c
  int main()
  {
      int mes;

      printf("Entre com o numero do mes: );
      scanf("%d", &mes);

      switch (mes)
      {
          case 1: printf("Janeiro\n"); break;
          case 2: printf("Fevereiro\n"); break;
          case 3: printf("Marco\n"); break;
          // ...
          case 12: printf("Dezembro\n"); break;
          default: printf("Mes invalido!\n");
      }

      return 0;
  }
  ```

  </td></tr>
  </table>

</td>

<td>

  ```mermaid
  flowchart TD
  INICIO([INÍCIO]) --> I1[Declaração da variável 'mes']
  I1 --> INPUT[/Entrada do valor do mês/]
  INPUT --> C1{mes == 1 ?}
  C1 --> |true| OUTPUT1[Imprimir 'Janeiro']
  OUTPUT1 --> RETORNO
  C1 --> |false| C2{mes == 2 ?}
  C2 --> |true| OUTPUT2[Imprimir 'Fevereiro']
  OUTPUT2 --> RETORNO
  C2 --> |false| C3{mes == 3 ?}
  C3 --> |true| OUTPUT3[Imprimir 'Março']
  OUTPUT3 --> RETORNO
  C3 -.-> |false| C12{mes == 12 ?}
  C12 --> |true| OUTPUT12[Imprima 'Dezembro']
  OUTPUT12 --> RETORNO
  C12 --> |false| DEFAULT[Imprima 'Mês inválido!']
  DEFAULT --> RETORNO
  RETORNO[Retorno da função] --> FIM
  ```

</td>
</tr>
</table>
