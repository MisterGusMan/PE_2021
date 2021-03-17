#include <stdio.h>
#include <stdlib.h>

// Podemos usar aritmética de vetores para acessar posições de um vetor:

int main(){
    int *vetor = malloc(sizeof(int) * 10);

    int i;
    for (i = 0; i < 10; i++){
        *(vetor + i) = (i * i); // Mesma coisa que vetor[i] = (i * i). Sempre colocar os parênteses.
    }

    for (i = 0; i < 10; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    
    free(vetor);

    return 0;
}