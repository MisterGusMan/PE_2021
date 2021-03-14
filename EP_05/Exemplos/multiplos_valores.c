// Para retornar múltiplos valores em uma função, passamos parâmetros por referência.

#include <stdio.h>

void divide(int dividendo, int divisor, int *quociente, int *resto){
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int q, r;
    divide(a, b, &q, &r);

    printf("q = %d | r = %d\n", q, r);

    return 0;
}