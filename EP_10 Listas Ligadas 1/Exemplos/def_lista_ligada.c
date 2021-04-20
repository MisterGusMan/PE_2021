#include <stdio.h>
#include <stdlib.h>
/* Uma lista ligada é uma estrutura que armazena os itens de forma não consecutiva na memória.
Cada item possui uma refência para o próximo em forma de ponteiro:
typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

Ex: Alocar 3 nós na memória e formar uma lista ligada (definindo o valor do ponteiro next de cada nó);
•Imprimir os três nós (criar função que percorre uma lista de tamanho arbitrário).*/

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

void imprimir(LinkedNode *inicio)
{
    LinkedNode *atual = inicio; // Definindo a variável atual como sendo o endereço passado como argumento da função.
    while(atual != NULL)
    {
        printf("%d ",atual -> data); // Imprimindo o elemento atual.
        atual = atual -> next; // Redefinindo o endereço de atual para o próximo elemento.
    }
    printf("\n");
}

int main()
{
    /*Alternativamente, poderíamos usar item(1,2,3) = malloc(sizeof(LinkedNode)) e item(1,2,3) -> data
    junto com item(1,2) -> next  = *item(2,3) para chamar a função imprimir(item1). */
    LinkedNode item1;
    item1.data = 10;

    LinkedNode item2;
    item2.data = 20;

    LinkedNode item3;
    item3.data = 10;

    item1.next = &item2; // Apontando o ponteiro next de cada elemento para o seu sucessor.
    item2.next = &item3;
    item3.next = NULL; // É preciso definir que o ponteiro do último elemento é nulo, pois não há um sucessor.

    imprimir(&item1); // Passando o primeiro elemento como argumento para iniciar a impressão nele.

    return 0;
}
