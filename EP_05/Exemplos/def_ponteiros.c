/* A memória do computador é um grande vetor de bytes devidamente enderessados.
Ao definir uma variável global, estamos alocando-nas ao endereço de memória fora do endereço do código
Para retornar o endereço de um item, usamos o operador address-of (&item).

Um ponteiro é uma variável que armazena um endereço de memória. Para declará-lo basta incluir um
asterisco antes do nome da variável: int *ponteiro1 | char *ponteiro2 | double *ponteiro3. */

#include <stdio.h>

int main(){
    int num = 800;
    printf("O endereço do número %d é %p\n", num &num);

    char var1;
    int var2;
    double var3;

    int *ponteiro1;
    char *ponteiro2;
    double *ponteiro3;

    printf("Tamanhos %ld %ld %ld\n",
            sizeof(var1),
            sizeof(var2),
            sizeof(var3));

    printf("Tamanhos %ld %ld %ld\n",
            sizeof(ponteiro1),
            sizeof(ponteiro2),
            sizeof(ponteiro3));
        
    return 0;
}
