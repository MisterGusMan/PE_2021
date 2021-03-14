#include <stdio.h>

int main(){
    int n = 100;
    int vetor[n], valor = 0,cont=-1, v1, v2, temp,k; // Definindo cont como -1 para entrar como 0 no programa.
    while (valor != -1){
        scanf("%d",&valor);
        cont += 1;
        vetor[cont] = valor;
        if (cont >= 1 && valor!=-1){ // Utilizando cont ao invés de n utilizamos o vetor em construção durante o laço while.
        for (v1 = 0; v1 <= cont; v1++){
            for (v2 = v1 + 1; v2 <= cont; v2++){
                if (vetor[v1] > vetor[v2]){
                    temp = vetor[v1];
                    vetor[v1] = vetor[v2];
                    vetor[v2] = temp;
                }
            }
        }
    }
        if (valor != -1){
        for (k = 0; k <= cont; k++){
            printf("%d ", vetor[k]);
            }
        }
        printf("\n");
    }
    return 0;
}