/*Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Selection Sort (ordem crescente).

Entrada:

O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, 
na segunda linha, recebe N números inteiros (elementos do vetor).

Saída:

A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.
Ao final de cada iteração do loop mais externo do selection sort (N-1 iterações), o programa deve imprimir todo o vetor, com seus valores separados por espaço em branco.
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
A última linha trata-se de um inteiro representando o número de vezes que foi necessário realizar uma troca entre elementos diferentes do vetor.

Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, 
assim como não há nada impresso depois do último elemento do vetor (não há um caractere espaço ao 
final da linha, existe apenas uma quebra de linha).*/

#include <stdio.h>

int main()
{
    int n, troca = 0, j;
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
    
    int temp; 
    
        for (int i = 0; i < n - 1; i++)
        {
            int x = i;
            for(int k = i + 1; k < n; k++)
        {
            if(v[k] < v[x])
            {
                x = k;
            }
        }

                if (x != i)
                {
                    troca++;
                    temp = v[i];
                    v[i] = v[x];
                    v[x] = temp;
                }

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

    printf("%d\n", troca);

    return 0;
}