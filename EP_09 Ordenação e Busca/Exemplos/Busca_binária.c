/*A busca binária é o algoritmo de busca mais eficiente, mas funciona apenas em vetores ordenados.
A busca é realizada dividindo o vetor até finalizar a busca:*/

int busca_binaria(int *v, int n, int x) 
{
    int esq= 0, dir= n-1;
    while (esq <= dir) 
    {
        int meio = (esq+ dir) / 2;

        if (v[meio] == x) return meio;

        else if (v[meio] < x) 
        {
            esq = meio + 1;
        }

        else
        {
            dir= meio-1;
        }
    }
    return -1;
}
/* Como a cada iteração reduzimos o comprimento do vetor pela metade, temos um algoritmo de busca
de ordem O(log(n)) (Após k iterações, resta apenas um elemento: 
(n/2^(k-1)) = 1 -> k - 1 = log2(n) -> k = log2(n) + 1)*/