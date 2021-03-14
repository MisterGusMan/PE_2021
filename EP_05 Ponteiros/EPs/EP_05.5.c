#include <stdio.h>
#include <stdlib.h>

/*Algumas regras importantes para o cálculo da quantidade de linhas:

as palavras não podem ser separadas. Portanto, se não tiver espaço disponível para incluir uma palavra em uma linha, ela deverá ser incluída na próxima. Por exemplo, para o texto "texto teste" e largura de linha 8, a divisão seria em duas linhas "texto" e "teste" (não há espaço na primeira linha para incluir "texto teste". Se a largura de linha for 11, apenas uma linha é suficiente.
toda linha deve iniciar com uma letra, ou seja, nenhuma linha deve iniciar com o caractere espaço ou com pontuação (ponto, vírgula, etc). Se algum sinal de pontuação ficar exatamente após uma quebra de linha, a palavra que precede o sinal deve ser passada para a próxima linha, de forma que nenhuma linha inicie com pontuação. Por exemplo, para o texto "Neste teste, a texto possui pontuacao." e largura de linha 11, a divisão seria em cinco linhas: "Neste", "teste, a", "texto", "possui", "pontuacao."
um caractere espaço que fique exatamente após uma quebra de linha deve ser suprimido, de forma que a próxima linha inicie com uma palavra (e não com um caractere espaço). Por exemplo, para o texto "Texto para teste ABCD" e largura 10, a divisão seria em duas linhas: "Texto para" e "teste ABCD".*/

void conta_linhas(char texto[], int largura_linha, int* qtd_linhas) {
    int inicio = 0, cont = 0, tamanho, limite = 0, inicio2 = 0, k, pos;
    char aux[100];
    *qtd_linhas = 1;


    while (texto[cont] != '\0'){
        //if (limite==0 && texto[cont+1]=='\0'){
        //    *qtd_linhas += 1;
        //}

        if (texto[cont] == ' '){
            tamanho = cont + 1 - inicio;
            limite += tamanho;
            printf("limite = %d e inicio = %d :", limite,inicio);

            pos=0;
            for (k=inicio;k<inicio+tamanho;k++){
                aux[pos]=texto[k];
                pos++;
            }
            aux[pos]='\0';
            printf("%s\n",aux);

            inicio2 = inicio;
            inicio = cont + 1;
            //printf("Atualizei o inicio que é : %d\n",inicio);
            //printf("limite = %d | Inicio2 = %d | tamanho = %d | cont = %d\n", limite, inicio2, tamanho,cont);
            if (limite == largura_linha){ 
                *qtd_linhas += 1;
                printf("Aumentou uma linha\n");
                limite = 0;

                /*if (limite == largura_linha && texto[cont + 1] == '\0'){ // Não adicionamos linha se o tamanho da última palavra.
                        *qtd_linhas -= 1;
                }

                if (texto[cont - 1] == ',' && limite == largura_linha + 2){
                    *qtd_linhas += 1;
                    cont = inicio2 - 1;
                }*/

                /*if (limite - 1 == largura_linha){
                    limite = -1;
                }*/
            }
        }
        else if (limite > largura_linha){
            *qtd_linhas += 1;
            printf("Aumentou uma linha\n");
            limite = 0;
            cont=inicio2;
            printf("limite = %d | Inicio = %d | tamanho = %d | cont = %d\n", limite, inicio, tamanho,cont);
        }

    cont++;
    //printf("Cont=%d\n",cont);
    }
}

int main(){
    char texto[100] = "Este eh outro teste";
    int qtd;
    conta_linhas(texto, 5, &qtd);
    printf("%d\n",qtd);
    return 0;
}