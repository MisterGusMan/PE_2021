#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calcula_valores(int v[], int qtd, int *menor, int *maior, double *media, double *desvio){
    int soma = v[0], cont; // Inicializando soma como o primeiro valor do vetor;
    *menor = v[0]; 
    *maior = v[0]; // Inicializando os ponteiros com o primeiro valor do vetor;

    for (cont = 1; cont < qtd; cont++){ // Como já definimos soma = v[0], devemos começar em v[1].
        soma += v[cont];
        if (v[cont] < *menor){
            *menor = v[cont];}
        if (v[cont] > *maior){
            *maior = v[cont];}
        }
        
        *media = soma / ((double)qtd); // Definimos qtd = double para não descartar a parte decimal da divisão.

        double soma_desvio = 0; // Como o dividendo já é um double, não precisamos definir qtd como double.
        for(cont = 0; cont < qtd; cont++){
            soma_desvio = soma_desvio + pow(v[cont] - *media,2);  // Pow(x,y) = x**y.
        }
        *desvio = sqrt(soma_desvio / qtd); // Função sqrt incluída em math.h (Não funciona no vscode, usar gcc -lm)
}

int main(){
    int vetor[5] = {1,2,3,4,5};
    int *max, *min;
    double *media, *desvio;

    max = malloc(sizeof(int)); // Alocando as variáveis dinâmicamente.
    min = malloc(sizeof(int));
    media = malloc(sizeof(double));
    desvio = malloc(sizeof(double));

    calcula_valores(vetor, 5, min, max, media, desvio); // Como já alocamos a memória das variáveis, não precisamos definir o endereço (&) delas.
    printf("Menor = %d | Maior = %d | Media = %.2lf | Desvio = %.2lf\n", *min, *max, *media, *desvio);

    free(max); // Sempre liberar a memória usada após o término para evitar vazamentos.
    free(min);
    free(media);
    free(desvio);

    return 0;
}