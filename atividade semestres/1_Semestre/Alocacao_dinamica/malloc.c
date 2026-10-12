#include <stdio.h>
#include <stdlib.h>

// char: 1 byte, int: 4 bytes, float: 4 bytes, double: 8 bytes

#define MAX 100

int main(){
    // Malloc - Serve para alocar memoria dinamicamente e retorna um ponteiro com o endereço do início do espaco da memoria alocada
    // void* malloc(unsigned int num);

    /*
    int *array = malloc(200); // 50 inteiros
    char *charr = malloc(200); // 200 characteres
    */


    int *array = malloc(5*sizeof(int)); // 5 inteiros
    char *charr = malloc(5*sizeof(char)); // 2 characteres

    if (array == NULL || charr == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
        getchar();
    }

    printf("Digite um nome:");
    for (int i = 0; i < 5; i++) {
        fgets(charr,5, stdin);
    }

    printf("%s\n", charr);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    free(array);
    free(charr);

    return 0;
}