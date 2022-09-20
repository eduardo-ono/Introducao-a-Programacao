/*
Programa      : 
Versão        : 1
Descrição     : Exemplos de funções para manipulação de strings.
Desenvolvedor : Eduardo Ono
Criado em     : 14/08/2022
Atualizado em : 14/08/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int comparacao;

    strcpy(str1, "banana");
    strcpy(str2, "abacaxi");
    printf("%s\n", str1);
    comparacao = strcmp(str1, str2);
    printf("%d\n", comparacao);
    comparacao = strcmp(str2, str1);
    printf("%d\n", comparacao);
    return 0;
}
