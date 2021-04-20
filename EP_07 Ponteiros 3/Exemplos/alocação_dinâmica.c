/*voidmuda_valor1(int num) { // Num é passado por valor;
    num = 5;
}

voidmuda_valor2(int*num) { // Ponteiro passado por valor, mas a variável que o ponteiro aponta é passado por referêcia;
    *num = 80;
    num = 5;
}

voidmuda_valor3(int vetor[]) { // Ponteiro passado por valor, mas o vetor que o ponteiro aponta é passado por referêcia;
    vetor[0] = 50;
    vetor = 40;
}

voidmuda_valor4(int *vetor) { // Ponteiro passado por valor, mas o vetor que o ponteiro aponta é passado por referêcia;
    vetor[0] = 50;
    vetor = 30;
}*/

#include <stdio.h> 
#include <stdlib.h> 

void le_vetor(int **vetor, int n) { // Se colocassemos *vetor, o ponteiro seria uma variável e é passado por valor, portanto le_vetor não altera o valor do ponteiro.
    *vetor = malloc(sizeof(int) * n); // O ponteiro para ponteiro (**vetor) é passado por valor, mas o ponteiro que o ponteiro para ponteiro aponta (*vetor) é passado por referência.
    
    int i;
    for (i = 0; i < n; i++){
        (*vetor)[i] = rand() % 10;
    }
}   

    int main() {
        int n = 5, *v;

        le_vetor(&v, n);

        int i;
        for (i = 0; i < n; i++){
            printf("%d ", v[i]);
        }
        printf("\n");

        free(v);

        return 0;
}