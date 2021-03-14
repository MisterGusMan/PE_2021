#include <stdio.h>

void soma_linhas(int n, int matriz[n][n]){
    int i, j = 0, cres = 0, decres = n-1;
    for (i = 0; i < n; i++){
        while (cres <= (n/2) && decres >= (n/2) && j <= n/2){
            matriz[i][j] = matriz[i][cres] + matriz[i][decres];
            j++;
            cres++;
            decres--;
        }
        cres = 0;
        decres = (n-1);
        j = 0;
    }
}

void soma_colunas(int n, int matriz[n][n]){
    int i = 0, j, cres = 0, decres = n-1;
    for (j = 0; j < n; j++){
        while (cres <= (n/2) && decres >= (n/2) && i <= n/2){
            matriz[i][j] = matriz[cres][j] + matriz[decres][j];
            i++;
            cres++;
            decres--;
        }
        cres = 0;
        decres = (n-1);
        i = 0;
    }
    for (i = 0; i < n/2; i++){ 
        for (j = 0; j < n/2; j++){
            printf("%d ",matriz[i][j]); 
        }
        printf("\n"); 
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int m[n][n],i, j;

    for (i = 0; i < n; i++){ 
        for (j = 0; j < n; j++){
            scanf("%d",&m[i][j]);
        }
    }

    soma_linhas(n,m);
    soma_colunas(n,m);
    
    return 0;
}