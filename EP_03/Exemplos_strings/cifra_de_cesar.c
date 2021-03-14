#include <stdio.h>
// A cifra de César é utilizada movendo todas as letras do texto n posições adiante no alfabeto, definida pela chave.

void encriptar(char texto_secreto[], int chave){
    int cont = 0;
    while (texto_secreto[cont] != '\0'){
        if (texto_secreto[cont] != ' '){
            texto_secreto[cont] += chave; // IMPORTANTE: Letras são codificadas como números pela memória, assim podemos tratá-las como tal.
        }
        cont++;
    }

}

void decriptar(char texto_encriptado[], int chave){
    int cont = 0;
    while (texto_encriptado[cont] != '\0'){
        if (texto_encriptado[cont] != ' '){
            texto_encriptado[cont] -= chave; // IMPORTANTE: Letras são codificadas como números pela memória, assim podemos tratá-las como tal.
        }
        cont++;
    }
}

int main(){
    char frase[50];
    printf("Digite a frase: ");
    fgets(frase,50,stdin);
    int chave;
    printf("Digite a chave: ");
    scanf("%d", &chave);

    encriptar(frase,chave);
    printf("Frase encriptada: %s\n",frase);

    decriptar(frase,chave);
    printf("Frase decriptada: %s\n",frase);
    return 0;
}