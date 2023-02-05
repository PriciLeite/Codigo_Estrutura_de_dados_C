/* Cálculo do Número Triângular */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Cálculo do modo interativo - Número Triângular */
        /* 1 linha = 1 elemento */
            /* 2 linhas = 3 elementos */
                /* 3 linhas = 6 elementos */
                    /* Os Primeiro elementos são: 1,3,6,10,15,21,28...*/
int triangulo(int n)
{
    int total = 0;

    while (n > 0)
    {
        total += n;        
        n--;
    }
    
    return total;
}                    