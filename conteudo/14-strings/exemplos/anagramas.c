/*
Programa      : util.c
Versão        : 1
Descrição     : Biblioteca de utilidades
Desenvolvedor : Eduardo Ono
Criado em     : 23/05/2022
Atualizado em : 23/05/2022
Comentários   :
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool verificarAnagrama(char *str1, char *str2)
{
    char str[strlen(str2) + 1];
    bool encontrou;

    strcpy(str, str2);
    if (strlen(str1) != strlen(str))
        return false;

    for (int i = 0; i < strlen(str1); i++)
    {
        encontrou = false;
        for (int j = 0; j < strlen(str) && !encontrou; j++)
        {
            if (str[j] == str1[i])
            {
                str[j] = '*';
                encontrou = true;
            }
        }
        if (!encontrou)
            return false;
    }

    return true;
}

int main()
{
    char *str1 = "bacana cabana";
    char *str2 = "cabana bacana";

    printf("%s  e  %s\n", str1, str2);
    if (verificarAnagrama(str1, str2))
        printf("Sao anagramas.\n");
    else
        printf("Nao sao anagramas.\n");

    return 0;
}
