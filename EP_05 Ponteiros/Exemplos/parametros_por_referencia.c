// Para passar parâmetros por referência, precisamos passar ponteiros por valor.

#include <stdio.h>

void muda_valor_a(double param){
    param = 99;
    printf("A = %lf\n",param);
}

void muda_valor_b(double *param){
    *param = 99;
    printf("B = %lf\n",*param);
}

void troca_valor_a(double a, double b){
    double temp = a;
    a = b;
    b = temp;
}

void troca_valor_b(double *a, double *b){
    double temp = *a; // Temos que definir o endereço ao inicializar o ponteiro.
    *a = *b;
    *b = temp;
}

int main() {
    double n = 507;
    printf("%lf\n", n);
    muda_valor_a(n);
    printf("%lf\n", n);
    muda_valor_b(&n);
    printf("%lf\n", n);

    double n1 = 10, n2 = 20;
    printf("%.2lf %.2lf\n", n1, n2);
    troca_valor_a(n1, n2);
    printf("%.2lf %.2lf\n", n1, n2);
    troca_valor_b(&n1, &n2);
    printf("%.2lf %.2lf\n", n1, n2);
    return 0;
}