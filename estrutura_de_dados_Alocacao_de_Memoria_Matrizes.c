// Usando Funções para alocação de memória.
// Alocação ESTÁTICA: VETORES (8 bytes - Ponteiro);
// Alocação DINÂMICA: MATRIZES;
// Matriz[i][j] equivale a: *(Matriz[i]+j) ou *(*(Matriz+i)+j)
// Está pegando o ENDEREÇO de Matriz e encontrando a i-ésima linha 
//(i*sizeof(int *)) posições à frente (Matriz[i]) equivalente (Matriz+i)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    int *p; // Ocupa 8 bytes na Stack.
    int i,k,n; // Ocupa 4 bytes na Stack.

    printf("Digite o tamanho do Vetor: ");
    scanf("[%d]", &i);

   
   //Malloc reserva espaço suficiente p/ int.
    p = (int*)(malloc(i * sizeof(int))); // Cada int ocupa 4 bytes.

    if (p = NULL)
    {
        printf("Erro na alocacao de memoria: ");    
        exit(1);
    }
    
    for (k = 0; k < i; k++)
    {
        printf("Digite o numero para o indice: ");
        scanf("%d", &k);
        scanf("%d", &p[k]);        
    }

    
    for (k = 0; k < i; k++)
    {
        printf("O numero do indice %d é %d", k, p[k]);    
    }

    
    printf("Digite quantos elementos quer adicionar ao vetor: ");
    scanf("%d", &n);
    

    // Realloc altera o tamanho do Dinâmicamente.
    // Recebe o ponteiro para o vetor anterios e retorna um novo espaço alocado;
    p = (int*)(realloc(p,(i+n)*sizeof(int))); 

    if (p = NULL)
    {
        printf("Erro em alocacao de memoria: ");
        exit(1);
    }
    
    for (k = 0; k < (n+i); k++)
    {
        printf("Digite o numero para o indice %d: ", k);
        scanf("%d", &p[k]);
    }
    
    for (k = 0; k < (i+n); k++)
    {
        printf("O numero do indice %d e %d\n", k, p[k]);
    }
    
    free(p);
    
    return 0;
}
