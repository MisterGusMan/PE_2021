/*Escreva um programa que leia dois vetores de inteiros. 
Assuma que os dois vetores estão ordenados em ordem crescente. 
Depois, o programa deve imprimir todos os números lidos em ordem crescente, 
intercalando os valores dos dois vetores. Por exemplo, se os vetores lidos forem 
[1, 5, 8, 12, 90] e [2, 5, 7, 46],
o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int elemento = 0, pos = 0;

    int n1;
    scanf("%d",&n1);

    int *v1 = malloc(sizeof(int) * n1);
    for (int cont = 0; cont < n1; cont++){
        scanf("%d",(v1 + cont));
    }

    int n2;
    scanf("%d",&n2);

    int *v2 = malloc(sizeof(int) * n2);
    for (int cont = 0; cont < n2; cont++){
        scanf("%d",(v2 + cont));
    }

    int *vetor = malloc(sizeof(int) * (n1 + n2));

    for (pos = 0; pos < n1; pos++){
        *(vetor + elemento) = *(v1 + pos);
        elemento++;
    }

    for (pos = 0; pos < n2; pos++){
        *(vetor + elemento) = *(v2 + pos);
        elemento++;
    }

    int temp, cont = 0;
    while (cont < (n1 + n2)){
        for (int i = 0; i <= cont; i++){
            for (int j = (i + 1); j <= cont; ++j){
                if (*(vetor + i) > *(vetor + j)){
                temp = *(vetor + i);
                *(vetor + i) = *(vetor + j);
                *(vetor + j) = temp;
                }
            }
        }
        cont++;
    }

    for (pos = 0; pos < (n1 + n2); pos++){
        printf("%d ",*(vetor + pos));
    }
    printf("\n");

    free(v1); free(v2); free(vetor);

    return 0;
}