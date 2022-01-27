




/**Pilha com lista  **/

struct no_cal_proj
{
    int  info;
    struct no_cal_proj* prox;
};
typedef struct no_cal_proj No_cal_proj;

typedef struct pilha_cal_proj Pilha_cal_proj;

struct Pilha_cal_proj
{
    No_cal_proj* prim;
};

/**Fim da pilha com lista **/


/* Arquivo que define a interface da calculadora */
typedef struct calc_prog Calc_prog;
/* funções exportadas */
Calc_prog* cria_calc_prog (char* f);
void operando_prog (Calc_prog* c, char v);
void operador_prog (Calc_prog* c, char op);
void libera_calc_prog (Calc_prog* c);

struct calc_prog
{
    char f[21]; /* formato para impressão */
    Pilha_cal_proj* p; /* pilha de operandos */
};


