#include <stdio.h>
#define TAMANHO 5



int main(void)
{
    int Indice;
    int Valor;
    int Soma;
    int Vetor[TAMANHO];
    float Media;

    for (Indice = 0; Indice < TAMANHO; Indice++)
    {
        printf("Digite um valor inteiro %d:", Indice+1);
        scanf("%d", &Valor);
        Vetor[Indice] = Valor;
    }
    







    return 0;
}
