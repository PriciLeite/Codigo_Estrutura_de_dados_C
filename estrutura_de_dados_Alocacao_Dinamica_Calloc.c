// Declaração de uma Matriz de duas dimensões exige dois ponteiros para ponteiro.
// Ao digitar a primeira dimensão, Calloc fará a multiplicação do tamanho da Matriz 'i' pelo tamanho (int/Char...) da declaração de ponteiro.


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{
    int **p; // Ocupa 8 bytes na Stack.
    int i, j, k, x; // Ocupa 4 bytes na Stack.

    printf("Digite dois inteiros para Matriz[i][j]:");
    scanf("%d %d", &i, &j);
    
    p = calloc(i,sizeof(int)); // i== Número da quantidade de linhas.

    if (p == NULL)
    {
        printf("\nErro de alocacao de memoria!!!");
        exit(1);
    }
    
    for (k = 0; k < i; k++)
    {
        p[k] = calloc(j,sizeof(int)); // j== Número da quantidade de colunas.
        if (p[k] == NULL)
        {
            printf("Erro na alocacao de memoria!!!");
            exit(1);
        }
    }
    
    for (k = 0; k < i; k++) // Se a MAtriz tiver 2 dimensões ela terá 2 FOR().
    {
        for (x = 0; x < j; x++)
        {
            printf("\nDigite um numero para o indice => Matriz[%d][%d]:",k, x);
            scanf("%d", &p[k][x]); //p[k][i] refere-se a posição de encontro de [i][j];
        }
    }
    
     printf("\n=====================================");

    for (k = 0; k < i; k++)
    {
        for (x = 0; x < j; x++)
        {
           
            printf("\nO numero do indice [%d][%d] e: %d\n",k, x, p[k][x]);
        }
        
    }
    
    printf("\nLiberando Memoria Alocada:");
    for (k = 0; k < i; k++)
    {
        free(p[k]); // Primeiro libera-se a linha da Matriz;    
    }
    
    free(p); // Depois libera a memoria do vetor que continha as linhas;


    return 0;
}
