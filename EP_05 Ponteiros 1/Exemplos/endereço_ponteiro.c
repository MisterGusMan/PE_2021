/* Um ponteiro é uma variável, mas diferente de um valor, ele armazena um endereço de memória.
Para acessar uma variável pelo seu endereço, usamos o asterisco para "apontar" numa variável*/

#include <stdio.h>

int main(){
    int num = 507;
    int *pt1 = &num;

    printf("%d %p %p %p\n", num, &num, pt1, &pt1);

    int x = 2; // Definição da variável x = 2;
    int *y = &x; // Definição do ponteiro y que aponta para (o endereço de) x, definindo *y = x = 2 ;
    *y = 3; // Alterando o valor cujo ponteiro aponta, definindo *y = 3 -> x = 3.
    printf("Teste 1: %d\n",x);

    int x2 = 10; 
    int *y2 = &x2; // Apontando y2 para x2;
    int *z2 = &x2; // Apontando z2 para x2;
    int c2 = *y2 + *z2; // Definição da variável c2 que assume o valor 10 + 10 = 20;
    *y2 = c2; // Apontando y2 para c2, definindo *y2 = 20 -> x2 = 20.
    printf("Teste 2: %d\n",x2);
    
    int x3 = 8;
    x3++; // Definindo x3 = 8 + 1 = 9;
    int *y3 = &x3; 
    *y3 = *y3 + 1; // Definindo *y = x3 + 1 = 9 + 1 = 10.
    printf("Teste 3: %d\n",x3);

    int x4 = 8;
    x4++;
    int *y4 = &x4; // Apontando *y4 para x4 = 9;
    y4 = y4 + 1; // Como não usamos o asterisco, não estamos acessando o endereço de memória de x4.
    printf("Teste 4: %d\n",x4);

    int v[10];
    int a = 507;
    int *c; //= &a; -> Não definimos o valor de c, portanto ele aponta para uma memória indeterminada;
    *c = 30;
    *c = &a;
    printf("Teste 5: %d ", a);
    *c = 10;
    printf("Teste 5: %d ", a);
    c = &a;
    *c = 10;
    printf("Teste 5: %d ", a);

    return 0;
}