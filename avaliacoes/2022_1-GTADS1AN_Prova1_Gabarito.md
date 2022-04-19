<table>
<tr>
<td align="left" width="8000">
    <small>Introdução a Programação > Avaliações</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;18/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Gabarito da 1a. Avaliação - GTADS1AN
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Questão 1

* Executar o programa a seguir. Entrar com o valor da soma dos algarismos de seu RA:

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    do
    {
        printf("Entre com a soma dos algarismos do RA ou 0 para sair: ");
        scanf("%d", &n);
        printf("%d\n", n + 22 / n);
        printf("%d\n", (n + 22) / n);
        printf("%d\n", (int)sqrt(n));
        printf("%d\n", (int)pow(1, 22 / n));
        printf("%d\n", n > 18 && n < 25);
        printf("%d\n", n < 18 || n > 25);
        printf("%d\n", !n && n || n);
        printf("%d\n", !n || n && !n);
        printf("%d\n", (n > 22) ? n : n - 1);
        printf("%d\n", (n % 2 == 0) ? 1 : 0);
    } while (n > 0);

    return 0;
}
```

OBS.: O programa utiliza um laço de repetição (do..while) pois será utilizado pelo Prof. na correção de todas as provas.

<br>

## Questão 2

a) 1

b) A cada endereço de memória está associado um espaço de 8 bits (= 1 byte) na memória. Em linguagem C, qualquer variável de qualquer tipo só pode ocupar espaços na memória que sejam múltiplos de 1 byte.

<br>

## Questão 3

a) Podem ser acondicinados quaisquer múltiplos de 10 L, exceto L < 20 e L = 30.
Não podem ser acondicinados qualquer quantidade não múltiplo de 10 L ou L < 20 ou L = 30.

b)

```c
#include <stdio.h>

int main()
{
    int litros, rec100, rec50, rec20;

    printf("Entre com a qualqtidade de mel em litros: ");
    scanf("%d", &litros);

    // Validação da entrada.
    if (litros < 20 || litros == 30 || (litros % 10 != 0))
    {
        printf("Valor invalido!\n");
        return 1;
    }

    rec20 = 0;
    if (litros % 50 == 10 || litros % 50 == 30)
    {
        litros = litros - 40;
        rec20 = 2;
    }

    rec100 = litros / 100;
    litros = litros % 100;
    rec50 = litros / 50;
    litros = litros % 50;
    rec20 = rec20 + litros / 20;

    printf("Recipientes de 100 L = %d\n", rec100);
    printf("Recipientes de  50 L = %d\n", rec50);
    printf("Recipientes de  20 L = %d\n", rec20);

    return 0;
}
```

<br>

## Questão 4

a) Utilizando os Teoremas de DeMorgan:

```c
if (a >= b + c || b >= a + c || c >= a + b)
    triangulo_existe = false;
```

b) Negação direta utilizando o operador de negação `!`:

```c
if ( !(a < b + c && b < a + c && c < a + b) )
    triangulo_existe = false;
```

c) Programa completo. Foi pedido apenas o código indicado após o comentário `// c)` no programa:

```c
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Entre com os tres lados de um tri%cngulo: ", 131);
    scanf("%f %f %f", &a, &b, &c);

    // Validação da entrada.
    if ( !(a < b + c && b < a + c && c < a + b) )
    {
        printf("Valores inv%clidos!\n", 160);
        return 1;
    }

    // A validação da entrada poderia ser também da seguinte forma:
    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("Valores inv%clidos!\n", 160);
        return 1;
    }

    // c)
    if (a == b && b == c)
        printf("Tri%cngulo equil%ctero\n", 131, 160);
    else
        if (a == b || b == c || a == c)
            printf("Tri%cngulo is%csceles\n", 131, 162);
        else
            printf("Tri%cngulo escaleno\n", 131);

    return 0;
}
```
<br>

## Questão 5

```c
#include <stdio.h>

int main()
{
    int hh0, mm0, ss0, hh1, mm1, ss1;
    int tempo_inicial_seg, tempo_final_seg, diferenca_tempo_seg;
    int hh, mm, ss;

    // Entrada
    printf("Entre com o tempo inicial do corte [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hh0, &mm0, &ss0);

    // Validação da entrada
    if (hh0 <= 0 || mm0 < 0 || mm0 >= 60 || ss0 < 0 || ss0 >= 60)
    {
        printf("Valores invalidos!\n");
        return 1;
    }

    // Entrada
    printf("Entre com o tempo final do corte [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hh1, &mm1, &ss1);

    // Validação da entrada
    if (hh1 <= 0 || mm1 < 0 || mm1 >= 60 || ss1 < 0 || ss1 >= 60)
    {
        printf("Valores invalidos!\n");
        return 1;
    }

    // Processamento
    tempo_inicial_seg = hh0 * 3600 + mm0 * 60 + ss0;
    tempo_final_seg = hh1 * 3600 + mm1 * 60 + ss1;
    diferenca_tempo_seg = tempo_final_seg - tempo_inicial_seg;

    // Saída
    printf("Tempo do video cortado = %d s\n", diferenca_tempo_seg);

    // Não foi pedido na questão:
    hh = diferenca_tempo_seg / 3600;
    mm = (diferenca_tempo_seg % 3600) / 60;
    ss = (diferenca_tempo_seg % 3600) % 60;
    printf("Tempo do video cortado = %d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
```
