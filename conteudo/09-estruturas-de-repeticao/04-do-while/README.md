<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;07/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Estrutura de Repetição "do..while"
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

<table>
<tr>
  <th>Código em C</th>
  <th>Descrição</th>
</tr>

<tr>
  <td valign="top">

```c
#include <stdio.h>

int main()
{
    float num;
    float soma = 0;
    int cont = 0;
    float media;

    do
    {
        printf("Entre com um número positivo ou -1 para sair: ");
        scanf("%d", &num);
        getchar();
        if (num > -1)
        {
          soma += num;
          cont++;
        }
    } while (num > -1);
    media = soma / cont;
    printf("Média = %f\n", media);
}
```

  </td>
<td valign="top">
Calcula a média de vários valores inteiros fornecidos pelo usuário.
</td>
</tr>
</table>

<br>
