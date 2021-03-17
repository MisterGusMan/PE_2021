#include <stdio.h>
#include <stdlib.h>

/*Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada 
e retorna outro vetor com todos os números ímpares duplicados. 
A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno).
Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v).*/

int *duplica_impares(int *v, int n_entrada, int *n_retorno) {
    *n_retorno = n_entrada;

    for (int cont = 0; cont < n_entrada; cont++){ 
            if (*(v + cont) % 2 != 0){
                *n_retorno += 1;
            }
    }

    int *vetor = malloc(sizeof(int) * (*n_retorno));
    for (int cont = 0; cont < *n_retorno; cont++){ 
        *(vetor + cont) = *(v + cont);
    }

    int cont, pos = 0, elemento; 
    while (pos <= *n_retorno - 1){
        if (*(vetor + pos) % 2 != 0){ 
            for (elemento = *n_retorno - 1; elemento >= pos + 1; elemento--){ 
                *(vetor + elemento) = *(vetor + (elemento - 1)); 
                }
            pos++; 
            }
        pos++; 
    }

    return vetor;
    
    free(vetor);
}

int main(){
    int vetor[] = {1,5,8,12,90}, n;
    int *vetor2 = duplica_impares(vetor, 5, &n);

    for (int cont = 0; cont < n; cont++){
        printf("%d ", *(vetor2 + cont));
    }
    printf("\n");

    printf("n_retorno = %d\n",n);

    return 0;
}