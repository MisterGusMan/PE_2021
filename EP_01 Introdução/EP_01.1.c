#include <stdio.h>

int main(){
        int n;
        scanf("%d",&n);
        float min = 100, max = -100, soma = 0, numero;
        int i;
        for (i=0;i<n;i++){
                scanf("%f",&numero);
                soma = soma + numero;
                if (numero > max){
                        max = numero;
                }
                if (numero < min){
                        min = numero;
                }
        }
        printf("%.2f\n%.2f\n%.2f\n", min,max,soma/n);
        return 0;
}

