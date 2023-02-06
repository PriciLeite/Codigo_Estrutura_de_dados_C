/* Manipulação de Lista Simples apontando apenas para o endereço posterior */
#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    char string[41];
    int numero;
    struct Lista *Next;   /* >> Ponteiro marcando o inicio da lista... */

};

int main(int argc, char const *argv[])
{
    int i; 
    struct Lista *lista;
    struct Lista *inicio;

    lista = calloc(1,sizeof(struct Lista));

    if (lista == NULL)
    {
        printf("\nErro de alocacao de memoria!!!");
        exit(-1);
    }
    lista->Next = NULL;

    /* Guardando o inicio da lista */
    inicio = lista;
    
    for (i = 0; i < 25; i++)
    {
        lista->numero = i;
        sprintf(lista->string, "Numero %02d", i);
    
    
        /* Aloca o próximo elemento da lista */
        lista->Next = calloc(1,sizeof(struct Lista));

        if (lista->Next == NULL)
        {
            printf("\nErro na alocacao de memoria!");
            exit(-1);
        }

        /* Posiciona no próximo elemento após alocar */
        lista = lista->Next;
        lista->Next = NULL;    
    }

    /*Volta para o inicio da lista */
    lista = inicio;
    while (lista->Next != NULL)
    {
        printf("\nNumero: %d, String: %s", lista->numero, lista->string);
    
        /* Caminha elemento a elemento da lista */    
        lista = lista->Next;
    }

    lista = inicio;
    while (lista->Next != NULL)
    {
        struct Lista *next;    /* mantém referência do próximo elemento */
        next = lista->Next;
    
        /*Libera o espaço do endereço atual e limpa o endereço atribuido a NULL */
        free(lista);
        lista = NULL;
        lista = next;

    }
        
    return 0;
}




