<h1 align="center">Divisores de um Número Inteiro</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

## Algoritmos

### "Força Bruta"

```c
int main()
{
    int num = 600;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```

### Otimizações do Algoritmo "Força Bruta"

```c
int main()
{
    int num = 600;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d\n", num);

    return 0;
}
```

&nbsp;

## Algoritmos Otimizados

* Decomposição por fatores primos.

### Vídeos de Apoio

| Thumb | Descrição | Tópicos Abordados |
| :-: | --- | --- |
| [![img](https://img.youtube.com/vi/p0v5FpONddU/default.jpg)](https://www.youtube.com/watch?v=p0v5FpONddU) | <sup>[MATEMÁTICA FOR ALL LUIS CARLOS]</sup><br>[__DETERMINAÇÃO DOS DIVISORES DE UM NÚMERO NATURAL__](https://www.youtube.com/watch?v=p0v5FpONddU)<br><sub>(6:47, YouTube, Jul/2014)</sub> | 
| [![img](https://img.youtube.com/vi/MVxkuFoRSgc/default.jpg)](https://www.youtube.com/watch?v=MVxkuFoRSgc) | <sup>[Professora Angela Matemática]</sup><br>[__Múltiplos e Divisores de um Número Natural - Vivendo a Matemática com a Professora Angela__](https://www.youtube.com/watch?v=MVxkuFoRSgc)<br><sub>(11:57, YouTube, Abr/2016)</sub> | 

&nbsp;
