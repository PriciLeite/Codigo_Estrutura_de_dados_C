// Chamando Funções com Ponteiros como Parâmetros:

#include <stdio.h>
#include <locale.h>

void Soma(int, int, int*);

int main(void)
{
    int valorA;
    int valorB;
    int i_resultado;

    printf("Digite Valor(1): ");
    scanf("%d",&valorA);

    printf("\nDigite Valor(2): ");
    scanf("%d",&valorB);

    // Obtendo o endereço da variável resultado:
    printf("\nEndereco da propria &i_resultado: %d\n", &i_resultado);
    
    // Realizando a soma direto na variável resultado 
    //passando o endereço da variável:

    Soma(valorA, valorB, &i_resultado);

    printf("Soma = %d\n", i_resultado);

    return 0;
}
    void Soma(int ValorA, int ValorB, int *pi_resultado2)
    {
        *pi_resultado2 = ValorA + ValorB;
   
        printf("\nEndereco da propria &pi_resultado: %d\n", &pi_resultado2);
        printf("\nEndereco apontado por pi_resultado2 %d\n", pi_resultado2);   
        printf("\nValor apontada por *pi_resultado2 = %d\n", *pi_resultado2); 
    
        return;

    }
