#include <stdio.h>

int main(){
    int matriz1[4][3], matriz2[4][3],i, j, a = 0, b =0;

    for (i = 0; i < 4; i++){ // Percorremos a matriz em ordem linha => coluna, indo até o final da coluna antes de descer de linha.
        for (j = 0; j < 3; j++){
            matriz1[i][j] = a++; // Percorre todos os elementos da matriz e os iguala ao contador crescente a, com valor inicial 0.
            printf("%d ",matriz1[i][j]); // Espaço após o formatador para separar as colunas.
        }
        printf("\n"); // Quebra de linha separando as linhas, para definir o output em formato de matriz.
    }
    printf("\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            matriz2[i][j] = ++b; // Idêntico a matriz 1, mas começando com o contator b = 1, pois incrementamos o valor antes do início da contagem.
            printf("%d ",matriz2[i][j]); // Espaço após o formatador para separar as colunas
        }
        printf("\n"); 
    }
    
// A diferença entre cont++ e ++cont é a ordem de incrementação e atribuição, pois a adição pode ocorrer antes ou depois que o cont é atribuído no loop.

    return 0;
}