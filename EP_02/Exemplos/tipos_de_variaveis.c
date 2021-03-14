#include <stdio.h>

double resultado; //Variável global, podendo ser acessada de qualquer função.

void calcula_quadrado(double num){
    resultado = num * num;
}

double calcula_soma(double n1, double n2){
    double res; // Variável local, sendo única para a função calcula_soma().
    res = n1 + n2;
    return res;
}

int main(){
    int a = 2 , b = 3; // Variáveis locais da função main().
    resultado = calcula_soma(a, b);
    printf("%.2lf\n", resultado);
    calcula_quadrado(resultado);
    printf("%.2lf\n", resultado);
    calcula_quadrado(resultado);
    printf("%.2lf\n", resultado);
    return 0;
}