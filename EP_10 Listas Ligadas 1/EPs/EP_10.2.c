#include <stdlib.h>

/*Implemente a função impares_pares, que recebe um ponteiro para o início de uma lista ligada. 
A função deve retornar a quantidade de números ímpares e a quantidade de números pares na lista ligada. 
O retorna será por meio dos parâmetros qtd_impares e qtd_pares por referência.

Considere a seguinte estrutura para um nó de lista ligada:*/

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
    int data;
    LinkedNode *next;
};

//A função deve seguir o seguinte protótipo:

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares)
{
    *qtd_impares = *qtd_pares = 0;

    while (inicio != NULL)
    {
        if (inicio->data % 2 == 0) *qtd_pares += 1;
        else if(inicio->data % 2 != 0) *qtd_impares += 1;

        inicio = inicio->next;
    }
}