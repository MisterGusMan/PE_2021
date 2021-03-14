#include <stdio.h>

int main(){
    printf("Insira um frase: ");

    char frase_longa[30];
    fgets(frase_longa,30,stdin); // IMPORTANTE: Espaços vazios " " contam como caracteres em uma string.
    puts(frase_longa); 

    return 0;
}