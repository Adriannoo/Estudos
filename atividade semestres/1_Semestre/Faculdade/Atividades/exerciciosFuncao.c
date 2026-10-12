#include <stdio.h>

int soma(int n) {
    if(n == 0) {
        return 0;
    } 
    return n + soma(n - 1);
}

int somaImpares(int n) {
    if(n == 0) {
        return 0;
    }
    
    return (2*n-1) + somaImpares(n - 1);
}

int potencia(int x, int n) {
    if(n == 0) {
        return 1;
    } 
    return x * potencia(x, n - 1);
}

int main() {
    printf("A soma e: %d\n", soma(5));
    
    printf("A soma dos impares e: %d\n", somaImpares(7));
    
    printf("A potencia de 3^4 e: %d\n", potencia(3, 4));

    return 0;
}
