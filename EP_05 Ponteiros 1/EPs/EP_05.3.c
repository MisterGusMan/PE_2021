#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio){
    int cont; // Inicializando soma como o primeiro valor do vetor;
    *soma = vetor[0]; *min = vetor[0]; *max = vetor[0]; // Inicializando os ponteiros com o primeiro valor do vetor;

    for (cont = 1; cont < n; cont++){ // Como já definimos soma = v[0], devemos começar em v[1].
        *soma += vetor[cont];
        if (vetor[cont] < *min){
            *min = vetor[cont];}
        if (vetor[cont] > *max){
            *max = vetor[cont];}
        }
        
        *media = *soma / ((double)n); // Definimos qtd = double para não descartar a parte decimal da divisão.

        double soma_desvio = 0; // Como o dividendo já é um double, não precisamos definir qtd como double.
        for(cont = 0; cont < n; cont++){
            soma_desvio = soma_desvio + pow(vetor[cont] - *media,2);  // Pow(x,y) = x**y.
        }
        *desvio = sqrt(soma_desvio / n); // Função sqrt incluída em math.h (Não funciona no vscode, usar gcc -lm)
}

int main(){
    int vetor[10] = {5, 5, 5, 5, 5, 0, 0, 0, 0, 0};
    int *max, *min, *soma;
    double *media, *desvio;

    max = malloc(sizeof(int)); // Alocando as variáveis dinâmicamente.
    min = malloc(sizeof(int));
    soma = malloc(sizeof(int));
    media = malloc(sizeof(double));
    desvio = malloc(sizeof(double));

    estatisticas_vetor(vetor, 10, min, max, soma, media, desvio); // Como já alocamos a memória das variáveis, não precisamos definir o endereço (&) delas.
    printf("Menor = %d | Maior = %d | Soma = %d | Media = %.2lf | Desvio = %.2lf\n", *min, *max,*soma, *media, *desvio);

    free(max); // Sempre liberar a memória usada após o término para evitar vazamentos.
    free(min);
    free(soma);
    free(media);
    free(desvio);

    return 0;
}