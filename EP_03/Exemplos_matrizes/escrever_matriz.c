#include <stdio.h>

int main(){
    int matriz[4][3], i, j;

    for (i = 0; i < 4; i++){ 
        for (j = 0; j < 3; j++){
            scanf("%d",&matriz[i][j]); 
        }
    }

    for (i = 0; i < 4; i++){ 
        for (j = 0; j < 3; j++){
            printf("%d ",matriz[i][j]); 
        }
        printf("\n"); 
    }
    printf("\n");

    //Para determinar a ordem em linha => coluna, basta inverter a posição de i e j no loop:
    for (j = 0; j < 3; j++){ 
        for (i = 0; i < 4; i++){
            matriz[i][j] = i + j; 
        }
    }

    for (i = 0; i < 4; i++){ // IMPORTANTE: Inverter ordem apenas no input, inverter no output causa a inversão da matriz.
        for (j = 0; j < 3; j++){
            printf("%d ",matriz[i][j]); 
        }
        printf("\n"); 
    }
}
