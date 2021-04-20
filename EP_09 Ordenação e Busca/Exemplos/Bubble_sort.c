/*Ideia geral:
•Inicia no primeiro elemento e compara os elementos dois a dois;
•Se elemento[k] > elemento[k+1], troca os dois elementos;
•Repete o processo (n – 1) vezes. Contudo, não é necessário ir até o fim do vetor nas demais iterações:
    •O processo aplicado garante que o maior elemento estará na última posição;
    •Na segunda iteração, o segundo maior elemento estará na penúltima posição, e assim por diante.*/

void bubblesort(int *v, int n) 
{
    int i, k;
    for(i = 0; i < n - 1; i++)
    {
        for(k = 0; k < (n - 1) - i; k++) // A cada iteração, podemos descontar um elemento pelo fato de sabermos que ele é o maior do vetor;
        {
            if(v[k] > v[k+1]) // Troca de elementos consecutivos se v[k] > v[k + 1].
            {
                int tmp = v[k];
                v[k] = v[k + 1];
                v[k + 1] = tmp;
            }
        }
    }
}
// Para ordenar decrescente: v[k] < v[k + 1].

// Assim como no selection sort, temos complexidade O(n²).

/*Entretanto, se estivessemos lidando com um vetor já ordenado a partir de um elemento, poderiamos otimizar
o algoritmo para não percorrer o vetor inteiro: */

void bubblesort2(int *v, int n) 
{
    int i, k, trocou = 1; // Bandeira para checar se a troca foi realizada, indicando um vetor já ordenado;
    for(i = 0; i < n - 1 && trocou; i++)
    {
        trocou = 0;
        for(k = 0; k < (n - 1) - i; k++) 
        {
            if(v[k] > v[k+1]) 
            {
                int tmp = v[k];
                v[k] = v[k + 1];
                v[k + 1] = tmp;
                trocou = 1;
            }
        }
    }
}

// Desta forma, reduzimos a complexidade no melhor caso para O(n).