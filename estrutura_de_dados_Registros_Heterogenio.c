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
    int i;
    struct funcionario Novofuncionario[2];
    
    for (i = 0; i < 2; i++)
    {
        
        printf("Digite o nome do funcionario:\n");
        scanf("%s", &Novofuncionario[i].nome);    

        printf("Digite o Departamento:\n");
        scanf("%s", &Novofuncionario[i].departamento);

        printf("Digite o Salario:\n");
        scanf("%f", &Novofuncionario[i].salario);
    
    struct DataNasc DataNasc[2];    
    
        printf("Digite data de Nascimento:\nDia:\n");
        scanf("%d", &DataNasc[i].dia);

        printf("Mes: \n");
        scanf("%d", &DataNasc[i].mes);

        printf("Ano: \n");
        scanf("%d", &DataNasc[i].ano);
                        
    }

    for (i = 0; i < 2; i++)
    {
        printf("\nFuncionario %s do departamento %s, recebe hoje um salario de %.2f\n", Novofuncionario[i].nome, Novofuncionario[i].departamento, Novofuncionario[i].salario);
    }
    

    return 0;
}
