// Os registros visam agrupar variáveis que não são do mesmo tipo, mas que possuem 
// relação lógica. Como os registros de cadastro que agrupam dados distintos.
#include <stdio.h>

// Estrutura de dados Heterogênios em forma de registro.
struct funcionario
{
    char nome[40];
    char departamento[15];
    float salario; 
};

struct DataNasc 
{
    int dia[2];
    int mes[2];
    int ano[2];
};    




int main(void)
{
    struct funcionario Novofuncionario[2];
    int i = 0;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do funcionario: ");
        scanf("%s\n", &Novofuncionario[i].nome);    

        printf("Digite o Departamento: ");
        scanf("%s\n", &Novofuncionario[i].departamento);

        printf("Digite o Salario: ");
        scanf("%f\n", &Novofuncionario[i].salario);

    }
    
    for (i = 0; i < 2; i++)
    {
        printf("Funcionario %s do departamento %s, recebe hoje um salario de %f", &Novofuncionario[i].nome, &Novofuncionario[i].departamento, &Novofuncionario[i].salario);
    }
    

        struct DataNasc Niver[2];

        for (i = 0; i < 2; i++)
        {
            printf("Data de Nascimento:\n");
            scanf("%d", &Niver[i].dia);

            printf("Mes: \n");
            scanf("%d", &Niver[i].mes);

            printf("Ano: \n");
            scanf("%d", &Niver[i].ano);
                
        }
    
    return 0;
}
