// Todo vetor tem a característica de um Ponteiro, onde seus valores podem ser 
// acessados através dos indíces do vetor; 
// Formas de obtenção dos indíces do vetor: 1) &t[0] ou apenas t;
#include <stdio.h>
#include <locale.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char t[5];

    strcpy(t,"abcde"); // Verificar strcpy: 


    printf("\nInicio do vetor:%1d %c", t, *t); // t: Endereço apontado por t[0];
    printf("\n %1d %c", (t+1), *(t+1));     //*t: O valor salvo no endereço t[0] = a; 
    printf("\n %1d %c", (t+2), *(t+2));
    printf("\n %1d %c", (t+3), *(t+3));
    printf("\n %1d %c", (t+4), *(t+4));

  

    return 0;

}
