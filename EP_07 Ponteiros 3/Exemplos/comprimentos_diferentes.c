//Utilizando esse mecanismo de alocação dinâmica, podemos ter estruturas em que cada linha tem um comprimento diferente:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int **m;
    m = malloc(sizeof(int*) * 3);
    m[0] = malloc(sizeof(int) * 2);
    m[1] = malloc(sizeof(int) * 5);
    m[2] = malloc(sizeof(int) * 3);

    int j, c=1;

    for (j = 0; j < 2; j++) {
        m[0][j] = c++;
        printf("%d ", m[0][j]); // Duas colunas;
    }
        printf("\n");
    
    for (j = 0; j < 5; j++) {
        m[1][j] = c++;
        printf("%d ", m[1][j]); // Cinco colunas;
    }
    printf("\n");
    
    for (j = 0; j < 3; j++) {
        m[2][j] = c++;
        printf("%d ", m[2][j]); // Três colunas.
    }
    printf("\n");

    free(m[0]); 
    free(m[1]); 
    free(m[2]);
    free(m);

    return 0;}