/*Para acessar arquivos em C, usamos os comandos fopen (abrir arquivo) e fclose (fechar arquivo):

fopen: FILE* fopen(const char *filename, const char *mode);

Modos (*mode):
r: Somente leitura. | w: Escrita. Primeiro zera o arquivo. | a: Escrita no final do arquivo.|
r+: Leitura e escrita. Aponta para início do arquivo. | w+: Leitura e escrita. Primeiro zera o arquivo.|
a+: Leitura e escrita. Leitura a partir do início e escrita no final do arquivo.
OBS: Para arquivos binários usamos os modos "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b".

fclose: int fclose(FILE *fp);*/

#include <stdio.h>

int main() 
{
    FILE *arquivo = NULL;

    arquivo= fopen("teste.txt", "w");

    // Uso do arquivo 

    fclose(arquivo);
    
    return 0;
}