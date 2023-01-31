/* Filas são dinâmicas e para ser representadas por vetores é necessário ter */
/* um vetor suficientemente grande que comporte a fila */
/* Conceito de fila | Enqueue (Enfileirar elementos) | Dequeue (Desenfileirar Elementos). */
/* Empty - Verificar se a fila está vazia. | Size - Retorna o tamanho da fila. */
/* Front - Retorna o próximo da fila. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_MAXIMO 100

struct queue
{
    int itens[TAMANHO_MAXIMO];      /* Tamanho do vetor */
    int front, rear;                /* Início e Fim da fila */
};

/* Verificando se a fila está vazia */
int Empty(struct queue *pq)
{
    if (pq->front == pq->rear)          /* Inicio == Fim da fila */
    {
        printf("\nFila esta vazia!");
        return 1;
    }
    return 0;
}

/* Adicionando elemento na fila (rear) */
void enqueue(struct queue *pq, int x) 
{                                      /* Para inserir um elemento é necessário */
                                       /* Fila(pq) + o elemento (x)*/
    if (pq->rear +1 >= TAMANHO_MAXIMO)
    {
        printf("\nEstorou a capacidade da Fila!");
        exit(1);
    }

    pq->itens[pq->rear++] = x;
    return;
}

/* Verificando o TAMANHO DA FILA */
int size(struct queue *pq)
{
    return (pq->rear + 1);       /* Retorna a quantidade de itens na fila */

}

/* Verificando o primeiro elemento vetor (pq[0]) */
int front(struct queue *pq)
{
    return (pq->itens[0]);      /* Primeiro elemento sempre estará em [0]*/
}

/* Removendo elemento da Fila */
int dequeue(struct queue *pq)
{
    int x, i;

    if (Empty(pq))               /* Equivale a: pq->front == pq->rear */
    {
        printf("\nFila vazia!");
        exit(1);
    }
    
    x = pq->itens[0];            /* Salvando o primeiro elemento em (X) */
    for (i = 0; i < pq->rear; i++)
    {
        pq->itens[i] = pq->itens[i+1];
    }
    
    pq->rear--;
    return x;
}


/* Executando... */

int main(void)
{
    struct queue q;
    q.front = 0;
    q.rear = 0;

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    

    printf("\nFila esta vazia(0 -> Nao 1-> Sim): %d\n", Empty(&q));
    printf("\nTamanho da Fila: %d\n", size(&q));
    printf("\nPosicao inicial da Fila: %d\n", front(&q));
    printf("\nTirando da Fila: %d\n", dequeue(&q));
    printf("\nTirando da Fila: %d\n", dequeue(&q));
    printf("\nTirando da Fila: %d\n", dequeue(&q));
    printf("\nPosicao inicial da Fila: %d\n", front(&q));
    printf("\nTirando da Fila: %d\n", dequeue(&q));

    printf("\nFila esta vazia(0 -> Nao 1-> Sim): %d\n", Empty(&q));



    return 0;
}



