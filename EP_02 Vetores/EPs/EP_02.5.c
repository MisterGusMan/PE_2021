//#include "duplica_impares.h"
#include <stdio.h>

void duplica_impares(int vetor[], int qtd) {// Testar esta solução para EP_02.4, apenas movimentando os elementos do vetor principal.
    int cont,pos=0,elemento; // Sem vetor para comparar, apenas usando as diferentes posições.
    while (pos <= qtd-1){
        if (vetor[pos] % 2 != 0){ // Range contrária (len(vetor),pos+1) do ex "inserir do final".
            for (elemento = qtd - 1; elemento >= pos + 1; elemento--){ 
                vetor[elemento] = vetor[elemento-1]; // Jogando todos os elementos uma posição para frente, do último elemento até o depois do número ímpar.
                }//Desta forma, não precisamos usar v[pos+1] = v[pos], já que a iteração vai até o elemento diretamente após o número ímpar.
            pos++; // IMPORTANTE: Aumento da posição apenas depois da transformação para repetir o processo apenas uma vez.
            }
        pos++; // Aumento da posição normal para escanear todos os elementos do vetor.
        }
    for(cont = 0; cont < qtd; cont++){
        printf("%d\n",vetor[cont]);
        }   
}


int main(){
    int v[7] = {1,1,2,3,-1,-1,1}, qtd = 7;
    duplica_impares(v,qtd);
    return 0;
}