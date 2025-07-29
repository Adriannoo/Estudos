#include <stdio.h>
int swap(int *pt1, int *pt2) {
    return *pt1 = *pt2;
}
int main() {
    int a = 5, b = 8, troca = 0;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("%d \n", (*ptr2 = *ptr1));

    troca = swap(ptr1, ptr2);
    printf("%d \n", troca);
}

/* // ATIVIDADE 2 SOMA PONTEIRO
int soma(const int* pta, const int* ptb) {
    return *pta + *ptb;
}

int main() {
    int a = 5, b = 7, somaNums = 0;
    int *pt_a = &a, *pt_b = &b;

    printf("%d, %d, %d, %d, %p, %p", a, b, *pt_a, *pt_b, pt_a, pt_b);

    somaNums = soma(pt_a, pt_b);

    printf("\n%d", somaNums);

    return 0;
}
*/

/* // ATIVIDADE 3 PONTEIRO COM CHAR
int maiorNum(const int *valor) {
    int maior = 0;

    for (int i = 0 ; i < 5; i++) {
        if (*(valor + i) > maior) {
            maior = *(valor + i);
        }
    }
    return maior;
}

int main() {
    int vet[] = {1, 2, 8, 4, 5};

    int maior = maiorNum(vet);
    int *ponteiroMaior = &maior;

    printf("\n%d", *ponteiroMaior); // Correto

    return 0;
}