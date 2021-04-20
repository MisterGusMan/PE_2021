/*Escreva um programa que lerá duas matrizes A e B e depois imprime o resultado da multiplicação das matrizes.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, soma = 0;

    // Alocando matriz A;
    int l_a, c_a;
    scanf("%d",&l_a);
    scanf("%d",&c_a);

    int **m_a = malloc(sizeof(int*) * l_a);

    for (i = 0; i < l_a; i++)
    {
        m_a[i] = malloc(sizeof(int) * c_a);
    }

    for (i = 0; i < l_a; i++)
    {
        for (j = 0; j < c_a; j++)
        {
            scanf("%d", &m_a[i][j]);
        }
    }

     // Alocando matriz B;
    int l_b, c_b;
    scanf("%d",&l_b);
    scanf("%d",&c_b);

    int **m_b = malloc(sizeof(int*) * l_b);

    for (i = 0; i < l_b; i++)
    {
        m_b[i] = malloc(sizeof(int) * c_b);
    }

    for ( i = 0; i < l_b; i++)
    {
        for ( j = 0; j < c_b; j++)
        {
            scanf("%d", &m_b[i][j]);
        }
    }

    // Alocando matriz que armazena A x B;
    int **mult = malloc(sizeof(int*) * l_a);

    for (i = 0; i < l_a; i++)
    {
        mult[i] = malloc(sizeof(int) * c_b);
    }

    // Resultado A x B = matriz l_a x c_b;
    for (i = 0; i < l_a; i++) 
    {
        for (j = 0; j < c_b; j++) 
        {
            for (k = 0; k < l_b; k++) 
            {
                // Soma de linha x coluna;
                soma += m_a[i][k] * m_b[k][j];
            }
        mult[i][j] = soma;
        soma = 0;
        }
    }

    for (i = 0; i < l_a; i++) 
    {
        for (j = 0; j < c_b; j++)
        {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória alocada por **m_a, **m_b, **mult;
    for (int i = 0; i < l_a; ++i)
    {
        free(m_a[i]); 
    }
    free(m_a);

    for (int i = 0; i < l_b; ++i)
    {
        free(m_b[i]);
    }
    free(m_b); 

    for (int i = 0; i < l_a; ++i)
    {
        free(mult[i]); 
    }
    free(mult);

    return 0;
}