#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilhadechars.h"
#include "projeto2.h"
#define MAX 20



/**
*                   @Observacao o algoritmo precisa se feito em outro tipo de pilha vou utilizar veteros
*                   @Versao     2.1             Ultima atualização 18:30 27/01/2022
*
*/
int main()
{



    /**Pilha char ***/

    char palavra[20]={" ( A + B * C )"};
    char *sub;
    Pilha *texto=cria();
    Pilha *textoAux=cria();
    sub=strtok(palavra," ");
    while(sub != NULL){
        printf("\n%s",sub);
        if(sub!='A'){
            printf("\n  Tem um A");
        }
        push(texto,sub);
        sub=strtok(NULL," ");

    }
    Pilha*p=cria();

    push(p,'a');
    push(p,'b');

    pop(p);
    printf("imprimir p\n");
    imprime(p);
    printf("imprimir texto\n");
    imprime_char(texto);






    system("pause");

    return 0;
}
