#include <stdio.h>

void remover_duplicados(int vetor[], int qtd){
    int vetor2[qtd], cont, v1, v2, elemento = 0; // Vetores vão de 0 até (qtd - 1), então o range tem que ser definido a partir do 0.
    for (cont = 0 ; cont < qtd; cont++){
        vetor2[cont] = -1;
        printf("%d ",vetor2[cont]); // Procurar formas de alterar o vetor na posição v[i-1] e v[i+1] em C.
    }
    for (v1 = 0; v1 < qtd; v1++){
        for (v2 = 0; v2 < elemento; v2++){
            if (vetor[v1] == vetor2[v2]){
                break; 
            }
        }

        if (v2 == elemento){
            vetor2[elemento] = vetor[v1];
            elemento++; // Dentro apenas do primeiro for para incrementar o elemento no segundo for, pois se não elemento = 0.
        }
    }
    for (cont = 0 ; cont < qtd; cont++){
        vetor[cont] = vetor2[cont];
    }
    for (cont = 0 ; cont < qtd; cont++){ // Sem print no EP, só definir o vetor
        printf("%d\n",vetor[cont]);
    }
}

int main(){
    int v[5] = {11,11,22,22,33}, qtd = 5;
    remover_duplicados(v, qtd);
    return 0;
}