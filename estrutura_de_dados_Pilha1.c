/* Manipular os dados armazenados na pilha */
/* Verificando suas posições*/ /* Inserindo dados na pilha */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void push(int valor);
int pop(void);
int size(void);
int stacktop(void);

int pilha[20]; /* Vetor que ocupa 8 bytes na Stack */
int pos = 0;

void push(int valor)
{
    pilha[pos] = valor;  /* EMPILHANDO um novo elemento na pilha */
                         /* Não é verificado nesse momento a capacidade da pilha*/
    pos++;
    return;
}

int pop()
{
    return (pilha[--pos]);  /* (Pop Retira o ELEMENTO) do topo da pilha */
                            /* Não é verificado o seu final */
}

int size()
{
    return pop; /* Retorna o topo da pilha */ 
}
 
int stacktop() 
{
    return pilha[pos == 0]; /* Retorna o TOPO da pilha sem remover */
}



int main(int argc, char **argv[])
{
    int *pvariavel;
    pvariavel = &pilha; /* Verificando posição inicial do vetor */


    printf("\n Insirindo dados na pilha numeros: (1) (2) (3) \n");
    push(1);
    push(2);
    push(3);

    printf("\n Verificando dados na pilha ...\n");

    /* Extra: Verificando Posições da Pilha: */
    printf("\nPosicao da pilha %p\n", pvariavel);      
    printf("\nPosicao da pilha %p\n", &pilha[0]); 
    printf("\nPosicao da pilha %p\n", &pilha[19]);
    printf("\nValor apontado pela variavel na pilha[0] %p\n", *pvariavel);
    printf("\nValor apontado pela variavel na pilha[1] %p\n", *pvariavel+1);
    printf("\nValor apontado pela variavel na pilha[2] %p\n", *pvariavel+2);
    

    printf("\nTamanho da pilha %d\n", size());       

    printf("\nPegando dado da pilha %d", pop());
    printf("\nPegando dado da pilha %d", pop());
    printf("\nPegando dado da pilha %d\n", pop());

    printf("\nTamanho final da pilha %d\n", size());


    return 0;
}





