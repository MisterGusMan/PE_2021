#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Um buffer overflow (ou transbordamento de dados) acontece quando um programa informático excede 
o uso de memória assignado a ele pelo sistema operacional, passando então a escrever no setor de
memória contíguo. Essas falhas são utilizadas por cibercriminosos para executar códigos arbitrários 
em um computador, o que possibilita muitas vezes aos atacantes controlar o PC. */

void funcao_protegida() {
    // Funcão protegida pelo sistema que só pode ser executada por usuário autorizado.
    printf("[FUNCÂO_PROTEGIDA]\n");
}

int main(void) {
    char *senha = malloc(sizeof(char) * 5);
    int *ok = malloc(sizeof(int));
    *ok = 0;

    printf("senha = %p | ok = %p\n", senha, ok);
    printf("Digite a senha: \n");
    gets(senha); // O comando gets() se torna imprevisível para inputs > 5, sendo preferível usar fgets(senha, 5, stdin).

    if(strcmp(senha, "1234")) { // Compara as duas strings inseridas e retorna 0 se são strings iguais..
        printf("Senha ERRADA !\n");
        } 
    else{printf("Senha CORRETA !\n");
    *ok = 1;
    }

    /*Para uma senha grande o suficiente, o endereço de memória alocado para *ok é alterado para um valor != 0.
    Desta forma, a função protegida é chamada mesmo com a senha errada.*/

    if(*ok){funcao_protegida();}
    
    free(senha);free(ok);

    return 0;
}