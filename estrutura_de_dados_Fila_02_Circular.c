/* Fila circular permite manipular os elementos da fila sem que haja */
/* deslocamento dos demais elementos ao enfileirar(Enqueue) e ao */
/* desenfileirar(Dequeue) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_MAXIMO 10      /* Neste caso o tamanho estará limitado a 10 mas */
                                /* poderá ser reutilizado na passagem do rear -> front*/

struct queue
{
    int itens[TAMANHO_MAXIMO];
    int front, rear;
};

int Empty(struct queue *pq)
{
    if (pq->front == pq->rear)      /* Quando o inicio == final */
    {
        
        return printf("\nFila esta Vazia!!!"); /* ******* */
    }    
   
}

void Enqueue(struct queue *pq, int x)
{
    if (pq->rear == TAMANHO_MAXIMO - 1)      /*Verificar se o final da fila já foi alcaçado */
    {
        pq->rear = 0;                        /*Se foi alcançado ele irá retornar para o inicio da fila*/
        printf("\nPosicao final!");         /*Alocando novos valores caso deseje na posição inicial da fila*/
    }    

    else
    {
        pq->rear++;
       printf("\nAdicionando elemento!");
    }

    if (pq->rear == pq->front)
    {
        printf("\nEstourou a capacidade da fila!");
        exit(1);
    }  

    pq->itens[pq->rear] = x;     /* Com base nessas verificações ao final será adicionado o
                                    elemento no final da fila e gravado na variável (X) */
    return;
}

/* Verificando o tamanho do vetor */
int size(struct queue *pq)
{                                                /* Verificando se o final da fila ALCANÇOU O FINAL DO VETOR */    
    if (pq->front <= pq->rear)
    {
        return pq->rear - pq->front;             /* fila = final - inicial */
    }
    
    return pq->rear + pq->front;                 /* Se o tamanho do vetor não for o tamanho definido 
                                                 inicial, então ele já terá entrada para a segunda rodada de 
                                                 preenchimento no inicio da fila. Logo, seu tamanho será: 
                                                 todos os elementos que compõem até o fim da fila + os 
                                                 elementos inciais */
}

/* Retornando o próximo da fila */
int front(struct queue *pq)
{
    return pq->itens[pq->front + 1];
}


/* Retirando elemento da fila */
int dequeue(struct queue *pq)
{
    int x, i;
    if (Empty(pq))
    {
        printf("\nFila Vazia!!!");
        exit(1);
    }

    if (pq->front = TAMANHO_MAXIMO -1)
    {
        pq->front = 0; 
        printf("\nRetornando inicio do vetor!");                   
    }

    else
    {
        pq->front++;
        printf("\nAdicionando +1 no inicio!");
    }

    return (pq->itens[pq->front]); 
}

int main(void)
{
    struct queue q;
    q.front = 0;
    q.rear = 0;

    Enqueue(&q, 1);
    Enqueue(&q, 2);
    Enqueue(&q, 3);
    Enqueue(&q, 4);
   

    printf("\nTamanho da ila %d", size(&q)); 
    printf("\nProximo da ila %d", front(&q)); 
   
    printf("\nTirando da ila %d", dequeue(&q)); 
    printf("\nTirando da ila %d", dequeue(&q)); 
    
    printf("\nProximo da ila %d", front(&q)); 
    printf("\nTirando da ila %d", dequeue(&q)); 
    printf("\nTamanho da ila %d", size(&q));

    
    
   
    return 0;
}






























