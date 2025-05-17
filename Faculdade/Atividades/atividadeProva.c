// 1 - Escreva um programa em C que leia um numero inteiro N e calcule a soma dos numeros inteiros de 1 ate N, utilizando uma funcao recursiva. A funcao recursiva deve seguir a logica semelhante ao calculo de fatorial, mas utilizando soma

#include <stdio.h>

/*
int soma_recursiva(int);

int soma_recursiva(int const num) { // soma_recursiva(3) - 3 + soma_recursiva(2) - 2 + soma_recursiva(1) ...
    if (num == 0) {
        return 0;
    }
    return num + soma_recursiva(num - 1);
}

int main () {
    int input;

    printf("Digite um valor para ser somado: ");
    scanf("%d", &input);

    printf("Soma recursiva do numero: %d", soma_recursiva(input));

    return 0;
}
*/

// 2 - Faca um programa em C que leia a nota de satisfacao (de 0 a 10) dada por 10 clientes para um sasbor experimental de sorvete. O programa deve informar quantas pessoas deram uma nota igual ou superior a 8.

#define MAX 30

typedef struct {
    char sabor[MAX];
    float media;
}Notas_sabores;

Notas_sabores notas_sabores[3];

int main() {
    float soma = 0, media = 0;
    int contador = 0;

    printf("Pesquisa de satisfacao!\n");

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do (%d) sabor: ", i + 1);
        fgets(notas_sabores[i].sabor, MAX, stdin);
        for (int j = 0; j < 3; j++) {
            printf("Avaliador (%d)\nDe 0 a 10, digite a nota do sabor %s ", j + 1, notas_sabores[i].sabor);
            scanf("%f", &soma);
            getchar();
            media +=  soma;
        }
        printf("%.2f", media);
    }

}