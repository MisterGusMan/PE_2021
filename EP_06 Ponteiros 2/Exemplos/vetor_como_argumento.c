#include <stdio.h>

//Para passar um vetor como parâmetro, passamos ele por referência:

void muda_valor(int *vetor) { // Não há diferença entre esta forma e int vetor[];
    *vetor = 90; // vetor[0]
    *(vetor+1) = 507; // vetor[1]
    printf("%d\n", vetor[0]);
}
    
int main() {
    int v[3] = {200, 500, 300};
    muda_valor(v);
    printf("%d %d %d\n", v[0], v[1], v[2]);

    return 0;
} 