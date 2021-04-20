#include <stdio.h>

struct disciplina
{
    int cod;
    char *nome;
    int creditos;
    struct disciplina *requisite
};
typedef struct disciplina t_disciplina;

//Função para criar uma disciplina com os valores passados pelos parâmetros:
t_disciplina cria_disciplina(int cod, char *nome, int cred) 
{
    t_disciplina disc;
    disc.cod = cod;
    disc.nome = nome;
    disc.creditos = cred;
    disc.requisite = NULL;
    return disc;
}

//Função para criar um ponteiro para disciplina com os valores passados pelos parâmetros:
t_disciplina *cria_disciplina_ptr(int cod, char *nome, int cred) 
{
    t_disciplina *disc = malloc(sizeof(t_disciplina));
    disc -> cod = cod;
    disc -> nome = nome;
    disc -> creditos = cred;
    disc -> requisite = NULL;
    return disc;
}

int main()
{
    char nome[30] = "Programação Estruturada";
    t_disciplina pe = cria_disciplina(555, nome, 4);
    printf("código = %d | nome = %s | créditos = %d\n", pe.cod, pe.nome, pe.creditos);

    char nome2[30] = "Processamento da Informação";
    t_disciplina *pi = cria_disciplina_ptr(444, nome2, 4);
    printf("código = %d | nome = %s | créditos = %d\n", pi -> cod, pi -> nome, pi -> creditos);
    free(pi);

    return 0;
}
