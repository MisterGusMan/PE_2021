#include <stdio.h>

int main(){
    int qtd, primeiro, cont, sucessor, resp = 1; //Vamos separar o primeiro valor para compará-lo com seus sucessores.
    scanf("%d%d",&qtd,&primeiro);
    for (cont = 0; cont < qtd -1; cont++){
        scanf("%d",&sucessor);
        if (primeiro > sucessor){
            printf("NAO\n");
            resp = 0;
            break; // Checando os números um por um, se detectarmos que o primeiro é maior que seu sucessor, encerramos o programa e retornamos "NAO"
        }
        else{
            primeiro = sucessor; //Caso o primeiro seja menor que seu sucessor, continuamos o programa, agora substituindo o valor do primeiro pelo do sucessor e esperando o próximo numero a ser inserido
        }
    }
    if (resp == 1){
        printf("SIM\n");
    }
}