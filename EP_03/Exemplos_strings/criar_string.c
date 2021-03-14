#include <stdio.h>

int main(){
    char nome[50] = "Prof. Paulo"; // C não possui tipo string, então representamos elas com vetores de caracteres.
    printf("%s\n", nome); // %s é o formatador para retornar tipo char.

    char universidade[50];
    universidade[0] = 'U'; // Enquanto usamos aspas " " para deifinir frases, strings de um único caracter são definidas por ' '
    universidade[1] = 'F';
    universidade[2] = 'A';
    universidade[3] = 'B';
    universidade[4] = 'C';
    universidade[5] = "\0"; // \0 é o terminador nulo, usado para representar o fim de uma string.
    printf("%s\n", universidade);
    return 0;
}