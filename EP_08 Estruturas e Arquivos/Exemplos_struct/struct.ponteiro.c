#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int *ra; char *nome; double *nota;
};
typedef struct aluno t_aluno;

int main() 
{
    t_aluno a1;   
    a1.ra = malloc(sizeof(int));
    a1.nome = malloc(sizeof(char) * 100);
    a1.nota = malloc(sizeof(double));

    scanf("%d", a1.ra);
    scanf("%s", a1.nome);
    scanf("%lf", a1.nota);
    printf("RA = %d | Nome = %s | Nota = %.2lf\n",*a1.ra, a1.nome, *a1.nota);

    free(a1.ra); free(a1.nome);free(a1.nota);

    return 0;
}