/*Algoritmo simples de ordenação em ordem crescente, onde comparamos o v[0] com os seguintes,
trocando-o caso este seja menor que v[0]. Após issom repetimos com v[1], v[2] ... , v[n-1]*/

void selection_sort(int *v, int n) 
{
    int i;
    for(i = 0; i < n - 1; i++) 
    {
        int indice_menor = i;

        int k;

        for(k = i + 1; k < n; k++)
        {
            if(v[k] < v[indice_menor])
            {
                indice_menor= k;
            }
        }
        if (indice_menor != i) // Realizamos a troca apenas se o índice for diferente do selecionado.
        {
            int tmp = v[i];
            v[i] = v[indice_menor];
            v[indice_menor] = tmp;
        }
    }
}

/*Para ordenar em ordem decrescente, temos apenas que substituir if (v[k] < v[indice_menor]) por if (v[k] > v[indice_maior])*/

/* Tanto no melhor como no pior caso teremos que analisar todo o vetor, por isso a ordem de complexidade
deste algoritmo é O(n²).*/