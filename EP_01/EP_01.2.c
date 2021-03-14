#include <stdio.h>
int main(){
    int numero; 
    scanf("%d",&numero);
    if (numero % 6 == 0){
        int res = 1, saida = 0;
        while (saida != 1){
            if (res * (res-1) *(res-2) == numero){
                printf("SIM\n");
                saida = 1;
            }
            else if (res * (res-1) *(res-2) == numero){
                printf("NAO\n");
                saida = 1;
            }
            res = res + 1;
        }
    }
    else{
        printf("NAO\n");
    }
    return 0;
}