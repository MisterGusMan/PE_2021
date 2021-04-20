/*Problema de busca: dados um vetorve um valor x, verificar se o elemento x está em v. 
Se estiver, retornar o índice ida posiçãode xemv. Caso contrário, retorne -1

Busca linear (ou sequencial):
Nessa estratégia de busca, verifica-se todos os elementos de um vetor para verificar se o elemento xestá em v.*/

int busca_linear(int *v, int n, int x)
{
    int i;
    for (i = 0; i < n; i++) // Percorre vetor;
    {
        if (v[i] == x) // Compara cada elemento com x.
        {
            return i;
        }
    }
    return -1;
}

int busca_linear2(int *v, int n, int x) 
{
    int i, indice_encontrado = -1;
    for (i = 0; i < n && indice_encontrado== -1; i++) // Percorre vetor;
    {
        if(v[i] == x) // Compara cada elemento com x.
        {
            indice_encontrado= i;
        }
    }
    return indice_encontrado;}

// No melhor caso, teremos apenas 1 comparação (x = v[0]). 
// No pior caso, teremos n comparações (x = v[n-1] || x não presente em v) 