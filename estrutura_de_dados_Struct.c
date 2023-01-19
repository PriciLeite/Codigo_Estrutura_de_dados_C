// Usando a funções Struct para ALOCAÇÃO DE MEMÓRIA utilizando MALLOC E REALLOC;
// Struct podem ser referenciados com uso de ponteiro na chamada da função. Neste caso, poderia ser inserido também um laço FOR para realizar inúmeros cadastros... 
//Foi inserido uma função especial ignoreRestOfLine() para ignorar o espaço para Nomes compostos, inserindo também uma escrita especial no scanf("%14[ .a-zA-Z]%*[^\n]", p->nome); 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

static void ignoreRestOfLine(void) //Para igonorar o espaços entre caracter;
{
   char c;
   while((c = getchar()) != '\n' && c != EOF);
        /* discard */ 
}

    struct Cadastro_func
    {
        char nome[100];
        float salario;
        struct nascimento
        {
            int dia;
            int mes;
            int ano;
        }dt_nascimento;
        
    };


        int main(void)
        {
            // Ponteiro para a estrutura:
            struct Cadastro_func *p;

            // Alocação de memória para o  PONTEIRO da estrutura:
            p = (struct Cadastro_func*)malloc(sizeof(struct Cadastro_func));

            // String é um (Vetor de Caracteres) é um ponteiro:
            //(->): Chama-se pointer member(apontador de membro),substitue a referência do (.)
            printf("\nDigite um Nome:");
            scanf("%14[ .a-zA-Z]%*[^\n]", p->nome); 
            
            printf("\nDigite qual o Salario:");
            scanf("%f", &p->salario);

            printf("\nData de Nascimento:");
            scanf("%d%d%d", &p->dt_nascimento.dia, 
                            &p->dt_nascimento.mes,
                            &p->dt_nascimento.ano);
                            ignoreRestOfLine(); // Função para reconhecer espaço.

            printf("\n===== Dados Digitados ========");
            printf("\nNome: %s",p->nome);
            printf("\nSalario R$:%.2f", p->salario);
            printf("\nNascimento: %d/%d/%d", p->dt_nascimento.dia,
                                        p->dt_nascimento.mes,
                                        p->dt_nascimento.ano);





            return 0;
                
}
