/*Para escrita/leitura com arquivos, usamos algumas funções semelhantes àquelas que vimos para 
escrita/leitura no terminal: fputc/fgetc | fputs/fgets | fprintf/fscanf 

IMPORTANTE:
Não execute operações de escrita e leitura intercaladas sem antes reposicionar o fluxo(stream);
Uma forma de lidar com esse problema é fechando o arquivo e abrindo novamente:

FILE *arquivo = NULL; arquivo= fopen("teste.txt", "r"); 
(Leitura)
fclose(arquivo);
arquivo = fopen("teste.txt", “a");
(Escrita)
fclose(arquivo);

Nesse caso não há necessidade de usar um modo escrita+leitura como o “a+”.

Outra maneira de lidar com esse problema é usar o fseek() para reposicionar o fluxo:

FILE *arquivo= NULL; arquivo = fopen("teste.txt", "a+");
(Leitura)
fseek(arquivo, 0, SEEK_SET);
(Escrita)
fclose(arquivo)

*/

#include <stdio.h>

int main() 
{
    FILE *arquivo = NULL;
    arquivo = fopen("teste.txt", "r"); 
    // Para o modo "w", o input do programa irá zerar o arquivo selecionado antes de escrever.
    // Se definirmos modo "a", o input do programa será escrito no fim do arquivo, não alterando seu conteúdo original.

    //Para a leitura de arquivos, O fscanf("%s", texto) para de ler a string quando encontra um caracter eespaço, mas o fgetsnão:

    char texto[100];
    
    fgets(texto, 100, arquivo);
    printf("%s", texto);

    fgets(texto, 100, arquivo); // Os textos do arquivo são separados, requerindo dois fgets() para acessá-los.
    printf("%s", texto);

    fclose(arquivo);
    
    return 0;
}