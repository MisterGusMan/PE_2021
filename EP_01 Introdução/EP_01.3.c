#include <stdio.h>

int main(){ // Para retornar o menor valor, talvez seja possível usar o método min max do EP_01.1.
    int saida = 0, min = 1000;
    while (saida != 1){
        int operacao;
        scanf("%d",&operacao);
        if (operacao == 1){
            int a , b, res1;
            scanf("%d%d",&a,&b);
            res1 = a + b;
            printf("%d\n",res1);
            if (res1 < min){
                    min = res1;
                }
        }
        else if (operacao == 2) {
            int a , b, c, res2;
            scanf("%d%d%d",&a,&b,&c);
            res2 = a + b + c;
            printf("%d\n",res2);
            if (res2 < min){
                        min = res2;
                }
        }
        else if (operacao == 3) {
            int a , b, res3;
            scanf("%d%d",&a,&b);
            res3 = a * b;
            printf("%d\n",res3);
            if (res3 < min){
                        min = res3;
                }
        }
        else if (operacao == 0) {
            printf("%d\n",min);
            saida = 1;
        }
    }
    return 0;
}