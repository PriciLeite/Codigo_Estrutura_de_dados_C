#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_PILHA 100

/* Estrutura */

struct pilha
{
    int topo;
    int itens[TAMANHO_PILHA];
};

/* Verificando o topo da pilha */
int empty(struct pilha *p) 
{ 
    if( p->topo == -1)      
    {
        return 1;
    }    

    return 0;

} 

int pop(struct pilha *p)
{
    if (empty(p))
    {
        printf('\nPilha vazia!!!');
        exit(1);
    }

     /* Caso a pilha não esteja vazia: Retorá o item atual e reduz a pilha em -1: POP()*/
    return (p->itens[p->topo--]);

}

/* Para adionar um novo elemento na pilha 
                verifica-se a capacidade da pilha: */
/* ***********    **************  *********** ******/
void push(struct pilha *p, int e)
{
    if (p->topo == (TAMANHO_PILHA -1))
    {
        printf("\nEstouro da pilha!!!");
        exit(1);
    }

    /* Criando a nova posição após verificar a pilha*/
    p->itens[++(p->topo)] = e; /* Ponteiro da pilha(itens) atribue na posição inicial
                                do topo da pilha +1 grava na variavel (int e)*/
    return;
}


int size(struct pilha *p)
{
    /* Indice iniciando na posição [0] */
    return p->topo + 1; /* Pagando o primeiro indice +1*/  
}

int stackpop(struct pilha *p)
{
    return p->itens[p->topo];
}

/* Inicialização: */

int main(void)
{
    struct pilha x;
    x.topo = -1;

    push(&x, 1);
    push(&x, 2);
    push(&x, 3);

    printf("\nTamanho da pilha %d", size(&x));
    printf("\nElemento do topo da pilha %d", stackpop(&x));
    
    printf("\n%d",  pop(&x));
    printf("\n%d",  pop(&x));
    printf("\n%d",  pop(&x));
    printf("\n%d",  pop(&x));
    

    return 0;
}


























