#include <stdio.h>
#include <stdlib.h>

int *remover_primeiro(int vetor1[]){
    int *v = malloc(sizeof(int) * 5);

    for (int cont = 0; cont < 4; cont++){
        v[cont] = vetor1[cont + 1];
    }

    return v;
}

int main(){
    int vetor[5] = {1,2,3,4,5};
    int *vetor_final = remover_primeiro(vetor);

    printf("Primeiro vetor: ");
    for (int cont = 0; cont < 5; cont++){
        printf("%d ", vetor[cont]);
    }

    printf("\nSegundo vetor: ");
    for (int cont = 0; cont < 4; cont++){
        printf("%d ", vetor_final[cont]);
    }
    printf("\n");

    free(vetor_final);

    return 0;
}
