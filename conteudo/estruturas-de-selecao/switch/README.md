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
