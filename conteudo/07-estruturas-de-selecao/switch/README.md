> ##### Introdução à Programação > Conteúdo > Estruturas de Seleção

# switch

Prof. Eduardo Ono

<br>

## Conceitos

<br>

## Exemplos



```c
int main()
{
    int mes;

    printf("Entre com o numero do mes: );
    scanf("%d", &mes);

    switch (mes)
    {
        case 1: printf("Janeiro"); break;
        case 2: printf("Fevereiro"); break;
        case 3: printf("Marco"); break;
        // ...
        case 12: printf("Dezembro"); break;
        default: printf("Mes invalido!);
    }
}
```

<br>

<table>
<tr>
  <th>Título</th>
  <th>Título</th>
</tr>

<tr>
  <td valign="top">

  ```c
  int main()
  {
      int mes;

      printf("Entre com o numero do mes: );
      scanf("%d", &mes);

      switch (mes)
      {
          case 1: printf("Janeiro"); break;
          case 2: printf("Fevereiro"); break;
          case 3: printf("Marco"); break;
          // ...
          case 12: printf("Dezembro"); break;
          default: printf("Mes invalido!);
      }
  }
  ```

  </td>
  <td valign="top">

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
