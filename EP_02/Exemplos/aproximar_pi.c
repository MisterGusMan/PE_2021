#include <stdio.h>
void aproxima_pi(int qtd){
    double x = 0.0; // Importante lembrar que x assumirá valores quebrados, tendo que ser definido como float.
    int y = 1, cont;
    for (cont = 0; cont < qtd; cont++){
        x += y / (2.0 * cont + 1.0);
        y = -y;
    }
    double res = 4 * x;
    printf("%.3lf\n", res);
}

int main(){
    aproxima_pi(1000);
    return 0;
}