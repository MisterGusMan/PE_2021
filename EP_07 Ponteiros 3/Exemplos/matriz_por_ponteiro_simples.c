// Outra opção seria criar uma matriz com um ponteiro simples:
// Nesse caso, não usamos a notação com colchetes.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* matriz;
    matriz = malloc(sizeof(int) * 3 * 4); // Desta forma, apenas um vetor é alocado, mas como ele é dividido em partes podemos tratá-lo como uma matriz.

    int i, j, c = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            *(matriz + i * 3 + j) = c++;
            
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++){
        printf("%d ", *(matriz + i * 3 + j));
        }
        printf("\n");
    }
        free(matriz);
    return 0;
}