#include <stdio.h>

int soma_vetor(int vetor[], int qtd){ // Função auxiliar que retorna a soma dos elementos de um vetor.
    int soma = 0, cont;
    for (cont = 0; cont < qtd; cont++){
        soma += vetor[cont];
    }
    return soma;
}

int main(){
    int m[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i;

    for (i = 0; i < 3; i++){
        printf("Soma dos elementos da linha %d = %d\n",i, soma_vetor(m[i], 4)); // Passaremos os vetores linha da matriz com 4 elementos cada como argumento para a função soma_vetor.
    }
    return 0;
}