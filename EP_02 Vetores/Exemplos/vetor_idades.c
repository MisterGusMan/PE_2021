#include <stdio.h> 
int main(){
    int idade[10];
    int soma=0, i;
    for (i = 0 ; i < 10; i++){
        scanf("%d",&idade[i]);
        soma += idade[i];
    }
    double media = soma/10.0;
    int acima_media = 0;
    for (i=0;i<10;i++){
        if (idade[i] > media){
            acima_media++;
        }
    }
    printf("%d\n",acima_media);
    return 0;
}