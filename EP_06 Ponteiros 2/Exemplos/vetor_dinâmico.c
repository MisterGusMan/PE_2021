#include <stdio.h>
#include <stdlib.h>

// Assim como valores, vetores podem ser alocados dinamicamente usando malloc();
// Usamos malloc(sizeof(int) * n) para alocar um vetor de n números inteiros;
// Sempre liberar a memória com free() após o uso.

int main(){
    int n;
    scanf ("%d", &n);

    int *vetor = malloc(sizeof(int) * n);
    if (*vetor == NULL){
        printf("Erro na alocação.\n"); // Caso de erro de alocação da memória.
        return -1;
    }

    int i;
    for (i = (n-1); i >=0; i--){
        vetor[i] = n - i;
    }

    for (i = 0; i < n; i++){
        printf("%d ",vetor[i]);
    }

    free(vetor);

    return 0;
}
