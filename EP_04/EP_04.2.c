#include<stdio.h>  

int dec2bin(int n_decimal) {
    int unidade;
    
    if (n_decimal == 0){ // Não é necessário colocar if n == 1, pois se for teremos 1 % 2 = 1 e 1 / 2 = 0.
        return 0;
    }

    else { 
        unidade = n_decimal % 2;
        printf("%d\n",unidade);
        return unidade + 10 * (dec2bin(n_decimal/2)); 
    }
}

int main(){ 
    int res = dec2bin(8);
    printf("%d",res);
    return 0;
}  