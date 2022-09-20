/*
Programa      : juros-compostos
Versão        : 1.0
Descrição     : 
Desenvolvedor : Eduardo Ono
Criado em     : 16/05/2022
Atualizado em : 16/05/2022
Comentários   : 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float capital = 100000;
    float montante = capital;
    float montante_final = 1000000;
    float taxa_juros = 0.5 / 100; // 0.5 % a.m.
    int meses = 0;

    while (montante < montante_final)
    {
        montante = montante * (1 + taxa_juros);
        meses++;
    }

    printf("Tempo necessário = %d ano(s) e %d mes(es).\n", meses / 12, meses % 12);
    printf("Montante = R$ %.2f\n", montante);

    return 0;
}
