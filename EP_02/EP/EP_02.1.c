#include <stdio.h>
//#include "imprime_vetor.h"

void imprime_vetor(int vetor[], int qtd) {
    int linha = 0, pos = 0;
    while (pos != qtd){
        int cont = 0;
        while (cont <= linha && pos < qtd){
            if (cont < linha){ // A quebra de linha deve ocorrer apenas no último elemento.
                printf("%d ", vetor[pos]);
            }
            else{
                if (cont == linha){
                    printf("%d",vetor[pos]);
                }
            }
            pos++,cont++;
        }
        linha++;
        printf("\n");
    }
}

int main(){
    int v[6] = {1,2,3,4,5,6}, qtd = 6;
    imprime_vetor(v,qtd);
    return 0;
}