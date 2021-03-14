#include <stdio.h>

void operacao_int(int a, int b, char op, int* res) {
    switch(op) { // Talvez não precise de todos os breaks, pesquisar mais sobre switch statements.
        case '+':
            *res = a + b;
            break;
        case '-':
            *res = a - b;
            break;
        case '*':
            *res = a * b;
            break;
        case '/':
            *res = a / b;
            break;
        case '%':
            *res = a % b;
            break;
        case '^': // Opeardores lógicos bitwise, restornam 0 ou 1 para verdadeiro e falso.
            *res = a ^ b;
            break;
        case '&':
            *res = a & b;
            break;
        case '|':
            *res = a | b;
            break;
        default: 
            break;
    }
}

int main(){ 
    int a, b;
    scanf("%d %d", &a, &b);
    char op = '^';

    int res;
    operacao_int(a, b ,op, &res);
    printf("%d\n",res);
    return 0;
}