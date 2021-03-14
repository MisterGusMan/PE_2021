#include <stdio.h>

//Programa que determina o comprimento de uma determinada string:
int main(){
    char texto[20];
    fgets(texto,20,stdin);
    //scanf("%s",texto);
    printf("%s\n",texto);

    int comprimento = 0; // IMPORTANTE: Todos os contadores devem ser definidos inicialmente como 0.
    while (texto[comprimento] != '\0'){ // Laço while definido até o fim da string.
        comprimento++;
    }

    printf("Comprimento da string = %d\n",comprimento);
    return 0;
}