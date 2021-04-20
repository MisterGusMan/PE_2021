/*Estruturas são um tipo de estrutura que permite a combinação de vários tipos de dados diferentes.
Ex: struct aluno{int ra; char nome[100]; char curso[20]}; --> similar a um dict em python.
Uma vez que uma struct foi declarada, podemos ligar outra com a estrutura inicial:
struct aluno; --> struct aluno aluno1, aluno2, ...;
Para acessar um tipo de dado dentro de um struct usamos nome_struct.nome_dado*/

#include <stdio.h>

struct aluno 
{
    int ra; 
    char nome[100]; 
    char curso[20];
};

// Usando o comando typedef podemos criar um novo nome para o tipo de dados, facilitando o acesso:
typedef struct aluno t_aluno;


int main()
{
    t_aluno p; // A estrutura struct aluno agora está definida por t_aluno.
    
    scanf("%d",&p.ra);
    scanf("%s",p.nome);
    scanf("%s",p.curso);

    printf("aluno p: Nome: %s, RA:%d, Curso: %s\n", p.nome, p.ra, p.curso);

    return 0;
}