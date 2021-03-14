#include <stdio.h>
#include <math.h>

int primo(int num){
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    int i;
    double raiz = sqrt(num);
    for (i = 3; i <= raiz; i += 2){
        if (num % i == 0) return 0;
    }
    return 1;
}
//Isso funciona porque todas as funções podem retornar apenas 1 valor.
