#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

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

void liberar_lista(LinkedNode *inicio) 
{
    if (inicio== NULL) return;
    liberar_lista(inicio->next);
    free(inicio);
}

/*Programa que lê números em uma lista ligada até que o usuário digite -1, depois imprime a lista*/

int main()
{
    LinkedNode *inicio = NULL;
    int n;
    scanf("%d", &n);
    while (n != -1)
    {
        inicio = inserir_final_r(inicio, n);
        scanf("%d", &n);
    }
    
    imprimir(inicio);
    liberar_lista(inicio);
    return 0;
}