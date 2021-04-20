#include <stdio.h>
#include <math.h>

struct ponto
{
    int x, y;
};

typedef struct ponto t_ponto;

double distancia(t_ponto p1, t_ponto p2) 
{
    return /*sqrt*/((p1.x -p2.x) * (p1.x -p2.x) + (p1.y -p2.y) * (p1.y -p2.y));
}

int main() 
{
    t_ponto p1 = {3, 4}, p2 = {1, 2}; // Podemos inicializar os dados da struct assim como vetores.

    printf("%.2lf\n", distancia(p1, p2));

    return 0;
}