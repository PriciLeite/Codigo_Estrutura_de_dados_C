#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Significado de Void: é uma função que não retorna nada. 
    // Diferente de  int argc, char const *argv[]
        // argc – é um valor inteiro que indica a quantidade de argumentos que foram    passados ao chamar o programa
            // argv – é um vetor de char que contém os argumentos, um para cada string passada na linha de comando.
                // argc >> (aloca 4 bytes) e *argv[] >> (Aloca 8 bytes) são alocados na Stack no momento da chamada do main().
                    // Também é alocado para eles um espaço de retorno da função 
                        // (8 bytes) se tratando de um ponteiro. 
int funcao(int **pParametro)
{
    printf("\nEndereco de pParametro: %d", &pParametro);
    printf("\nValor apontado por pParametro: %d", *pParametro);
    printf("\nEndereco apontado por pParametro: %d", pParametro);
    printf("\nEndereco do PONTEIRO que aponta para pParametro: %d", **pParametro);

    return 0;
}


int main(void)  
{
    int *pVariavel;
    
    *pVariavel = (int*)malloc(sizeof(int));
    *pVariavel = 20;

    printf("\nEndereco do ponteiro pVariavel: %d", &pVariavel);
    printf("\nValor apontado por pVariavel: %d", *pVariavel);
    printf("\nEndereco apontado por pVariavel: %d", pVariavel);
    
    funcao(&pVariavel);

    return 0;
}

