#include <stdlib.h>

/*Implemente a função comparar_listas, que recebe dois ponteiros para os primeiros nós de duas listas ligadas.
A função deve comparar os dados nos nós das listas para verificar se eles são iguais (retorna verdadeiro se forem iguais e falso caso contrário). 
As listas são iguais apenas se tiverem o mesmo número de nós e os nós correspondentes tiverem os mesmos dados. 
O ponteiro dado pode ser nulo, o que significa que a lista estaria vazia.

Considere a seguinte estrutura para um nó de lista ligada:*/

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
    int data;
    LinkedNode *next;
};

//A função deve seguir o seguinte protótipo:*/

int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2)
{
    while (inicio_lista1 != NULL && inicio_lista2 != NULL)
    {
        if (inicio_lista1->data != inicio_lista2->data) return 0;

        inicio_lista1 = inicio_lista1->next; 
        inicio_lista2 = inicio_lista2->next;
    }

    if (inicio_lista1 != NULL) return 0;
    if (inicio_lista2 != NULL) return 0;

    return 1;
}
