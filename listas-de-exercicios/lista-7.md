<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Listas de Exercícios</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;17/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">

Lista 7 - Ponteiros (ou Apontadores)

</h1>

<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Exercício 1

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Execute o programa a seguir e explique todos os valores de saída.

```c
#include <stdio.h>

int main()
{
    int a = 64, b = 128, c = 255, d = 256;
    char *p = NULL;

    p = (char *)&a;
    printf("%d\n", *p);

    p = (char *)&b;
    printf("%d\n", *p);

    p = (char *)&c;
    printf("%d\n", *p);

    p = (char *)&d;
    printf("%d\n", *p);

    p = (char *)&d;
    printf("%d\n", *((int *)p));

    return 0;
}
```

<br>
