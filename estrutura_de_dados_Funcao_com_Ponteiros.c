// Chamando Funções com Ponteiros como Parâmetros:

#include <stdio.h>
#include <locale.h>

void Soma(int, int, int*);

int main(void)
{
    int valorA;
    int valorB;
    int i_resultado;

    printf("Digite Valor 1: ");
    scanf("%d",&valorA);

    printf("Digite Valor 2: ");
    scanf("%d",&valorB);

    // Obtendo o endereço da variável resultado:
    printf("Endereco da variavel i_resultado: %d\n", &i_resultado);
    
    // Realizando a soma direto na variável resultado 
    //passando o endereço da variável:

    Soma(valorA, valorB, &i_resultado);

    printf("Soma: %d\n", i_resultado);

    return 0;
}
    void Soma(int ValorA, int ValorB, int *pi_resultado2)
    {
        printf("Endereco da variavel pi_resultado: %d\n", pi_resultado2);

        *pi_resultado2 = ValorA + ValorB;
            

    return;

    }
