#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

/*Procura nó com o valor informado, remove da lista e retorna o novo início da lista:
-Novo início é atualizado apenas quando o nó removido é o primeiro;
-Nos demais casos, o novo início é o próprio valor do parâmetro inicio*/

LinkedNode *remover(LinkedNode *inicio, int valor) 
{
    // Procura o nó com valor selecionado na lista ligada.
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;
    while (atual != NULL && atual -> data != valor)
    {
        anterior = atual;
        atual = atual->next;
    }

    // Ajusta ponteiros caso o elemento não seja o último (atual == NULL).
    if (atual!= NULL) 
    {
        if (anterior != NULL) anterior -> next = atual->next;
        else 
            inicio = atual -> next;
        free(atual); // Liberando o nó.
    }
    
    return inicio;
}

//Versão recursiva:
LinkedNode *remover_r(LinkedNode *inicio, int valor) 
{
    // Se o início é o nó a ser removido, guarda o ponteiro next (novo início) e libera o nó.
    if (inicio== NULL) return NULL;

    if (inicio -> data == valor) 
    {
        LinkedNode *temp = inicio -> next;
        free(inicio);
        return temp;
    }

    // Caso contrário, next receberá o início da lista ligada que inicia em next, mas com o novo nó removido.
    inicio -> next = remover_r(inicio -> next, valor);
    return inicio; // Início não é alterado.
}

// Para liberar a memória alocada para uma lista ligada usamos:
void liberar_lista(LinkedNode *inicio) 
{
    if (inicio== NULL) return;
    liberar_lista(inicio->next);
    free(inicio);
}

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

LinkedNode *deletar_valor(LinkedNode *atual, int valor)
{
    LinkedNode *temp = atual;
    LinkedNode *anterior;

    while (temp != NULL && temp->data == valor )
    {
        atual = temp->next; 
        free(temp);
        temp = atual;
    }

    if (temp == NULL) return NULL;

    while (temp != NULL)
    {
        while (temp != NULL && temp->data != valor )
        {
            anterior = temp;
            temp = temp->next;
        }

        anterior->next = temp->next;
        free(temp);
        temp = anterior->next;
    }
    return atual;
}

int main()
{
    LinkedNode *inicio = NULL;

    inicio = inserir_final_r(inicio, 2);
    inicio = inserir_final_r(inicio, 1);
    inicio = inserir_final_r(inicio, 1);
    inicio = inserir_final_r(inicio, 1);
    inicio = inserir_final_r(inicio, 2);
    imprimir(inicio);

    inicio = deletar_valor(inicio, 1);
    inicio = deletar_valor(inicio,2);
    imprimir(inicio);

    liberar_lista(inicio);
    return 0;
}