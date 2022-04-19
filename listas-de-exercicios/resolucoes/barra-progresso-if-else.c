/*
Programa      : lista-04-e1.c
Versão        : 1
Descrição     : Barra de progresso
Desenvolvedor : Eduardo Ono
Criado em     : 12/04/2022
Atualizado em : 12/04/2022
Comentários   : Usando somente 'if'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float progresso;
    char barra = 177;

    printf("Entre com o progresso [0 - 100]: ");
    scanf("%f", &progresso);

    // Validação da entrada.
    if (progresso < 0 || progresso > 100)
    {
        printf("Entrada invalida!\n");
        return 1;
    }

    if (progresso == 100) printf("%c", barra);
    else if (progresso >= 90) printf("%c", barra);
    else if (progresso >= 80) printf("%c", barra);
    else if (progresso >= 70) printf("%c", barra);
    else if (progresso >= 60) printf("%c", barra);
    else if (progresso >= 50) printf("%c", barra);
    else if (progresso >= 40) printf("%c", barra);
    else if (progresso >= 30) printf("%c", barra);
    else if (progresso >= 20) printf("%c", barra);
    else if (progresso >= 10) printf("%c", barra);
    else printf("|");
    printf(" [%.1f %%]\n", progresso);

    return 0;
}
