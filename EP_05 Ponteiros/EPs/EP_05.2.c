#include <stdio.h>

void ordena(int *a, int *b, int *c) {
    int i, j, temp, v[3] = {*a, *b, *c};

    for (i = 0; i < 3; i++){
        for (j = i + 1; j < 3; ++j){
            if (v[i] > v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    *a = v[0]; *b = v[1]; *c = v[2];
}

int main(){ 
    int a, b, c;
    int *pta = &a, *ptb = &b, *ptc = &c;
    scanf("%d %d %d", pta, ptb, ptc);

    ordena(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}