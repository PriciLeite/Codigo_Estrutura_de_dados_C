#include <stdio.h>
#define DIMENSAO 2


int main(void)
{
    int linha, coluna;
    int determinante;

    int valor; //onde, valor = linha + coluna
    int matriz[DIMENSAO][DIMENSAO];

    // Duas dimensões, Dois lanços de repetição:    
    for (linha = 0; linha < DIMENSAO; linha++)
    {
        for (coluna = 0; coluna < DIMENSAO; coluna++)
        {
            printf("Digite valores para compor a matriz (Dois ou um numero) [%d][%d]: ", linha+1, coluna+1);           
            scanf("%d", &valor);
            matriz[linha][coluna] = valor;
        }
        
    }
    determinante = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
    printf("Determinante: %d\n", determinante);



    return 0;
}
