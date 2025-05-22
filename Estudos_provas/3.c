#include <stdio.h>

// -- ARRAYS --
// 1. Fácil: Leia 10 números inteiros em um array e imprima-os na ordem inversa.
// 2. Médio: Leia 20 números inteiros, conte quantos são pares e quantos são ímpares, e mostre o resultado.

// -- Matrizes --
// 1. Fácil: Leia uma matriz 3x3 de inteiros e imprima a soma de todos os elementos.
// 2. Médio: Leia uma matriz 4x4 e imprima a soma dos elementos da diagonal principal.

// -- Ponteiros --
// 1. Fácil: Crie uma função que receba dois inteiros por ponteiro e troque seus valores.
// 2. Médio: Crie um array de 5 inteiros, preencha com valores, e use ponteiros para imprimir cada elemento multiplicado por 2.

// -- Estruturas --
// 1. Fácil: Defina uma estrutura para armazenar nome e idade de uma pessoa. Leia e imprima os dados de uma pessoa.
// 2. Médio: Defina uma estrutura para um aluno (nome, matrícula, 3 notas). Leia os dados de 5 alunos e imprima o nome do aluno com maior média.

// -- Recursão --
// 1. Fácil: Implemente uma função recursiva para calcular o fatorial de um número.
// 2. Fácil: Implemente uma função recursiva para imprimir os números de 1 até N.
// 3. Fácil: Implemente uma função recursiva para calcular a soma dos elementos de um array de tamanho N.
// 4. Médio: Implemente uma função recursiva para calcular o n-ésimo termo da sequência de Fibonacci.

// -- Exercícios Mesclando Conteúdos --
// 1. Fácil: Crie uma estrutura para armazenar um vetor de 3 notas de um aluno. Leia os dados de 3 alunos e imprima a média de cada um.
// 2. Médio: Crie uma matriz 3x3, preencha com valores, e use uma função com ponteiros para encontrar o maior elemento.
// 3. Médio: Defina uma estrutura para um produto (nome, preço, quantidade). Leia os dados de 5 produtos e use uma função recursiva para calcular o valor total do estoque.

// ==================================================== -- ARRRAY -- ===================================================
// === 1. Fácil: Leia 10 números inteiros em um array e imprima-os na ordem inversa. ===
// #define MAX 10
//
// int main() {
//     int num_inteiros[MAX];
//
//     // Loop para ler os numeros inteiros
//     for (int i = 0; i < MAX; i++) {
//         printf("Digite o %d numero: ", i + 1);
//         scanf("%d", &num_inteiros[i]);
//         while (getchar() != '\n'); // Limpa o buffer do teclado
//     }
//
//     printf("Print dos numeros informados: ");
//     for (int i = 0; i < MAX; i++) {
//         printf("%d ", num_inteiros[i]);
//     }
//
//     printf("\nPrint na forma inversa: ");
//     for (int i = MAX; i != 0; i--)  {
//         printf("%d ", num_inteiros[i - 1]); // i - 1 para evitar o acesso a um elemento fora do array
//     }
//
//     return 0;
// }


// === 2. Médio: Leia 20 números inteiros, conte quantos são pares e quantos são ímpares, e mostre o resultado. ===
// #define MAX 20
//
// int main() {
//     int num_inteiros[MAX];
//     int pares = 0, impares = 0, i = 0;
//
//     for ( i = 0; i < MAX; i++ ) {
//         printf("Digite o %d numero inteiro: ", i + 1);
//         scanf("%d", &num_inteiros[i]);
//         while (getchar() != '\n'); // Limpa o buffer do teclado
//         if (num_inteiros[i] % 2 == 0) {
//             pares++;
//         } else {
//             impares++;
//         }
//     }
//
//     printf("Numeros digitados: ");
//     for (i = 0; i < MAX; i++) {
//         printf("%d ", num_inteiros[i]);
//     }
//     printf("\nQuantidade de pares: %d", pares);
//     printf("\nQuantidade de impares: %d", impares);
// }
//======================================================================================================================

// ==================================================== -- MATRIZ -- ===================================================
// === 1. Fácil: Leia uma matriz 3x3 de inteiros e imprima a soma de todos os elementos. ===
// #define MAX 3
//
// int main() {
//     int matriz[MAX][MAX];
//     int soma = 0;
//
//     // For aninhado para ler os elementos da matriz 3x3
//     for (int i = 0; i < MAX; i++) {
//         for (int j = 0; j < MAX; j++) {
//             printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matriz[i][j]);
//             while (getchar() != '\n'); // Limpa o buffer do teclado
//             soma += matriz[i][j]; // Soma os elementos
//         }
//     }
//
//     printf("Matriz informada: \n");
//     for (int i = 0; i < MAX; i++) {
//         for (int j = 0; j < MAX; j++) {
//             printf("%d  ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nA soma dos elementos da Matriz e: %d", soma);
// }


// === 2. Médio: Leia uma matriz 4x4 e imprima a soma dos elementos da diagonal principal. ===
#define MAX 4

int main() {
    int matriz[MAX][MAX];
    int soma_diagonal = 0;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            while (getchar() != '\n'){} // Limpa o buffer do teclado
            if (i == j) { // Verifica se o elemento está na diagonal principal
                soma_diagonal += matriz[i][j]; // Soma os elementos da diagonal principal
            }
        }
    }
    printf("Matriz informada: \n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n A soma da diagonal principal e: %d", soma_diagonal);
}
