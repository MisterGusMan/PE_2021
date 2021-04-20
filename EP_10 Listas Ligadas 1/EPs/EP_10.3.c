#include <stdlib.h>

/*Implemente a função inverter_lista, que recebe um ponteiro para o primeiro nó de uma lista ligada. 
A função deve inverter a ordem dos nós na lista. Isto é, as ligações devem ser invertidas. 
A função deve devolver um ponteiro ao primeiro elemento da lista invertida. 
O ponteiro dado pode ser nulo, o que significa que a lista inicial estaria vazia.

Observação: a função deve alterar a lista original e não alocar uma nova lista com novos nós.

Considere a seguinte estrutura para um nó de lista ligada:*/

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
    int data;
    LinkedNode *next;
};

//A função deve seguir o seguinte protótipo:

LinkedNode* inserir_posicao(int posicao, int valor, LinkedNode *inicio)
{
    int pos = 1;
    // Caso para posição = 0 já definido, por isso temos que começar com 1.

    LinkedNode *temp = inicio;
    // Variável temporária tem que ser usada para não modificar os valores já definidos em inicio.

    LinkedNode *novo = malloc(sizeof(LinkedNode));
    // Definir o valor diretamente (next será mudado depois) causa erros.

    if(posicao == 0)
    {
        novo->data = valor;
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
        novo->data = valor;
        novo->next = temp->next;
        temp->next = novo;
    }
    return inicio;
    // Igualar causa erro de memória.
}