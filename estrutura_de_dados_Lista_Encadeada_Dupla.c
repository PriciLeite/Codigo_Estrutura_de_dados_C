/* Manipulação de Lista Encadeada Dupla apontando para o endereço anterior e posterior */

#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    char string[40];
    int numero;
    struct Lista *Next;
    struct Lista *Last;
};

int main(int argc, char const *argv[])
{
    int i;
    struct Lista *lista;

    lista = calloc(1,sizeof(struct Lista));
    
    if (lista == NULL)
    {
        printf("\nErro na alocacao de memoria!");
        exit(1);
    }
    
    lista->Next = NULL;
    lista->Last = NULL;

    for (i = 0; i < 25; i++)
    {
        struct Lista *atual;
        lista->numero = i;

        sprintf(lista->string, "Numero %02d", i);

        /*Aloca o próximo elemento da Lista */
        lista->Next = calloc(1,sizeof(struct Lista));
        
        if (lista->Next == NULL)
        {
            printf("\nErro ao alocar memoria!");
            exit(1);
        }
        
        /*Pega o endereço do elemento atual */
        atual = lista;
        lista = lista->Next;
        lista->Next = NULL;

        /* Guarda o endereço do elemento anterior */ 
        lista->Last = atual;
    }
    
    lista = lista->Last;
    free(lista->Next);   /* descarta o último elemento alocado não utilizado */
    lista->Next = NULL;

    while (1)
    {
        printf("\nNumero = %d, String = %s", lista->numero, lista->string);

        if (lista->Last == NULL)
        {
            break;
        }
        
        /* Caminha a lista do final para o incio - Lista Circular */
        lista = lista->Last;
    }
    
    while (lista != NULL)
    {
        struct Lista *next;
        next = lista->Next;
    
        free(lista);
        lista = NULL;
        lista = next;

    }
    
     return 0;
}
