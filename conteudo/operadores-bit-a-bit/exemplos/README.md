> <h5>Introdução à Programação > Conteúdo > Operadores Bit-a-Bit</h5>

# Exemplos de Operadores Bit-a-Bit

Prof. Eduardo Ono

<br>

## Critérios de Divisibilidade

### Divisibilidade por 2

```c
int num = 123456;

if ((num & 1) == 0)
    printf("O numero %d e par!", num);
if ((num & 1) == 1)
    printf("O numero %d e impar!", num);
```

<br>

## Conversão de um inteiro decimal para binário

```c
#include <stdio.h>

void dec2bin(int num, char bin[])
{
    int size = 8 * sizeof (int);
    int i;

    for (i = size-1; i >= 0; i--)
        bin[size-i-1] = ((num >> i) & 1) ? '1' : '0';
}

int main()
{
  int num;
  int size = 8 * sizeof (int); // 8 * 4 bytes = 32 bits
  char bin[size + 1]; // +1 para incluir o '\0' no final

  printf("Entre um inteiro decimal: ");
  scanf("%d", &num);
  dec2bin(num, bin);
  bin[size] = '\0'; // array de caracteres --> string
  printf("Binario: %s\n", bin); // %s --> imprime um string

  return 0;
}
```

<br>
