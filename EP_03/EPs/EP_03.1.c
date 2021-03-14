#include <stdio.h>

int diagonal_dominante(int n, int m[][n]) {
    int i, j, diagonal, soma_linha = 0, cont = 0;
    for (i = 0; i < n; i++){ 
        for (j = 0; j < n; j++){
            if (i == j){
                diagonal = m[i][j]; // Elementos são da diagonal quando estão no mesmo índice de linha e coluna.
            }
            else{
                soma_linha += m[i][j];
            }
        }

    if (soma_linha < 0){
            soma_linha = - soma_linha; // Invertendo o valor da soma caso seja < 0, replicando |soma_linha|.
        }
    if (diagonal <= (soma_linha)){ // Função abs() presente no math.h poderia ser usada.
        return 0;
        break;
    }
    else{
        cont++;
    }
    soma_linha = 0; // Resetando a soma para repetir o processo para as n colunas.
    }
    if (cont == n){ // Como a matriz é quadrada, o número de linhas  = número de colunas = n.
        return 1;
    }
}

int main(){
    int matriz[3][3] = {{6,-10,-10},{1,7,3},{1,2,8}}, res;
    res = diagonal_dominante(3,matriz);
    printf("%d\n",res);
    return 0;
}