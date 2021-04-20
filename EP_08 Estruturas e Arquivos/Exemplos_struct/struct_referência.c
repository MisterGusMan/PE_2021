// Podemos fazer com que uma estrutura refira a si mesma utilizando ponteiros:

#include <stdio.h>
#include <stdlib.h>

struct disciplina
{
    int cod;
    char *nome;
    int creditos;
    struct disciplina *requisito;
};

int main() 
{
    struct disciplina pe;
    pe.cod = 555;
    pe.nome = "Programacao";
    pe.creditos = 4;

    pe.requisito = malloc(sizeof(struct disciplina));
    pe.requisito -> cod = 444;
    pe.requisito -> nome = "Informacao";
    pe.requisito -> creditos = 4;
    pe.requisito -> requisito = NULL;

    printf("Req: cod = %d | nome = %s | cred = %d\n", pe.requisito -> cod, pe.requisito -> nome, pe.requisito -> creditos);
    
    free(pe.requisito);
    return 0;
}