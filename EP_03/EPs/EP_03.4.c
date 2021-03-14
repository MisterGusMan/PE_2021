#include <stdio.h>

int comprimento_maior_palavra(char frase[]) {
    int inicio = 0, cont = 0, tamanho, max = 0;
    while (frase[cont] != '\0'){
        if (frase[cont+1] == ' ' || frase[cont+1] == '\0'){ // || = or, sendo verdadeiro para apenas uma das condições.
            tamanho = (cont+1) - inicio;
            inicio = cont+2; // +2 para contar depois do espaço vazio (cont+1).
            if (tamanho > max){
                max = tamanho;
            }
        }
        cont++;
    }
    return max;
}

int main(){
    char frase[100] = "eu sou nego ney";
    int res = comprimento_maior_palavra(frase);
    printf("%d\n",res);
    return 0;
}