
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projeto2.h"




typedef struct no1
{
    unsigned char  valor;
    struct no*proximo;
} No1;

No1 * empilhar(No1*pilha_lista, unsigned char  num)
{
    No1*novo=malloc(sizeof(No1));

    if(novo)
    {
        novo->valor=num;
        novo->proximo=pilha_lista;
        return novo;
    }
    else
        printf("\tErro ao alocar memoria! \n");
    return NULL;

}

No1 * desempilhar(No1**pilha_lista)
{
    No1*remover=NULL;

    if(*pilha_lista)
    {
        remover=*pilha_lista;
        *pilha_lista=remover->proximo;
    }
    else
        printf("\tPilha vazia \n");
    return remover;
}







Calc_prog* cria_calc_prog (char* formato)
{
    Calc_prog* c = (Calc_prog*) malloc(sizeof(Calc_prog));
    strcpy(c->f,formato);
    //c->p = cria(); /* cria pilha vazia */
    c->p=cria_lista();/*Cria pilha vazia pilha com lista */
    return c;
}

void operando_prog (Calc_prog* c, char v)
{
    /* empilha operando */
    push_lista(c->p,v);
    /* imprime topo da pilha */
    printf(c->f,v);
}

void operador_prog (Calc_prog* c, char op)
{
    int v1, v2, v;
    /* desempilha operandos */
    if (vazia_lista(c->p))
        v2 = 0.0;
    else
        v2 = pop_lista(c->p);
    if (vazia_lista(c->p))
        v1 = 0.0;
    else
        v1 = pop_lista(c->p);
    /* faz operação */
    switch (op)
    {
    case '+':
        v = v1+v2;
        break;
    case '-':
        v = v1-v2;
        break;
    case '*':
        v = v1*v2;
        break;
    case '/':
        v = v1/v2;
        break;
    }
    /* empilha resultado */
    push_lista(c->p,v);
    /* imprime topo da pilha */
    printf(c->f,v);
}

void libera_calc_prog (Calc_prog* c)
{
    libera_lista(c->p);
    free(c);
}


