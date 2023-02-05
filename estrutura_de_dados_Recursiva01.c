/* Recursividade  - Cálculo do Fatorial */
/* n! = 1, se n = 0    /////     n! = n * (n-1)! , se n > 0*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Cálculo Fatorial (versão interativo) */

int CalculoFat (int n)
{                                   
    int cont, Fat;                      /* Comumente conhecido no formato fatorial comum */
    Fat = 1;  

    for (cont = 0; cont < n; cont++)
    {
        Fat = Fat * cont;
    }
    
    return Fat;

}

/* Cálculo Fatorial (versão Recursiva) */
int CalculoFatRec(int n)
{                                       /* As chamadas n - 1 são feitas até que n == 1 */
    int cont, Fat;                      /* para que então a função comece a retornar valores */      
    if (n == 0 || n == 1)               /*Aplicando a recursividade de acordo com a 
                                            fórmula de definição */
    {
        return 1;
    }
    
    Fat = CalculoFatRec(n-1) * n;       /* Chamando a própria função na abrviação do anterior*/

    return Fat;
}                                            