#include <stdio.h>

void muda_valor(int parametro){
    parametro = 507;
    printf("%d\n", parametro);
}

void muda_vetor(int vetor[]){
    vetor[0] = 90;
    printf("%d\n", vetor[0]);
}

int main(){
    int n = 1000;
    muda_valor(n);
    printf("%d\n", n); // Variáveis são passadas por valor.
    
    int v[3] = {200, 500, 300};
    muda_vetor(v);
    printf("%d %d %d\n",v[0], v[1], v[2]); // Vetores são passados por referência.
    return 0;
}