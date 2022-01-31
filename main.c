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
    char *sub;
    char *sub1;
    int tamanho=0 ,i;
    int pesq=0 , pdir=0;
    Pilha*texto=cria();
    Pilha*textoOrd=cria();
    Pilha*textoTer=cria();
    Pilha*textoQuat=cria();
    Pilha*RecebeOpe=cria();




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























    system("pause");

    return 0;
}
