/*Uma empresa está desenvolvendo um programa para cadastro de modelos de discos voadores. 
Cada modelo de disco é armazenado na estrututra DiscoVoador definida a seguir. 
A estrutura possui o modelo do disco, velocidade (em km/h), aceleração (em km/s2) e autonomia 
(em anos-luz).

Considere a estrutura DiscoVoador definida a seguir:

struct DiscoVoador {
    char modelo[50];
    int velocidade, aceleracao, autonomia;
};

Implemente a função insere_disco, que recebe um modelo de disco voador (parâmetro novo_disco), 
um vetor de discos (parâmetro discos) e a quantidade de modelos de discos. 
O vetor inicial já está ordenado, com os modelos armazenados nas primeiras n_discos posições, 
mas sem o novo disco). O vetor discos tem tamanho n_discos+1, portanto, há espaço para inserir
um novo modelo de disco voador. A função deve inserir o novo modelo de disco no vetor passado, 
mantendo a ordenação.

Protótipo da função:

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos);

Critério para ordenação: A ordenação deve considerar os campos velocidade, aceleracao e autonomia, 
nesta ordem de prioridade (todos em ordem crescente). Por exemplo, um disco com velocidade=2 deve 
vir antes de um disco com velocidade=10. Outro exemplo, se os discos A e B tem velocidades iguais, 
mas o disco A tem aceleracao=40 e o disco B tem aceleracao=20, o disco B deve ficar antes na ordenação. 
Se ocorrer empate nos campos velocidade e aceleracao, o desempate será pelo campo autonomia 
(quem tiver a menor autonomia, deve ficar antes na ordenação).*/

struct DiscoVoador 
{
    char modelo[50];
    int velocidade, aceleracao, autonomia;
};



#include <stdio.h>

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos)
{
    discos[n_discos] = novo_disco; // Adicionando o novo disco no vetor discos[];

    int cont = 0;

    struct DiscoVoador temp; // Definindo uma estrutura temporária para modificar todos os valores do vetor discos;

    while (cont <= n_discos) // Temos que incluir <= para não deixar de contar o novo disco incluído;
    {
        for (int i = 0; i <= cont; i++)
        {
            for (int j = (i + 1); j <= cont; ++j)
            {
                // Ordenação dos discos pelo critério velocidade -> aceleração -> autonomia;
                if ((discos[i].velocidade > discos[j].velocidade) || ((discos[i].velocidade == discos[j].velocidade && 
                discos[i].aceleracao > discos[j].aceleracao)) || (discos[i].velocidade == discos[j].velocidade && 
                discos[i].aceleracao == discos[j].aceleracao && discos[i].autonomia > discos[j].autonomia))
                {
                temp = discos[i];
                discos[i] = discos[j];
                discos[j] = temp;
                }
            }
        }
        cont++;
    }

    for (int i = 0; i < n_discos + 1; i++)
    {
        printf("%s %d %d %d\n", discos[i].modelo, discos[i].velocidade, discos[i].aceleracao, discos[i].autonomia);
    }
}

int main()
{
    struct DiscoVoador v[5] = {{"disc1",50, 5, 2}, {"disc2", 90, 2, 10}, {"disc3", 90, 8, 5}, {"disc4", 95, 1, 1}};
    struct DiscoVoador disc = {"novo_disc", 70,10,10};

    insere_disco(disc, v, 4);
    
    return 0;
}

