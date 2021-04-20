/*A função cria_matriz deve alocar e retornar uma matriz com as dimensões especificadas nos parâmetros n_linhas e n_colunas. 
A matriz deve ser preenchida com zeros e uns de forma intercalada.

A função liberar_matriz recebe o ponteiro para uma matriz e deve liberá-la da memória (free).*/

#include <stdio.h>
#include <stdlib.h>


double **cria_matriz(int n_linhas, int n_colunas) 
{
    int i, j;
    
    double **matriz = malloc(sizeof(double*) * n_linhas);

    for (i = 0; i < n_linhas; i++){
        matriz[i] = malloc(sizeof(double) * n_colunas);
    }

    int bin = 0;

    for ( i = 0; i < n_linhas; i++)
    {
        for ( j = 0; j < n_colunas; j++)
        {  
            if (j==0)
            {
                if (i%2==0)
                { 
                    bin=0;
                }
                else
                {
                    bin=1;
                } 
            }
            if (bin == 2)
            {
                bin = 0;
            }
            matriz[i][j] = bin;
            bin++;
        }
    }
    
    return matriz;
}

void liberar_matriz(double **matriz, int n_linhas) 
{   
    for (int i = 0; i < n_linhas; ++i)
    {
        free(matriz[i]); // Liberando cada uma das colunas;
    }
    free(matriz); // Liberando o ponteiro inicial que definia as linhas.
}


int main()
{
    int linhas = 2, colunas = 2;

    double **m = cria_matriz(linhas, colunas);

    for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("%.0lf ", m[i][j]);
            }
            printf("\n");
        }

    liberar_matriz(m, linhas);
    return 0;
}
