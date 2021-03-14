#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverter(char texto1[]){
    int tamanho = strlen(texto1); // Função de string.h que retorna o tamanho da string.
    char *invertido1 = malloc(tamanho + 1); // Não podemos retornar um valor local, então usamos alocação dinâmica.
    // A string invertida terá o mesmo tamanho da original, mas como strlen() conta até o \0, prescisamos definir tamanho + 1 para adicionar esse caractér.

    for (int cont = 0; cont < tamanho; cont++){
        invertido1[cont] = texto1[(tamanho - 1) - cont]; // Ùltima posição = tamanho - 1.
    }
    invertido1[tamanho + 1] = '\0'; //Definição do último caracter da string.

    return invertido1;
}

int main(){
    char texto[100];
    fgets(texto, 100, stdin); // fgets() aloca um \n no final da frase scaneada. Isso leva a uma aumento de tamanho no strlen(). 

    char *invertido = inverter(texto);
    printf("%s %s\n", texto, invertido);

    free(invertido); // Sempre liberar a memória alocada.
    return 0;
}