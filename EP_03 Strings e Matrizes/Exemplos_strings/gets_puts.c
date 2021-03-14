#include <stdio.h>

int main(){
    printf("Insira um texto: ");

    char texto[20];
    gets(texto); // A função gets() "Get String" lê uma string e armazena na memória com o nome definido.
    puts(texto); // A função puts() "Put String" imprime a string definida junto com uma quebra de linha.

    printf("Digite um frase: ");

    char frase[6];
    fgets(frase, 6 , stdin); // È melhor utilizar fgets no lugar de gets, pois o fgets limita a quantidade de caracteres lida.
    puts(frase); // fgets(vetor_char, tamanho_da_variavel, standard input (leitura do teclado) )
// Este método retorna apenas 5 elementos do vetor, visto que o sexto é \0, representando o fim da string.
// fgets() é diferente de scanf(), pois o último para de ler a string quando encontra um espaço (elemento) vazio, enquannto fgets() não para.

    return 0;
}