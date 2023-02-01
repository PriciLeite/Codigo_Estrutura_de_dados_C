/* Fila circular permite manipular os elementos da fila sem que haja */
/* deslocamento dos demais elementos ao enfileirar(Enqueue) e ao */
/* desenfileirar(Dequeue) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_MAXIMO 10      /* Neste caso o tamanho estará limitado mas */
                                /* poderá ser reutilizado na passagem do rear -> front*/

struct queue
{
    int itens[TAMANHO_MAXIMO];
    int front, rear;
};

int Empty(struct queue *pq)
{
    if (pq->front == pq->rear)
    {
        printf("\nFila esta Vazia!!!");
        return 1;
    }
    
    return 0;
}

void Enqueue(struct queue *pq, int x)
{
    if (pq->rear == TAMANHO_MAXIMO -1)    /*Verificar se o final da fila já foi alcaçado */
                                          /*Se foi alcançado ele irá retornar para o inicio da fila*/
                                          /*Alocando novos valores caso deseje na posição inicial da fila*/
    {
        pq->rear = printf("\nUltima posicao da fila para Enqueue elementos!");
    }
    else
    {
        pq->rear++;
        printf("\nAdicionando elemento na proxima posicao");
    }
    if (Empty(pq))
    {
        printf("\nEstourou a capacidade da fila!");
        exit(1);
    }
    
    /* Com base nessas verificações ao final será adicionado o elemento no final da 
    fila e gravado na variável (X) */

    pq->itens[pq->rear++] = x;
    return;
}

/* Verificando o tamanho do vetor */
int Size(struct queue *pq)
{                           /* Verificando se o final da fila ALCANÇOU O FINAL DO VETOR */    
    if (pq->front <= pq->rear)
    {
        return pq->rear - pq->front;   /* fila = final - inicial */
    }
    
    return pq->rear + pq->front;   /* Se o tamanho do vetor não for o seu tamanho definido 
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
int Dequeue(struct queue *pq)
{
    int x, i;
    if (Empty(pq))
    {
        printf("\nFila Vazia!!!");
    }

    if (pq->rear = TAMANHO_MAXIMO -1)
    {
        pq->front = printf("\nUltima posicao da fila para Dequeue de elementos!");
    }
    else
    {
        pq->front++;
    }

    return (pq->itens[pq->front]);
}

int main(void)
{
    struct queue q;
    q.front = -1;
    q.rear = -1;

    Enqueue(&q, 1);        
    Enqueue(&q, 2);        
    Enqueue(&q, 3);        
    Enqueue(&q, 4);        

    printf("\nTamanho da fila: %d", Size(&q));
    printf("\nProximo da fila: %d", front(&q));






    return 0;
}






























