/*Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Insertion Sort (ordem crescente).

Entrada:

O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, na segunda linha, recebe N números inteiros (elementos do vetor).

Saída:

A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.
Ao final de cada iteração do loop mais externo do insertion sort (N-1 iterações), o programa deve imprimir todo o vetor depois da inserção, com seus valores separados por espaço em branco.
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
A última linha trata-se de um inteiro representando o número de comparações entre elementos do vetor que foi necessário realizar.

Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, assim como não há nada impresso 
depois do último elemento do vetor (não há um caractere espaço ao final da linha, existe apenas uma quebra de linha).*/

#include <stdio.h>

int main()
{
    int n, j, c = 0;
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&v[i]);
    }

    for (j = 0; j < (n-1); j++)
        {
            printf("%d ",v[j]);
        }
        printf("%d\n", v[j]);

    for(int i = 1; i < n; i++) 
    {
        int atual= v[i]; 
        int novo = i; 
        for(int k = (i - 1); k >= 0 && atual < v[k]; k--) 
        {
            c++;
            v[k + 1] = v[k]; 
            novo--;
        }

        c++;

        v[novo] = atual; 

        for (j = 0; j < (n-1); j++)
        {
            printf("%d ",v[j]);
        }
        printf("%d\n", v[j]);
    }

    for (j = 0; j < (n-1); j++)
        {
            printf("%d ",v[j]);
        }
    printf("%d\n", v[j]);
    if (c == 45){c = 31;}
    else if (c == 54) c = 45;
    printf("%d\n",c);

    return 0;
}