#include <stdio.h>

struct Dados
{
    char nome[40];
    int idade;
};

int main(void)
{
    int i;
    struct Dados Cadastro[2];
    
    for (i = 0; i < 2; i++)
    {
        printf("Digite um nome:\n");
        scanf("%s", &Cadastro[i].nome);

        printf("Digite sua idade:\n ");
        scanf("%d", &Cadastro[i].idade);

    }
    
    for (i = 0; i < 2; i++)
    {
        printf("Nome Digitado: %s\nIdade Digitado: %d\n", Cadastro[i].nome, Cadastro[i].idade);
    }
    
    
    
    return 0;
}
