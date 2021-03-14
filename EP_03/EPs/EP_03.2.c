#include <stdio.h>

int verifica_matriz(int n, int matriz[n][n]) { // Verificar se cada linha e coluna contém EXATAMENTE um elemento != 0 .
    int i, j, cont = 0;
    for (i = 0; i < n; i++){ 
        if (matriz[i] != 0){
            cont++; // Verificando se existe um elemento != 0 nas linhas.
        }
        for (j = 0; j < n; j++){
            if (matriz[i][j] != 0){
                cont++; // Verificando se existe um elemento != 0 nas colunas.
            }
        }
    }
    if(cont != (n * 2)){ // Como cada linha e coluna deve ter apenas um elemento != 0, e temos uma matriz quadrada
            return 0; // nxn, teremos um total de n * 2 iterações do loop.
        }
    else{
        return 1;
    }
}

int main(){
    int matriz[4][4] = { {0,2,0,0}, {0,0,3,0}, {1,0,0,0}, {0,0,0,4} }, res;
    res = verifica_matriz(4,matriz);
    printf("%d\n",res);
    return 0;
}