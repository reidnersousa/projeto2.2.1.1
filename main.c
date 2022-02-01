#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include "pilhadechars.h"
#include "projeto2.h"
#define MAX 20



/**
*                   @Observacao O algoritmo precisa "Duvidas com if  " (ja tentei fazer com vector mas tive d
                                                                        dificuldade com em troca o int por char )
*                   @Versao     3.1             Ultima atualização 19:30 31/01/2022
*
*/
int main()
{



    /**Pilha char ***/

    char palavra[20]= {" ( A + B * C )"};
    char palavra1[20]={"(A*(B+C)/D-E)"};
    char *sub;
    char *sub1;
    int tamanho=0 ,i;
    int pesq=0 , pdir=0;
    Pilha*texto=cria();
    Pilha*textoAux=cria();
    Pilha*textoABC=cria();
    Pilha*textoOpe=cria();
    Pilha*textoSec=cria();





    sub=strtok(palavra," ");
    while(sub != NULL)
    {
        printf("\n%s",sub);
        push(texto,sub);
        tamanho++;
        if(strcmp(sub,"(")==0){
            pesq++;
            printf("( >>%d\n",pesq);
        }
        if(strcmp(sub,")")==0){
            pdir++;
            printf("( >>%d\n",pdir);
        }


        sub=strtok(NULL," ");

    }

    //printf("TExto 1\n");
    //imprime_char(texto);
    pop(texto);

    //printf("TExto 1\n");
    //imprime_char(texto);

    ArrumaPilha(texto,textoSec);
    pop(textoSec);
    //printf("TExto 1\n");
    //imprime_char(textoSec);

    //printf("EStagio 7");
    ArrumaPilha1So(textoSec,textoABC);
    //imprime_char(textoABC);
    pop(textoSec);
    //printf("NMN>>\n");
    //imprime_char(textoSec);
    ArrumaPilha1So(textoSec,textoOpe);
    //imprime_char(textoOpe);

    //printf("EStagio 10\n");
    pop(textoSec);
    //imprime_char(textoSec);
    ArrumaPilha1So(textoSec,textoABC);

    //  printf("RT\n");
    //imprime_char(textoABC);
    pop(textoSec);

    ArrumaPilha1So(textoSec,textoOpe);
    pop(textoSec);
    ArrumaPilha1So(textoSec,textoABC);

    printf("ABC\n");
    imprime_char(textoABC);

    printf("Ope\n");
    imprime_char(textoOpe);

    printf("Sec\n");
    imprime_char(textoSec);
    pop(textoSec);

    printf(">>\n");
    ArrumaPilha(textoOpe,textoAux);
    imprime_char(textoAux);
    ArrumaPilha(textoAux,textoSec);


    printf("\n");
    ArrumaPilha(textoABC,textoSec);
    imprime_char(textoSec);







    /*
    printf("TExto 1\n");
    imprime_char(texto);

    pop(texto);


    printf("TExto 1\n");
    imprime_char(texto);

    ArrumaPilha(texto,textoOrd);
    printf("TExto 3\n");
    imprime_char(textoOrd);

    pop(textoOrd);
    printf("TExto 4\n");
    imprime_char(textoOrd);

    ArrumaPilha1So(textoOrd,textoTer);
    printf("TExto 5\n");
    imprime_char(textoTer);
    pop(textoOrd);

    printf("TExto 6\n");
    imprime_char(textoOrd);


    ArrumaPilha1So(textoOrd,RecebeOpe);
    printf("TExto 7\n");
    imprime_char(RecebeOpe);
    printf("&&&\n");
    imprime_char(textoOrd);
    printf("$%\n");
    imprime_char(textoTer);

    */





















    system("pause");

    return 0;
}
