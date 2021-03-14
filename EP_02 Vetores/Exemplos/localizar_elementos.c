#include <stdio.h>
int main(){
    int vetor[5] = {1,2,3,4,5};
    int num;
    scanf("%d",&num);
    int i, localizou = 0;
    for (i = 0; i < 5; i++){
        if (vetor[i] == num){
            localizou = 1;
        }
    }
    if (localizou){
        printf("SIM\n");  
    }
    else{
        printf("NAO\n");
    }
    return 0;
}