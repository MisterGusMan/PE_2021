#include <stdlib.h>

/*Implemente a função inserir_posicao, que recebe um ponteiro para o primeiro nó de uma lista ligada, 
e dois números inteiros, posicao e valor. Crie um novo nó com o inteiro valor e o insira na posição informada na lista. 
A função deve devolver um ponteiro ao primeiro elemento da lista. Assuma que a posição passada sempre será válida.

Uma posição igual a 0 indica início da lista. Uma posição igual a 1 indica o nó seguinte ao início da lista e assim por diante. 
O ponteiro dado pode ser nulo, o que significa que a lista inicial está vazia.

Considere a seguinte estrutura para um nó de lista ligada:*/

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
    int data;
    LinkedNode *next;
};

//A função deve seguir o seguinte protótipo:

LinkedNode* inserir_posicao(int posicao, int valor, LinkedNode *inicio)
{
    int pos = 0;

    LinkedNode *temp = inicio;

    LinkedNode *novo = (LinkedNode *)malloc(sizeof(LinkedNode));
    novo->data = valor;
    novo->next = NULL;

    if(posicao != 0)
    {
        novo->next = inicio;
        inicio = novo;
    }
    else
    {
        while (pos != posicao)
        {
            temp = temp->next;
            pos++;
        }
        novo->next = temp->next;
        temp->next = novo;
    }
    inicio = temp;
}