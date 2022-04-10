> ##### Introdução à Programação > Conteúdo > Estruturas de Decisão

# if

Prof. Eduardo Ono

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
