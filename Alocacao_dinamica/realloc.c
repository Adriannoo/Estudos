#include <stdio.h>
#include <stdlib.h>

// char: 1 byte, int: 4 bytes, float: 4 bytes, double: 8 bytes

#define MAX 100

int main(){
    // Realloc - Serve para alocar ou realocar memoria dinamicamente e retorna um ponteiro com o endereço do início do espaco da memoria alocada
    // void* realloc(void* ptr, unsigned int num); protótipo;

    int *array = (int *) malloc(5 * sizeof(int)); // 5 inteiros
    int *temp = (int *) realloc(array, 10 * sizeof(int)); // 10 inteiros

    // int *array = realloc(NULL, 5 * sizeof(int)); // Equivalente ao malloc
    // array = (int *) realloc(array, 0); // Equivalente ao free

    if (array == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    if (temp == NULL) {
        printf("Erro ao alocar memoria\n");
        free(array);
        return 1;
    }

    array = temp;

    free(array);

    return 0;
}