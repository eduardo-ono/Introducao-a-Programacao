/*
Programa      : saida-colorida
Versão        : 1.0
Descrição     : Estabelece cores na saída do printf().
Desenvolvedor : Eduardo Ono
Criado em     : 03/05/2022
Atualizado em : 03/05/2022
Comentários   : Pode ser dependente do Sistema Operacional e das configurações do terminal utilizado.
*/

#include <stdio.h>
#include <stdlib.h>

#define RESET   "\e[0m"
#define BLACK   "\e[0;30m"
#define RED     "\e[0;31m"
#define GREEN   "\e[0;32m"
#define YELLOW  "\e[0;33m"
#define BLUE    "\e[0;34m"
#define MAGENTA "\e[0;35m"
#define CYAN    "\e[0;36m"
#define WHITE   "\e[0;37m"

int main()
{
    printf(MAGENTA "Ol%c mundo!\n" RESET, 160);

    return 0;
}
