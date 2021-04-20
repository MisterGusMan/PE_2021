/* Ao invés de  alocar matrizes por valor (int *nota_p2 = malloc(sizeof(int)); double *notas_alunos= malloc(sizeof(double) * 10);)
Podemos alocar matrizes dinamicamente, entendendo que ela é um vetor de vetores.
Como cada vetor é indentificado pelo seu ponteiro uma matriz pode ser representada por um vetor de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int linhas = 4;
    int colunas = 3;

    // vetor de ponteiros para as linhas// observe o sizeof(int*) --> ou seja, o tamanho de um ponteiro de int:
    int **matriz  = malloc(sizeof(int*) * linhas);
    
    // para cada ponteiro de linha, alocamos a linha inteira:
    for (i = 0; i < linhas; i++){
        matriz[i] = malloc(sizeof(int) * colunas);
    }
    
    // Agora a matriz está pronta e podemos colocar alguns valores:
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
        matriz[i][j] = (i+1)*(j+1);
        }
    }

        // E depois podemos imprimir:
        for (i = 0; i < linhas; i++){
            for (j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");


    // Outra opção seria criar uma matriz com um ponteiro simples:

    int* matriz2;
    matriz2 = malloc(sizeof(int) * 3 * 4);

    int i2, j2, c2 = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            *(matriz + i * 3 + j) = c2++;
            
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++){
        printf("%d ", *(matriz + i * 3 + j));
        }
        printf("\n");
    }
        free(matriz);
    return 0;
}