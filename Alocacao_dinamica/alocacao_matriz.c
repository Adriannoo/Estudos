#include <stdio.h>
#include <stdlib.h>

int main() {
    const int n = 2;
    // Alocação de matrizes:
    // Para alocar precisa utilizar o conceito de ponteiro para ponteiro

    // int* - Permite criar um array de int
    // int** - Permite criar um array de int*

    // (int *) - Conversão mais forte, substitui o (void *)
    int *pointer = (int *) malloc(5 * sizeof(int)); // 5 inteiros

    int **quadrado; // 2 Dimensões

    int ***cubo; // 3 Dimensões

    quadrado = (int **) malloc(n * sizeof(int *));

    // Para cada posição do vetor, cria um novo vetor tipo int. Aloca um vetor de inteiros
    for (int i = 0; i < n; i++) {
        quadrado[i] = (int *) malloc(n * sizeof(int));

        for (int j = 0; j < n; j++) { // Le a matriz
            printf("Digite a posicao [%d][%d]: ", i, j);
            scanf("%d", &quadrado[i][j]);
        }
    }

    for (int i = 0; i < n; i++) { // Imprime a matriz
        for (int j = 0; j < n; j++) {
            printf("%d ", quadrado[i][j]);
        }
        printf("\n");
    }

    free(quadrado);
    free(pointer);
    return 0;
}