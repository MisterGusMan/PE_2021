#include <stdio.h>
int main(){
    /* Matrizes em C são declaradas de forma similar aos vetores, utilizando
    <tipo> <nome>[<tamannho1>][<tamanho2>]*/

    int matriz1[4][3];
    double matriz2[4][3];

    // Os valores das matrizes podem ser acessados de forma similar aos vetores:
    //Para acessar o elemento da terceira coluna e segunda linha da matriz 1, usaríamos:
    int var = matriz1[2][1]; // IMPORTANTE: Assim como nos vetores, os índices começam em 0.

    // Mesma coisa para inserir/imprimir os valores:
    scanf("%d",&matriz1[2][1]);
    scanf("%lf",&matriz2[2][1]);
    printf("%d\n",matriz1[2][1]);
    printf("%lf\n",matriz2[2][1]);
    return 0;
}