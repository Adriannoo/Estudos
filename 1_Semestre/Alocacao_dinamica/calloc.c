#include <stdio.h>
#include <stdlib.h>

// char: 1 byte, int: 4 bytes, float: 4 bytes, double: 8 bytes

#define MAX 100

int main(){
    // Calloc - Serve para alocar memoria durante a execução do programa. Retorna ponteiro inicio do espaco.
    // void* calloc(unsigned int num, unsigned int size); // Quantas posições, e qual o tamanho de cada posição

    /*
    int *array = (int*) calloc(50, sizeof(int));
    char *string = (char*) calloc(200, sizeof(char));
    */

    int *ponteiro = (int *) calloc(5, sizeof(int)); // 5 inteiros

    int *pointer1 = (int *) malloc(5 * sizeof(int)); // 5 inteiros
    int *pointer2 = (int *) calloc(5  * sizeof(int), 10); // 5 inteiros, 10 posicoes ( 5 * 10


    if (ponteiro == NULL || pointer1 == NULL || pointer2 == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("pointer 1: %d\n", pointer1[i]); // Malloc: Deixa valor random na memoria
    }

    for (int i = 0; i < 5; i++) {
        printf("pointer 2: %d\n", pointer2[i]); // Calloc: Zera a memoria
    }


    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &ponteiro[i]);
        getchar();
    }


    for (int i = 0; i < 5; i++) {
        printf("%d ", ponteiro[i]);
    }

    free(ponteiro);
    free(pointer1);
    free(pointer2);
    return 0;
}