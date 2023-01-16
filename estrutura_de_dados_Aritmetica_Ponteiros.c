// Aritmética com Ponteiros: Soma e Subtração.
// Será Somado ou Diminuido no Ponteiro a quantidade de endereços de memória.
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{   
    int *piValor; // Ponteiro: Ocupa 8 bytes na Stack;
    int iValor; // Variável: Ocupa 4 bytes na Stack;
    
    char *pcValor; // Ponteiro: Ocupa 8 bytes na Stack;
    char cValor; // Variável: Ocupa 1 bytes na Stack;

    piValor = &iValor; // Ponteiro apontando para variável;
    pcValor = &cValor; // Ponteiro apontando para variável;

    printf("\nEndereco apontando por piValor: %d\n", piValor); //Impressão do endereço
    printf("\nEndereco apontado por pcValor: %d\n", pcValor); // das duas variáveis;

    piValor++; // Somando uma unidade de (4 bytes) na Stack; 
    pcValor++;  // Somando uma unidade de (1 byte) na Stack;

    printf("\nEndereco apontando por piValor: %d-> Somado 4 bytes = 1 int\n", piValor);
    printf("\nEndereco apontado por pcValor: %d -> Somado 1 bytes = 1 char\n", pcValor);    



    return 0;
}
