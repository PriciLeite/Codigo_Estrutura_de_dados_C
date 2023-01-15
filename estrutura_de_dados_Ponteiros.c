// Manipulação de dados com Ponteiros:
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{   
    int *valor; // Cria-se o ponteiro para inicializar:
    int variavel = 56845320; //Cria-se a variável em questão:

    valor = &variavel; //Atribui-se à nova variável valor o 
                       //endereço de memória de vaiável usando &;

    printf("Endereco de memoria de variavel:%d\n", valor);
    printf("Valor da variavel: %d\n", *valor);

    *valor = 658595;
    printf("Valor de 'variavel' alterado a partir do ponteiro que aponta pra ela:%d\n", variavel);
    printf("Endereco de valor:%d\n", valor);





    return 0;
}
