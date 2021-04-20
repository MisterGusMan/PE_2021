/*Podemos usar as operações em aquivos binários também, possibilitando o armazenamento de estruturas
alocadas na memória em um arquivo:

Usamos os comandos fwrite e fread para escrita e leitura de binários:

size_t fwrite(const void *ptr, size_tsize, size_tcount, FILE *stream);
*ptr = ponteiro para a região de memória (já alocada) que será escrita no arquivo;
size = tamanho de cada elemento;
count = quantidade de elementos;
*stream = ponteiro para arquivo aberto.

OBS: Para arquivos binários usamos os modos "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b".
*/

#include <stdio.h>
#include <stdlib.h>

struct disco_voador
{
    int cod;
    double velocidade;
};

void print_discos(struct disco_voador discos[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("Disco %d -> Código: %d | Velocidade: %.2lf m/s\n", i, discos[i].cod, discos[i].velocidade);
    }
}

int main() 
{
    /*Escrever arquivo binário que armazena a lista:

    struct disco_voador discos[3] = { {2, 4.5}, {6, 40.2}, {300, 1750.25} };
    
    FILE *arq = fopen("discos.bin", "wb");
    
    fwrite(discos, sizeof(struct disco_voador), 3, arq);
    
    fclose(arq);

    */

    struct disco_voador *discos = malloc(sizeof(struct disco_voador) * 3);

    FILE *arq = fopen("discos.bin", "rb");
    fread(discos, sizeof(struct disco_voador), 3, arq);
    fclose(arq);

    print_discos(discos, 3);
    free(discos);
    return 0;
}