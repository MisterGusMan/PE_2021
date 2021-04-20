#include <stdio.h>

typedef struct aluno t_aluno;
struct aluno
{
    int ra; 
    double nota;
};

int main() 
{
    t_aluno alunos[3];

    int i;
    for (i = 0; i < 3; i++) 
    {
        alunos[i].ra = i + 1; alunos[i].nota = i * i;
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("RA = %d | Nota = %.1lf\n", alunos[i].ra, alunos[i].nota);
    }
    
    return 0;
}