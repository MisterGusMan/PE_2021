#include <stdio.h>

int contafreq(int num, int digito) {
    int unidade, freq = 0;

    if (num == 0){
        return freq; // Após todas as iterações, quando num = 0.num, retornaremos apenas a frequência.
    }

//Como unidade e num são ints, suas partes decimais são descartadas.
//Assim, divisões por 10 resultam apenas na parte inteira, movendo a vírgula para a direita e descartando os decimais. 
//O resto da divisão por 10 resulta na "parte decimal", ou seja, a unidade removida do inteiro.

    else{
        unidade = num % 10;

        if (unidade == digito){
            freq++;
        }

        return freq + contafreq(num/10, digito);
        // freq assume o valor da iteração, somente na próxima se tornará 0, repetindo a soma 1+1+1 se unidade == digito,até num = 0.
    }
}


int main(){
    int res = contafreq(12343,3);
    printf("%d\n",res);
    return 0;
}