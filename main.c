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
    char *sub1;
    Pilha*texto=cria();
    Pilha*auxTexto=cria();

    sub=strtok(palavra," ");
    while(sub != NULL){
        printf("\n%s",sub);
        printf(" Tem um A\n");
        push(texto,sub);
        sub=strtok(NULL," ");

    }


    printf("imprimir texto\n");
    imprime_char(texto);




    printf("\n imprimir texto apos pop \n");
   // buscaChar(texto);
    imprime_char(texto);










    system("pause");

    return 0;
}
