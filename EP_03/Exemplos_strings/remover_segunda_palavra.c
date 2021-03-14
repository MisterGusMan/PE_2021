#include <stdio.h>

void remover_segunda_palavra(char frase[], int tamanho){
    int cont = 0;
    while (frase[cont] != ' '){ // Laço while para determinar cada palavra na frase.
        cont++;
    }
    int inicio = cont; // Definindo o início da contagem como o primeiro elemento espaço " ", presente no início da segunda palavra.
    printf("inicio = %d\n",inicio);
    cont++; //Adicionando 1 a contagem para sair do primeiro espaço e chegar na segunda palavra.

    while (frase[cont] != ' '){ 
        cont++;
    }
    int final = cont; // Definindo o final da contagem como o segundo elemento espaço " ", presente no final da segunda palavra.
    printf("final = %d\n",final);

    for (cont = inicio; cont < tamanho; cont++){
        frase[cont] = frase[final]; // Removendo a segunda palavra da frase, definindo 
        final++;
    }
}

int tamanho(char frase[]){ // Função auxiliar para determinar o tamanho da string.
    int tamanho = 0;
    while (frase[tamanho] != '\0'){
        tamanho++;
    }
    return tamanho;
}

int main(){
    char fraseA[50];
    printf("Digite a frase A: ");
    gets(fraseA);
    remover_segunda_palavra(fraseA,tamanho(fraseA));
    printf("Nova Frase: %s\n",fraseA);
    return 0;
}