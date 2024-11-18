#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


struct tipo_no
{
    long long int num;
    struct tipo_no *prox;
};

void mostraListaInvertido(struct tipo_no *parm, long long int limite);
void mostraLista(struct tipo_no *parm, long long int limite);
struct tipo_no *insereNo(struct tipo_no **parm);

int main(void)
{

    bool meio = false;
    long long int i, ra = 60, divisor_anterior = 0, resposta, limite, ra2;
    struct tipo_no *head1 = NULL, *head2 = NULL, *nova;

    for (i = 1; i <= ra; i++)
    {
        if (ra % i == 0)
        {
            if (i == resposta || meio == true)
            {
                meio = true;
                //printf("Meio %lld\n", resposta);
                limite = resposta;
                printf("Meio encontrado...\n");
                printf("TERMINANDO...\n");
                i = ra;
                break;
                
            }

            resposta = ra / i;

            if (meio == false)
            {
                nova = insereNo(&head1);
                nova->num = i;

                nova = insereNo(&head2);
                nova->num = resposta;
            }


            
        }
    }


    printf("Os divisores de %lld sao:\n", ra);
    mostraListaInvertido(head1, limite);
    mostraLista(head2, limite);

    
    

    return 0;
}

struct tipo_no *insereNo(struct tipo_no **parm)
{
    struct tipo_no *nova;
    if (!(nova = malloc(sizeof(struct tipo_no))))
    {
        printf("Falta de memoria! \n");
        exit(1);
    }
    nova->prox = *parm; // Insere novo no na lista ligada
    *parm = nova;
    return nova;
}

void mostraLista(struct tipo_no *parm, long long int limite)
{   
    //int count;
    while (parm != NULL && parm->num >= limite)
    {
        printf("%lld ", parm->num);
        parm = parm->prox;
        //count++;
        
    }
   //printf("\nQuntidade lista 1 = %d ", count);
}


void mostraListaInvertido(struct tipo_no *parm, long long int limite)
{
    //int count = 0;
    if (parm == NULL)
    {
        return;
    }
    mostraListaInvertido(parm->prox, limite);
    if (parm->num < limite)
    {   
        printf("%lld ", parm->num);
    }

    
}