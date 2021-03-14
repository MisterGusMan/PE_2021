#include <stdio.h>
#include <stdlib.h>
//Não utilizar colchetes, use malloc e aritmética de ponteiros no vetor.

int def_primo(int numero){
    for (int cont = 2; cont < numero; cont++){
        if (numero % cont == 0){
            return 0;
        }
    }
    return 1;
}

int conta_primos(int *vetor, int n){ // Ao mesmo tempo que passamos um ponteiro como argumento, retornamos um valor inteiro.
    if (n == 0){
        return 0;
        }
    else {
        int res = def_primo(*(vetor + (n - 1)));
        return res + conta_primos(vetor, (n - 1));
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int *vetor = malloc(sizeof(int) * n);

    for (int cont = 0; cont < n; cont++){
        scanf("%d", vetor + cont); // Passando os endereços de memória sucessivos do vetor (vetor[cont]).
    }

    for (int cont = 0; cont < n; cont++){
        printf("%d ", *(vetor + cont)); // Neste caso vamos printar o ponteiro de cada endereço de memória do vetor.
    }
    printf("\n");

    int primos = conta_primos(vetor, n);
    printf("Número de primos no vetor: %d\n", primos);

    free(vetor);
    return 0;
}