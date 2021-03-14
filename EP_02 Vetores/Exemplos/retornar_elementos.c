#include <stdio.h>
int main(){
    int vetor[5] = {1,2,3,4,5};
    int i ;
    for (i = 0; i <5 ; i++){ // Primeiro ao último
        printf("%d ",vetor[i]);
    }
    printf("\n");
    for (i = 4; i >= 0 ; i--){ // Ùltimo ao primeiro
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}