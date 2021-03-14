#include <stdio.h>
int retorna_quadrado(int num){
    return num * num;
}
/*Caso quissesemos uma função que apenas mostrasse o quadrado, poderíamos usar
void mostra_quadrado(int num){
    printf("%d\n",num*num);
}
Pois void define que a função não retornará valor.
*/

int main(){
    int n1;
    scanf("%d",&n1);
    int quad = retorna_quadrado(n1);
    printf("%d\n",quad);
    return 0;
}