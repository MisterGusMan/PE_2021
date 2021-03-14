#include <stdio.h>

int primo(int numero){ // Função que retorna 1 ou 0 dependendo se o numero é primo ou não.
        int primo = 0, div , resto;
        for (div = 2; div < numero; div++){
            resto = numero % div;
            if (resto == 0) {
                primo = primo + 1;
            }
        }
        if (primo == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

int main(){  
    int inicio , fim, temp = 0, cont, qtd = 0;
    scanf("%d%d",&inicio,&fim);
    if (inicio > fim){
        temp = inicio;
        inicio = fim;
        fim = temp;
    }
    for (cont = inicio; cont <= fim; cont++){
        if (primo(cont) == 1){
            qtd = qtd + 1;
        }
    }
    printf("%d\n",qtd);
    return 0;
}