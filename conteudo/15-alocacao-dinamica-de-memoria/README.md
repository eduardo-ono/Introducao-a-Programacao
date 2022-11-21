
<h1 align="center">Alocação Dinâmica de Memória</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

## Tópicos

* ### [Conceitos](./conceitos.md)

* ### [Exemplos](./exemplos/)

&nbsp;

## Exemplos

### Alocação dinâmica de uma variável

```c
int main()
{
    // Declaração da variável ponteiro que irá apontar para um objeto do tipo int.
    // É recomendável que a variável ponteiro "a" seja inicializada com o endereço "nulo".
    int *a = NULL;

    // Aloca um espaço na memória heap suficiente para armazenar um valor inteiro.
    // O endereço do espaço alocado é atribuído à variável ponteiro "a".
    a = (int *)malloc(sizeof *a); // O mesmo que: a = (int *)malloc(sizeof (int));
    if (a == NULL)
    {
        printf("A alocacao não teve sucesso pois o malloc() retornou NULL!\n");
        return 1;
    }
    
    // O objeto apontado por "a" recebe o valor 100.
    *a = 100;
    printf("%d\n", *a);

    // Desaloca o espaço do objeto apontado por "a" na memória heap.
    free(a);
    
    return 0;
}
```

### Alocação dinâmica de um vetor

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // NULL, malloc(), calloc(), realloc()

int main()
{
    int *v = NULL;
    int length;

    printf("Entre com o numero de elementos do vetor: ");
    scanf("%d", &length);

    v = (int *)malloc(length * sizeof (int)); // Ou: v = (int *)calloc(length, sizeof (int));
    if (v == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        v[i] = i * 2;
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);

    return 0;
}
```

&nbsp;

## Vídeos de Apoio

| Thumb | Descrição | Tópicos Abordados |
| :-: | --- | --- |
| [![img](https://img.youtube.com/vi/uZUyBZEdfGQ/default.jpg)](https://www.youtube.com/watch?v=uZUyBZEdfGQ) | <sup>[xavecoding]</sup><br>[__Estruturas de Dados 1 - #15 - Tipos de Alocação de Memória__](https://www.youtube.com/watch?v=uZUyBZEdfGQ)<br><sub>(29:03, YouTube, Mar/2021)</sub> | - Memória "stack" e memória "heap"
| [![img](https://img.youtube.com/vi/XNmdbPz75C0/default.jpg)](https://www.youtube.com/watch?v=XNmdbPz75C0) | <sup>[xavecoding]</sup><br>[__Estruturas de Dados 1 - #16 - Alocação Dinâmica na Prática__](https://www.youtube.com/watch?v=XNmdbPz75C0)<br><sub>(30:46, YouTube, Mar/2021)</sub> | - malloc() e calloc()
| [![img](https://img.youtube.com/vi/E08YxaAICmY/default.jpg)](https://www.youtube.com/watch?v=E08YxaAICmY) | <sup>[xavecoding]</sup><br>[__Estruturas de Dados 1 - #17 Vetores - Exemplos Práticos__](https://www.youtube.com/watch?v=E08YxaAICmY)<br><sub>(20:56, YouTube, Mar/2021)</sub> |
| [![img](https://img.youtube.com/vi/wvmvl-vHbTo/default.jpg)](https://www.youtube.com/watch?v=wvmvl-vHbTo) | <sup>[xavecoding]</sup><br>[__Estruturas de Dados 1 - #18 Função para Desalocar Vetores Dinâmicos__](https://www.youtube.com/watch?v=wvmvl-vHbTo)<br><sub>(21:48, YouTube, Mar/2021)</sub> |  
| [![img](https://img.youtube.com/vi/-ePB6hbGdiM/default.jpg)](https://www.youtube.com/watch?v=-ePB6hbGdiM) | <sup>[xavecoding]</sup><br>[__Estruturas de Dados 1 - #19 Vetores - Mais Exercícios__](https://www.youtube.com/watch?v=-ePB6hbGdiM)<br><sub>(38:33, YouTube, Mar/2021)</sub> |  

&nbsp;
