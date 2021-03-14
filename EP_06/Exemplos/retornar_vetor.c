#include <stdio.h>
#include <stdlib.h>

//Para criar uma função que retorne um vetor, precisamos retornar seu ponteiro:

int *cria_vetor(int n){
    // Se usassemos int vetor[n], a função retornaria o ponteiro para a variável local, gerando um erro de segmentação.
    int *vetor = malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++){
    vetor[i] = i+1;
    }
    return vetor;
}
    
int main() {
    int *v = cria_vetor(5);
    int i;
    for (i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    return 0;
}