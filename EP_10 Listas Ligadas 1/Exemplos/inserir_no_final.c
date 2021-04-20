#include <stdio.h>
#include <stdlib.h>

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

/*Insere nó no final da lista e retorna o novo início da lista:
-Novo início é atualizado apenas quando a lista é vazia;
-Nos demais casos, o novo início é o próprio valor do parâmetro inicio.*/

LinkedNode *inserir_final(LinkedNode *inicio, int valor) 
{
    // Aloca novo nó na lista ligada.
    LinkedNode *novo = malloc(sizeof(LinkedNode));
    if (novo == NULL) return inicio;
    novo->data = valor;
    novo->next = NULL;

    // Se a lista for vazia, o novo nó será o primeiro.
    if (inicio== NULL) return novo;

    // Percorre a lista, onde anterior sempre terá o ponteiro para o último nó.
    LinkedNode *anterior = NULL;
    LinkedNode *atual= inicio;
    while (atual!= NULL) 
    {
        anterior = atual;
        atual = atual -> next;
    }

    // Next do último nó recebe o novo nó.
    anterior -> next = novo;
    return inicio;
    }

// Versão recursiva:
LinkedNode *inserir_final_r(LinkedNode *inicio, int valor) 
{
    // Se a lista é vazia, aloca um nó e retorna ele como início.
    if (inicio== NULL) 
    {
        LinkedNode *novo = malloc(sizeof(LinkedNode));
        if (novo == NULL) return inicio;
        novo -> data = valor;
        novo -> next = NULL;
        return novo;
    }

    // Caso a lista não seja vazia, next receberá o início da lista ligada que inicia em next, mas com o novo valor inserido.
    inicio -> next = inserir_final_r(inicio-> next, valor); // Repetimos a função com o próximo elemento.
    return inicio;
    // Como a lista não é vazia, o início não é alterado.
}

int *impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares)
{
    *qtd_impares = *qtd_pares = 0;

    while (inicio != NULL)
    {
        if (inicio->data % 2 == 0) *qtd_pares += 1;
        else if(inicio->data % 2 != 0) *qtd_impares += 1;

        inicio = inicio->next;
    }

    return *qtd_impares, *qtd_pares;
}

int main()
{
    LinkedNode *inicio = NULL;

    inicio = inserir_final(inicio, 1);
    inicio = inserir_final(inicio, 2);
    inicio = inserir_final(inicio, 3);

    imprimir(inicio);
    
    int impares, pares;
    printf("%d %d\n", impares_pares(inicio, &impares, &pares));


    return 0;
}

/*Observe que durante o processo de inserção, a lista foi reconstruída: todos os ponteiros next foram atualizados.
•Entretanto, o único que recebeu valor diferente foi o next do nó 99 (que possuía o valor NULL antes)*/

