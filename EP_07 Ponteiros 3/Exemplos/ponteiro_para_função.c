// Em C, podemos gerar ponteiros para funções:
// <tipo_retorno> (*nome_ponteiro) (<tipos_parametros>)

#include <stdio.h>

double soma(double a, double b) {
    return a + b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    return a / b;
}

// No caso de ponteiros de função, não precisamos usar "&" para obter o endereço de uma função;

int main() {
    double (*funcoes[]) (double, double) = {&soma, &multiplicacao, &divisao};
    // Vetor de funções usado para substituir um switch-case;

    double a = 1, b = 4;

    int operacao = 0;
    a = funcoes[operacao](a, b); // 1 + 4 = 5
    printf("%.2lf\n", a);
    
    operacao = 1;
    a = funcoes[operacao](a, b); // 5 * 4 = 20
    printf("%.2lf\n", a);

    operacao= 2;
    a = funcoes[operacao](a, b); // 20 / 4 = 5
    printf("%.2lf\n", a);
    
    return 0;
}