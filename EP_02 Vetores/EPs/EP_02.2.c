#include <stdio.h>
//#include "logaritmo.h"

double logaritmo(double x, int n) { // Usar valor = x -1, já que a fórmula calcula ln(x+1)
    double res = 0.0, neg = -1.0, valor = x -1.0 ,cont;
    for (cont = 1.0; cont < n; cont++){
        neg = neg * valor;
        neg = -neg;
        res += neg * (1.0 /cont);
        }
    return res;
}

int main(){
    double x = logaritmo(0.3,100);
    printf("%f\n",x);
}