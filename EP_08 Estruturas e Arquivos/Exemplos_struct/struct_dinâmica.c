/*Para acessar membros a partir de um ponteiro para uma estrutura, temos duas opções:
1. Deferenciar ponteiro e acessar com o ponto: t_aluno *a1 = malloc(sizeof(t_aluno)); (*a1).ra = 123; 
2. Utilizar o operador "->" : t_aluno *a1 = malloc(sizeof(t_aluno)); a1->ra = 123;*/


#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina t_disciplina;
struct disciplina
{
    int cod;
    char *nome;
    int creditos;
};

int main()
{
    t_disciplina *pe = malloc(sizeof(t_disciplina));
    pe -> cod = 555;
    pe -> nome = "Programação";
    pe -> creditos = 4;

    printf("cod = %d | nome= %s | créditos = %d\n", pe -> cod, pe -> nome, pe -> creditos);
    
    free(pe);
    return 0;
}