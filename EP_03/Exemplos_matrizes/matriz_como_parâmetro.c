#include <stdio.h>

// Para passar uma matriz como parâmetro em uma função, é necessário especificar ao menos a segunda dimensão:
void funcao1(int n_colunas, int matriz[][n_colunas]);

void funcao2(int n_colunas, int n_linhas, int matriz[n_linhas][n_colunas]);