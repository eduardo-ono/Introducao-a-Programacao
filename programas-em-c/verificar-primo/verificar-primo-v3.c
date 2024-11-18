/*
Programa      : verificar-primo-v3.c
Versão        : 1
Descrição     : Função que verifica se um múmero inteiro é primo ou não.
Desenvolvedor : Eduardo Ono
Criado em     : 23/05/2022
Atualizado em : 01/07/2024
Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>

bool verificarPrimo(int n)
{
    if (n % 2 == 0)
        return false;

    for (int i = 3; i < n / 2; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    bool eh_primo;
    int n = 131;
    eh_primo = verificarPrimo(n);
    printf("%d\n", eh_primo);

    return 0;
}
