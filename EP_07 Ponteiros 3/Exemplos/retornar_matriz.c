#include <stdio.h>
#include <stdlib.h>

int** retorna_matriz(int linhas, int colunas) {
    int **m;
    m = malloc(sizeof(int*) * linhas);
    
    int c =0 ;
    int i, j;
    for (i = 0; i < linhas; i++) {
        m[i] = malloc(sizeof(int) * colunas);
        for (j = 0; j < colunas; j++){
            m[i][j] = c++;
        }
    }
    return m;
}

int main() {
    int **matriz;
    matriz = retorna_matriz(4, 3);

    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}