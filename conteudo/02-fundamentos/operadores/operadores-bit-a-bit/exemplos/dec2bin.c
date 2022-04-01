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
