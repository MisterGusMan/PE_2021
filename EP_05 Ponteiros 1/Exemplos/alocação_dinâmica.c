// Para alocar memória dinamicamente, usamos malloc(): void* malloc(size_t size).
// calloc() aloca a memória e inicializa o bloco com zeros: void* calloc(size_t n_items, size_tsize).
// Para liberar a memória, usamos free(): void free (void* ptr).
// As três funções estão na biblioteca stdlib.h

#include <stdio.h>
#include <stdlib.h>

int conta_a(char texto[], int max){
    int *i = malloc(sizeof(int));
    int c;
    for (*i = 0; *i < max; (*i)++){
        if (texto[*i] == 0){ // Queremos o valor do inteiro no endereço i, para isso usamos o asterisco.
            return c;
        if ((texto[*i] == 'A') || (texto[*i] == 'a')){ 
            c++;
            }
        }
    }
    free(i);
    return c;
}

int main(){
    char texto[50] = "Aaaaa";
    int c = conta_a(texto,50);
    printf("%d\n",c);
    

    int *n;
    n = malloc(sizeof(int));

    if (n != NULL){ // Não há garantia que a memória seja alocada. Em caso de erro, é retornado o ponteiro NULL (internamente tem o valor 0)
    *n = 507;
    printf("%d\n", *n);
    free(n); // Sempre liberar a memória alocada após o uso.
    }
    else{printf("Erro na alocação.\n");}
    return 0;
}

//Para checar vazamentos de memória, utilizar a ferramenta Valgrind.
