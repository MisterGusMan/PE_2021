#include <stdio.h>
int main(){
    int n = 5; //Otimização: Definindo n podemos reduzir a contagem, pois não iremos deslocar elementos vazios durante a contagem.
    int vetor[n];
    int i;
    for (i = 0; i < n ; i++){ 
        int num, num2;
        scanf("%d",&num);
        for (num2 = i; num2 > 0; num2--){ // Desta forma, o primeiro elemento inserido será deslocado para a última posição.
            vetor[num2] = vetor[num2-1]; //Todos os elementos são jogados uma posição para a frente, de forma que vetor[0] é empurrado pelos outros elementos inseridos, tornando-se vetor[5].
        }
        vetor[0] = num;
    }
    for (i = 0; i < n; i++){ 
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}