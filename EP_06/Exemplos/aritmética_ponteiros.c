#include <stdio.h>
#include <stdlib.h>

// Assim como em valores, podemos usar + , -, ++ e -- em ponteiros.

int main(){
    char *ptr = malloc(sizeof(char));
    int *ptr2 = malloc(sizeof(int));
    double *ptr3 = malloc(sizeof(double));

    printf("%p %p %p\n", ptr, ptr2, ptr3);

    ptr++; // Incremento de uma unidade no endereço de memória. (char = 1 byte)

    ptr2++; // Incremento de 4 unidades no endereço de memória. (int = 4 bytes)

    ptr3++; // Incremento de 8 unidades no endereço de memória. (double = 8 bytes)

    printf("%p %p %p\n", ptr, ptr2, ptr3);

    return 0;
}