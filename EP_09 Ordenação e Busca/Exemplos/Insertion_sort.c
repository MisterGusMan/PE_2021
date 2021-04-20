/*Ideia geral:
•Inicia com subvetor de um elemento(primeiro elemento do vetor) – este seráo subvetor ordenado;
•Depois avalia o próximo elemento e o insere na posição correta no subvetor ordenado; Agora o subvetor ordenadotem dois elementos;
•Esse processo é repetido, inserindo o próximo elemento no subvetor ordenado até que o subvetor sejao vetor completo*/

void insertion_sort(int *v, int n) 
{
    int i, k;
    for(i = 1; i < n; i++) 
    {
        int item_atual= v[i]; // Guarda elemento atualmente selecionado;

        int indice_para_inserir = i; // Define índice para inserção;

        for(k = i -1; k >= 0 && item_atual< v[k]; k--) // Deslocamos APENAS até encontrar a posição certa para manter o subvetor ordenado;
        {
            v[k+1] = v[k]; // Deslocando elementos para a direita;
            indice_para_inserir--;
        }

        v[indice_para_inserir] = item_atual; // Inserindo o elemento atual no subvetor ordenado.
    }
}

// Ordenação decrescente; item_atual > v[k]. 

// Melhor caso: O(n) | Pior caso: O(n²). 