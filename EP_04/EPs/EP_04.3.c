

long superfatorial(int n) { // Long = 32 bits de memória | Operador : %li ou %ld.
    int fat = 1, cont, cont_fat = 0;
    /*int fatorial(int n){ // Pesquisar maneira de resolver sem sub-função
        if (n == 1){
            return 1;
        }
        else{
            return n * fatorial(n-1);
        }
    }*/

    for (cont = 1 ; cont < n; cont++){ // Solução sem função fatorial()
        fat *= (n - cont_fat);
        cont_fat++;
    } 
    
        if (n == 1){
            return 1;
    }
        else{
            return fat * (superfatorial(n-1));
    }
}

int main(){
    long res = superfatorial(4);
    printf("%li\n", res);
    return 0;
}