// Será utilizado nesse segundo caso função para alocação de Memória e Manipulação de Matriz.
// Neste caso a Matriz será declarada no formato de PONTEIRO, será alocada DINÂMICAMENTO no formato PONTEIRO.    
//Será no formato MATRIZ[linha][coluna] para referênciar a posição da Matriz.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* O formato da declaração com PONTEIROS é o mesmo como se estivesse 
declarando a Matriz ESTÁTICAMENTE */
int **aloca(int i, int j); //Aloca 8 bytes na Stack.
void libera(int **p, int i, int j);
void leitura(int **p, int i, int j);
void imprime(int **p, int i, int j);

    int main(void)
    {
        int **p;
        int **pl;

        p = aloca(2,3);
        leitura(p,2,3);

        pl = aloca(2,3);
        leitura(pl,2,3);

        imprime(p,2,3);
        imprime(pl,2,3);

        libera(p,2,3);
        libera(pl,2,3);
            

        return 0;
    }

        /* Aqui será feito a Alocação do Endereço da Matriz na Variável */
        /* 2(**) indicam que será retornado uma MATRIZ */
            int **aloca(int i, int j)
            {
                // ponteiro de ponteiro -> Matriz de 2 dimensões
                int **p;
                int x;
                p = calloc(i, sizeof(int)); //Alocação de linhas;

                if (p == NULL)
                {
                    printf("\nErro de alocacao de memoria!!! ");
                    exit(-1);
                }
                
                for (x = 0; x < i; x++)
                {
                    p[x] = calloc(j, sizeof(int));
                    if (p[x] == NULL)
                    {
                        printf("\nErro de alocacao de memoria!!!");
                        exit(-1);
                    }
                    
                }
                return p;
            }

                        /*2 (**) indicam que a função retorna(recebe) uma Matriz*/
                        void leitura(int **p, int i, int j)
                        {
                            int x, y;
                            for (x = 0; x < i; x++)
                            {
                                for (y = 0; y < j; y++)
                                {
                                    printf("\nEntre com o elemento [%d] [%d]: ", x, y);
                                    scanf("%d", &p[x][y]); // Uso da matriz no formato tradicional.
                                }
                                
                            }
                            
                        }

                        /*2 (**) indicam que a função retorna(recebe) uma Matriz*/
                        void imprime(int **p, int i, int j)
                        {
                            int x, y;
                            for (x = 0; x < i; x++)
                            {
                                for (y = 0; y < j; y++)
                                {
                                    printf("\nElemento [%d] [%d] = [%d]: ", x, y, p[x][y]);
                                }
                                
                            }
                            
                        }

    /*2 (**) indicam que a função retorna(recebe) uma Matriz*/
    void libera(int **p, int i, int j)
    {
        int x;
        for (x = 0; x < i; x++)
        {
            free(p[x]); /* Libera coluna a coluna*/
            
        }
        free(p); /* Libera as linhas */
    }



















