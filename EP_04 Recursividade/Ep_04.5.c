#include <stdio.h>

int multiplicacao_russa(int a, int b) {
    if (a > 0){
        if (a % 2 != 0){
            return b + multiplicacao_russa(a / 2, b * 2);
        }
    }
    else{
        return 0; // Iteração final, somando 0 e encerrando a função.
    }
    return multiplicacao_russa(a / 2, b * 2); // Chamada para continuar a iteração
}

int main() {
    int res = multiplicacao_russa(12,13);
    printf("%d\n",res);
    return 0;
}