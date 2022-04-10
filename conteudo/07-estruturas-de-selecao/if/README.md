> ##### Introdução à Programação > Conteúdo > Estruturas de Decisão

# if

Prof. Eduardo Ono

<br>

<table>
<tr>
  <th>Instruções</th>
  <th>Fluxograma</th>
</tr>
<tr>
  <td valign="top">

  ```c
  #include <stdio.h>

  int main()
  {
      int idade = 27;

      if (idade < 18)
          printf("Menor de idade.\n");

      return 0;
  }
  ```

  </td>
  <td>

  ```mermaid
  flowchart TD
  INICIO([INÍCIO]) --> I1[Declaração e definição da variável 'idade']
  I1 --> C{idade < 18 ?}
  C --> |true| OUTPUT[Imprimir 'Menor de idade'.]
  C --> |false| FIM([FIM])
  OUTPUT --> FIM
  ```

  </td>
</tr>
</table>

<br>
