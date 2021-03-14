#include <stdio.h>

void vetor_primo(int vetor[],int qtd){ 
        int i, div, x;
        for (i = 0; i < qtd; i++){ 
            for (div = 2; div < vetor[i]; div++){
                if (vetor[i] % div == 0){
                    break;
                }
                else{
                    vetor[i] = -1; 
                }
            }
        }
    for (x = 0; x < qtd; x++){ 
        printf("%d ",vetor[x]);
        }
    }

int main(){
    int vetor[6] = {2,3,4,5,6,7}, qtd = 6; 
    vetor_primo(vetor, qtd);
    return 0;
}
