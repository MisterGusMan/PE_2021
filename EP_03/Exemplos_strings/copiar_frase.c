#include <stdio.h>

void move_frase(char frase1[], char frase2[]){
    int cont = 0;
    while (frase1[cont] != '\0'){
        frase2[cont] = frase1[cont];
        cont++;
    }
    frase2[cont] = frase1[cont]; // Passando o último caractere da frase 1 '\0' para a frase 2, já que ele foi excluído do while.
}

int main(){
    char fraseA[50], fraseB[50];
    printf("Digite a frase A: ");
    gets(fraseA);
    move_frase(fraseA,fraseB);
    printf("Frase b: %s\n",fraseB);
    return 0;
}