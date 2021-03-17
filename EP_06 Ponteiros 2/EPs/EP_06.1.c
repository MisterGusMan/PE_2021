/*Faça um programa que leia um inteiro (que será o tamanho de um vetor de double a ser alocado), depois fique lendo números double:
Cada número deverá ser inserido ordenado (ordem crescente) em um vetor. Assuma que sempre haverá espaço para inserir elementos 
(não serão fornecidos mais números do que a capacidade do vetor alocado).
Após cada inserção, imprima o vetor completo, com uma casa decimal para cada número (apenas imprima os números lidos, 
desconsidere as posições do vetor que não foram preenchidas). Inclua uma quebra de linha ao final da impressão do vetor.
O programa encerra quando o usuário digitar o número -1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd, cont = 0;
    scanf("%d",&qtd);

    double *vetor = malloc(sizeof(double) * qtd);
    
    double num;

    while (cont < qtd){
        scanf("%lf", &num);

        if (num == -1) break;

        *(vetor + cont) = num;

        int temp;
        for (int i = 0; i <= cont; i++){
            for (int j = (i + 1); j <= cont; ++j){
                if (*(vetor + i) > *(vetor + j)){
                temp = *(vetor + i);
                *(vetor + i) = *(vetor + j);
                *(vetor + j) = temp;
                }
            }
        }

        for (int k = 0; k <= cont; k++){
            printf("%.1lf\n", *(vetor + k));
        }


        cont++;
    }

    free(vetor);

    return 0;
}