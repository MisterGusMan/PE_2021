#include <stdio.h>
#include <stdlib.h>

/*Cria uma função que procura um trecho de texto na frase e cria uma nova string com todo o conteúdo 
da frase a partir do trecho indicado. Por exemplo, para frase="Frase de teste." e trecho="de", a 
função deve criar uma nova string "de teste.". 
A função deve retornar NULL se não encontrar o trecho na frase. 
A função deve retornar uma nova string e não deve alterar o vetor com a frase passada para a função.*/

char *avanca_palavra(char *frase, char *trecho) {
    int cont = 0, tamanho_frase = 0, tamanho_trecho = 0, inicio, i = 0, j = 0, k = 0, flag = 0;

    while (*(trecho + k) != '\0'){ // Definindo o tamanho do trecho;
        tamanho_trecho++;
        k++;
    }

    while (*(frase + cont) != '\0'){

        if (*(frase + cont) == *(trecho + i)){
            i++; // Incrementando o contador se o elemento for igual na frase e no trecho; 
            if (*(frase + (cont + 1)) != *(trecho + i)){
                i = 0; // Resetando a contagem se o próximo elemento não for igaul nos dois;
            }
        }

        if (i == (tamanho_trecho - 1)){ // Condição para que o contador seja igual ao tamanho do trecho, definindo que encontramos ele inteiro na frase;
            flag = 1; // Marcador para definir o retorno no fim da função;
            inicio = (cont + 1) - i; // Definição do início do trecho na frase;
        }

        tamanho_frase++; // Definindo o tamanho da frase;
        cont++;
    }
//printf("%d %d %d\n",inicio, tamanho_frase, tamanho_trecho);
//printf("%d\n",tamanho_frase - inicio);

    char *frase_final = malloc(tamanho_frase - inicio); 
    // Alocação do vetor retornado que vai desde o primeiro elemento do trecho na frase até seu final + 1;
    // Ambos os tamanhos não consideram o '\0' no final, então temos que incluir + 1;

    for (j = inicio; j < tamanho_frase; j++){ // Estrtura para definir a frase final;
        *(frase_final + (j - inicio)) = *(frase + j);
        //printf("j = %d\n",j - inicio);
        // Como j > 0, temos que definir (j - inicio) para começar a contagem no primeiro elemento da 
        // frase final, adicionando letras a partir do inicio do trecho na frase;
    }
    //printf("null = %d\n",j - inicio);

    *(frase_final + (j - inicio)) = '\0'; // Adição do termo nulo para completar a frase final;

    if (flag == 0){
    free(frase_final); // Primeiro liberamos a memória alocada para depois alterar o ponteiro retornado;
    frase_final = NULL;} // Retornamos NULL se não encontrarmos o trecho na frase.
    
    return frase_final;

}

int main(){
    char frase[] = {"Qualquer frase aleatoria eh valida"};
    char trecho[] = {"valida nao vai achar"};

    char *frase2 = avanca_palavra(frase,trecho);

    if (frase2 != NULL){
        printf("%s\n",frase2);
        }
    else{
        printf("NULL\n");
    }

    free(frase2);
    return 0;
}