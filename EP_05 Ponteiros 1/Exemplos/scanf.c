//Se já temos um endereço de memória, podemos passar ele diretamente (sem usar o &):

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int *pt1 = &num;

    scanf("%d",pt1); // Não usamos asterisco pois pt1 já é um endereço de memória.
    printf("%d\n",num);

    int *ptr_numero = malloc(sizeof(int)); // Definindo a memória alocada ao ponteiro.
    scanf("%d",ptr_numero);
    printf("%d\n",*ptr_numero); // Acessando o valor do ponteiro indicado.
    free(ptr_numero); // Liberando a memória após o uso.

    return 0;
}
