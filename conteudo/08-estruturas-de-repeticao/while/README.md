<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo > Estruturas de Repetição</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;16/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">

Estrutura de Repetição `while`

</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Exemplos

### Juros Compostos (Caderneta de Poupança)

<table>
<tr>
  <th>Código</th>
  <th>Descrição</th>
</tr>

<tr>
  <td valign="top">

```c
int main()
{
    float capital = 10000, montante_final = 15000;
    float montante = capital;
    float taxa_juros = 0.5 / 100; // 0.5 % a.m.
    int meses = 0;

    while (montante < montante_final)
    {
        montante = montante * (1 + taxa_juros);
        meses++;
    }
    printf("Numero de meses = %d\n", meses);
    return 0;
}
```

  </td>
  <td valign="top">
  Calcula a tempo necessário, em meses, de uma aplicação financeira (juros compostos) para que seja possível resgatar pelo menos R$ 15000,00 com uma aplicação inicial (capital) de R$ 10000,00.
  </td>
</tr>
</table>

<br>
