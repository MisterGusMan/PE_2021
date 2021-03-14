#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
    int cont, i, j, i_saida = 0, j_saida = 0;
                for(i = 1; i < n; i++){
                    for(j = 0; j < n; j++){
                        if(c != j){
                            m_saida[i_saida][j_saida] = m_entrada[i][j];
                            j_saida++;
                        }
                    }
                    i_saida++;
                    j_saida = 0;
                }
}

float calcula_determinante(int n, float m_entrada[n][n]) {
    float det = 0, m_saida[n][n];
    int cont;

    if (n == 1){
        return m_entrada[0][0];
    }
    else{
        float neg;
        for (cont = 0; cont < n; cont++){
            remove_primeira_linha_e_coluna_c(n,m_entrada,m_saida,cont);
            if (cont % 2 == 0){
                    neg = m_entrada[0][cont];
                } 
                else{neg = -m_entrada[0][cont];} 
                det += neg * calcula_determinante(n - 1, m_saida);
            }
        }
    return det;
}

int main() {
    int n;
    scanf("%d",&n);

    int i, j;
    float matriz[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%f", &matriz[i][j]); // float (%f) != double (%lf)
        }
    }

    printf("%.2f\n", calcula_determinante(n,matriz));

    return 0;
}
