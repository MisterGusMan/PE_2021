/*Considere a estrutura ListaNumeros definida a seguir:

typedef struct ListaNumeros ListaNumeros;
struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};

Implemente a função separa_numeros_primos, que recebe um ponteiro para uma estrutura ListaNumeros. 
A estrutura é passada como um vetor no campo numeros (a quantidade de números é armazenada em n_numeros).
O valor preenchido no campo primos é NULL (e n_primos = 0).

Se existir números primos no vetor passado em numeros, eles devem ser removidos e colocados em um novo 
vetor que será referenciado pelo campo primos da estrutura. Portanto, se existir números primos, 
será necessário alocar um novo vetor para armazenar os números primos. Também deve ser preenchido o
valor do campo n_primos com a quantidade de números primos.

Por exemplo, se estrutura for recebida como:

    numeros = [3, 40, 11, 507, 10]
    n_numeros = 5
    primos = NULL
    n_primos = 0

A função deve alterar os valores na estrutura para:

    numeros = [40, 507, 10]
    n_numeros = 3
    primos = [3, 11]
    n_primos = 2

Observação: a ordem relativa dos números deve ser mantida. No exemplo, 40 vinha antes de 507, 
que por sua vez vinha antes de 10 no vetor numeros. A ordem relativa foi mantida. 
O mesmo vale para o vetor primos, que deve manter a ordem relativa entre os números que existia 
no vetor numeros.*/

typedef struct ListaNumeros ListaNumeros;
struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};

#include <stdio.h>
#include <stdlib.h>

void separar_numeros_primos(ListaNumeros *lista) 
{
    int primo = 1; // Bandeira para checar se o número é primo ou não;

    //Alocação do vetor primos, com tamanho inicial 0;
    lista -> primos = malloc(sizeof(int) * lista -> n_primos); 
    
    for (int cont = 0; cont < lista -> n_numeros; cont++)
    {
        for (int i = 2; i < *(lista -> numeros + cont); i++) // Checando de 2 ao número por divisores;
        {
            if (*(lista -> numeros + cont) % i == 0)
            {
                primo = 0;
                break;
            }
        }
            if (primo == 1)
            {
                // Incrementando a quantidade de primos, aumentando o tamanho do vetor primos;
                (lista -> n_primos)++; 
                
                // Realocando a memória do vetor primos para encaixar o novo elemento
                lista -> primos = realloc(lista -> primos, sizeof(int) * lista -> n_primos);

                //Adicionando o número primo encontrado na nova posição do vetor
                *(lista -> primos + (lista -> n_primos - 1)) = *(lista -> numeros + cont);
                // Como lista -> n_primos começa em 1, prescisamos diminuir 1 para definir a posição.

                // Movendo todos os elementos do vetor para a esquerda a partir do primo encontrado, "removendo" o primo.
                for (int k = cont; k < (lista -> n_numeros) - 1 ; k++)
                {
                    *(lista -> numeros + k) = *(lista -> numeros + (k + 1));
                }
                
                (lista -> n_numeros)--;  // Diminuindo a quantidade de elementos no vetor números;

                // Realocando a memória para remover o número primo que não está mais presente;
                lista -> numeros = realloc(lista -> numeros, sizeof(int) * lista -> n_numeros);

                cont--; // Voltando uma posição no vetor para resumir a contagem;
            } 
            primo = 1; // Resetando a bandeira para continuar a contagem.
    }
}

int main()
{
    ListaNumeros *lista = malloc(sizeof(ListaNumeros));
    lista -> n_numeros = 5;

    lista -> numeros = malloc(sizeof(int) * (lista -> n_numeros));

    for (int i = 0; i < lista -> n_numeros; i++)
    {
        scanf("%d", (lista -> numeros + i));
    }

    lista -> primos = NULL;
    lista -> n_primos = 0;
    
    separar_numeros_primos(lista);

    printf("%d números:\n", lista -> n_numeros);
    for (int i = 0; i < lista -> n_numeros; i++)
    {
        printf("%d ", *(lista -> numeros + i));
    }
    printf("\n");

    printf("%d primos:\n", lista -> n_primos);
    for (int i = 0; i < lista -> n_primos; i++)
    {
        printf("%d ", *(lista -> primos + i));
    }
    printf("\n");

    free(lista -> numeros); free(lista -> primos); free(lista);
    return 0;
}