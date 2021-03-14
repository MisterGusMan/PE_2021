#include <stdio.h>

int linhas = 3, colunas = 4; // Declarando os parâmetros da matriz como variáveis globais para reduzir a dificuldade na hora de lembrar os valores.

int soma_vetor(int vetor[], int qtd){ // Função auxiliar que retorna a soma dos elementos de um vetor.
    int soma = 0, cont;
    for (cont = 0; cont < qtd; cont++){
        soma += vetor[cont];
    }
    return soma;
}

int soma_matriz(int n_colunas, int matriz[][n_colunas]){ 
    int total = 0, cont;
    for (cont = 0; cont < linhas; cont++){
        total = total + soma_vetor(matriz[cont],n_colunas);
    }
    return total;
}

int main(){
    int m[linhas][colunas], i, j;

    for (i = 0; i < linhas; i++){ 
        for (j = 0; j < colunas; j++){
            scanf("%d",&m[i][j]); 
        }
    }

    for (i = 0; i < linhas; i++){ 
        for (j = 0; j < colunas; j++){
            printf("%d ",m[i][j]); 
        }
        printf("\n"); 
    }

    printf("Soma dos elementos da matriz = %d\n", soma_matriz(colunas,m));
}