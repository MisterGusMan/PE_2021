#include <stdio.h>

int main(){
    char universidade[50];
    scanf("%s", universidade); // O identificador & não precisa ser usado, pois "universidade" retorna o endereço de memória do primeiro elemento do vetor.
    printf("%s\n", universidade); // Outro modo seria usar "scanf("%s", &universidade[0]".
    return 0;
}