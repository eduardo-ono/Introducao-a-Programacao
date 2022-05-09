<table>
<tr>
<td align="left" width="8000">
  <small>Introdução à Programação > Conteúdo > Funções Definidas pelo Usuário</small>
</td>
<td align="right">
  <small>Atualizado&nbsp;em:&nbsp;06/05/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Exemplos
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
<td>

```c
int determinarMaior(int a, int b)
{
    return (a > b) ? a : b;
}
```

</td>
<td>
Determina o maior valor entre dois números inteiros.
</td>
</tr>

<tr>
<td>

```c
float celsius2Fahrenheit(float c)
{
    return 1.8 * c + 32;
}
```

</td>

<td>
Converte uma temperatura em graus Celsius para graus Fahrenheit.
</td>
</tr>

<tr>
<td>

```c
float calcularImc(float peso, float altura)
{
    float imc;

    if (peso > 0 && altura > 0)
        imc = peso / (altura * altura);
    else
        imc = -1;

    return imc;
}
```

</td>
<td>
Calcula o IMC (Índice de Massa Corporal) de uma pessoa.
</td>
</tr>

<tr>
<td>

```c
#include <stdbool.h> // C99

bool trianguloExiste(float a, float b, float c)
{
    return (a < b + c && b < a + c && c < a + b);
}
```

</td>
<td>
Verifica se a condição de existência de um triângulo.
</td>
</tr>

<tr>
<td>

```c
float perimetroTriangulo(float a, float b, float c)
{
    return a + b + c;
}
```

</td>
<td>
Calcula o perímetro de um triângulo.
</td>
</tr>

<tr>
<td>

```c
#include <math.h>

float areaTriangulo(float a, float b, float c)
{
    float s;

    if (trianguloExiste(a, b, c))
    {
        s = perimetroTriangulo(a, b, c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    else
        area = -1;

    return area;
}
```

</td>
<td>
Calcula o IMC (Índice de Massa Corporal) de uma pessoa.
</td>
</tr>


</table>

<br>
