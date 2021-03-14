#include <stdio.h>

void remover_palavra(int i, char frase[]) {
    int inicio=0, final, inicio_out, final_out, partida, cont = 0, indice = 1, tamanho = 0;
    while (frase[cont] != '\0'){
        tamanho++;
        if (frase[cont] == ' ' || frase[cont+1] == '\0'){ 
            if (frase[cont] == ' '  && (frase[cont-1]==',' || frase[cont-1] == ':')){
                final=cont-2;
            }
            else if (frase[cont] == ' '  && !(frase[cont-1]==',' || frase[cont-1] == ':')){
                final=cont-1;
            }
            else if (frase[cont+1] == '\0'  && frase[cont]=='.'){
                final=cont-1;
            }
            else if (frase[cont+1] == '\0'  && frase[cont]!='.'){
                final=cont;
            }
            if (indice==i){
                inicio_out=inicio;
                final_out=final;
            }
            indice++;
            inicio=cont+1;
        }
        cont++;
    }
    if (inicio_out == 0){
        partida = 0;
        final_out++;
    }
    else{
        partida = inicio_out -1;
    }
    for (cont = partida; cont < tamanho; cont++){
        frase[cont] = frase[final_out+1];
        final_out++;
    }
}

int main(){
    char frase[100] = "O problema é o seguinte: estamos apagando os dois pontos";
    remover_palavra(5, frase);
    printf("%s\n",frase);
    return 0;
}
