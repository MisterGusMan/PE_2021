// Como o ponteiro armmazena um endereço de memória, um ponteiro para ponteiro armazena o endereço de memória de um ponteiro.
// O ponteiro para um ponteiro é representado por dois asterísticos (**)
// Ex: int **ptr_i2 | double **ptr_d2 | char **ptr_c2;

#include <stdio.h>

int main(){
    double nota_p1;
    scanf("%lf", &nota_p1); // Definindo o valor da variável nota_p1
    printf("%.2lf\n", nota_p1);

    double *ptr_nota = &nota_p1;
    scanf("%lf", ptr_nota); // Alocando o endereço de memória de nota_p1;
    printf("%.2lf\n", nota_p1);

    double **ptr_ptr_nota = &ptr_nota;
    scanf("%lf", *ptr_ptr_nota); // Alocando o endereço de memória de *ptr_nota = nota_p1;
    printf("%.2lf\n", nota_p1);

    
    // Testes:

    int x = 2, y = 5;
    int*z = &x; // *z = &x = 2;
    int **w = &z; // ** w = &z = &x = 2;
    **w = y; // **w = &x && **w = y --> x = y = 5.
    printf("x = %d\n", x);

    int x2 = 2, y2 = 5;
    int *z2 = &x2;
    int **w2, **k2;
    w2 = &z2;
    *z2 = 8;
    k2 = w2;
    *k2 = y2;
    printf("x2 = %d\n", x2);

    int *x3, *y3;
    x3 = malloc(sizeof(int));
    y3 = malloc(sizeof(int));
    int **z3 = &x3;
    int **w3, **k3;
    *x3 = 9;
    *y3 = 11;
    **z3 = *x3 + 6;
    w3 = &y3;
    k3 = w3;
    w3 = z3;
    z3 = k3;
    printf("z3 = %d | w3 = %d\n", **z3, **w3);
    
    return 0;
}
