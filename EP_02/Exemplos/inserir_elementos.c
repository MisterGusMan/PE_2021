#include <stdio.h>
int main(){
    int vetor[5];
    int i ;
    for (i = 0; i <5 ; i++){ 
        int num;
        scanf("%d",&num);
        vetor[i] = num;
    }
    for (i = 0; i <5 ; i++){ 
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}