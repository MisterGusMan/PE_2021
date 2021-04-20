/*Considere a estrutura a seguir para armazenar dados de um time de futebol:

struct TimeFutebol {
    char *nome;
    int pontos, gols, vitorias, derrotas, empates;
};

Escreva um programa que leia os dados de um time de futebol e armazene em uma estrutura struct TimeFutebol.

Após preencher os dados, chame a função imprimir e passe a estrutura preenchida. Essa função, que já está implementada no sistema de correção automática, irá imprimir os dados do dados_time de futebol.

Protótipo da função imprimir:

void imprimir(struct TimeFutebol time);*/

#include <stdio.h>

struct TimeFutebol {
    char *nome;
    int pontos, gols, vitorias, derrotas, empates;
};

void imprimir(struct TimeFutebol dados_time)
{
    printf("%s %d %d %d %d %d\n", dados_time.nome, dados_time.pontos, dados_time.gols, dados_time.vitorias, dados_time.derrotas,dados_time.empates);
}

int main() 
{
    struct TimeFutebol dados_time;

    dados_time.nome = malloc(sizeof(char) *20); // nome é um ponteiro, então temos que alocar memória para a variável.

    scanf("%s", dados_time.nome);
    scanf("%d", &dados_time.pontos);
    scanf("%d", &dados_time.gols);
    scanf("%d", &dados_time.vitorias);
    scanf("%d", &dados_time.derrotas);
    scanf("%d", &dados_time.empates);

    imprimir(dados_time);

    free(dados_time.nome);

    return 0;
}