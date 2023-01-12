#include <stdio.h>
#include <locale.h>

#define DIM_1 2
#define DIM_2 5
#define DIM_3 3
#define DIM_4 4

int main(void)
{
    int i,j,k,l;
    int matriz[DIM_1][DIM_2][DIM_3][DIM_4];

    //Zerar a matriz de quatro dimensões:
    for(i = 0; i < DIM_1; i++)
    {
        for (j = 0; j < DIM_2; j++)
        {
            for (k = 0; k < DIM_3; k++)
            {
                for (l = 0; l < DIM_4; l++)
                {
                    matriz[i][j][k][l] = i+j+k+l;
                }
                
            }
            
        }
        
    }
    // Quatro dimensões, quatro laços:
    for (i = 0; i < DIM_1; i++)
    {
        for (j = 0; j < DIM_2; j++)
        {
            for (k = 0; k < DIM_3; k++)
            {
                for (l = 0; l < DIM_4; l++)
                {
                    printf("\n Digite valores para a matriz em [%d][%d][%d][%d]= %d",i,j,k,l,matriz[i][j][k][l]);
                }
                
            }
            
        }
        
    }
        


    return 0;
}

