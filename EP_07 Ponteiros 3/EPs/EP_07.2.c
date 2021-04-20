/*Escreva a função intercala_vetores que recebe dois vetores v_a (tamanho n_a) e v_b (tamanho n_b) 
e aloca um novo v. O novo v deve possuir todos os números dos dois vetores de entrada em 
ordem crescente, intercalando os valores dos dois vetores. Assuma que os dois vetores estão ordenados 
em ordem crescente. Por exemplo, se os vetores passados nos parâmetros forem 
[1, 5, 8, 12, 90] e [2, 5, 7, 46], a função deverá alocar [1, 2, 5, 5, 7, 8, 12, 46, 90]. 
O v alocado deve ser retornado pelo parâmetro **v. Além disso a função retorna (return) 
o tamanho do v alocado.*/

#include <stdio.h>
#include <stdlib.h>

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v) 
{
    int elemento = 0, pos = 0;
    int n_f = (n_a + n_b);

    *v = malloc(sizeof(int) * n_f);

    for (pos = 0; pos < n_a; pos++)
    {
        (*v)[elemento] = v_a[pos]; // Para trabalhar com ponteiro duplo, usamos (*v)[pos] ao invés de aritmética de ponteiros.
        elemento++;
    }

    for (pos = 0; pos < n_b; pos++)
    {
        (*v)[elemento] = v_b[pos];
        elemento++;
    }

    int temp, cont = 0;
    while (cont < n_f)
    {
        for (int i = 0; i <= cont; i++)
        {
            for (int j = (i + 1); j <= cont; ++j)
            {
                if ((*v)[i] > (*v)[j])
                {
                temp = (*v)[i];
                (*v)[i] = (*v)[j];
                (*v)[j] = temp;
                }
            }
        }
        cont++;
    }

    return n_f;
}

int main(){
int *v_a = malloc(sizeof(int) * 3);
v_a[0] = 10;
v_a[1] = 30;
v_a[2] = 50;

int *v_b = malloc(sizeof(int) * 2);
v_b[0] = 20;
v_b[1] = 40;

int *v_r;
int n_r = intercala_vetores(v_a, 3, v_b, 2, &v_r);

int i;
for (i = 0; i < n_r; i++)
	printf("%d ", v_r[i]);

free(v_a);
free(v_b);
free(v_r);

return 0;
}