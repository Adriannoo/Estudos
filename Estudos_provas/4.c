#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Exercícios de revisão para prova - Conteúdos e dificuldades:

1. Arquivos (Fácil)
2. Alocação Dinâmica (Fácil)
3. Recursão (Médio)
4. Ponteiros (Médio)
5. Lista Ligada (Extremo)
6. Ordenação (Bubble Sort) (Difícil)

Cada bloco abaixo contém 10 exercícios de cada conteúdo, com enunciado e dicas.
*/

// 1. ARQUIVOS (FÁCIL)
// Exercício 1.1: Escreva um programa que crie um arquivo texto e grave a frase "Olá, Arquivos!".
// Exercício 1.2: Leia um arquivo texto e imprima seu conteúdo na tela.
// Exercício 1.3: Conte o número de linhas de um arquivo texto.
// Exercício 1.4: Copie o conteúdo de um arquivo para outro.
// Exercício 1.5: Grave 10 números inteiros em um arquivo binário.
// Exercício 1.6: Leia 10 números inteiros de um arquivo binário e imprima-os.
// Exercício 1.7: Escreva um programa que adicione uma linha ao final de um arquivo texto.
// Exercício 1.8: Leia um arquivo texto e conte quantas vezes a letra 'a' aparece.
// Exercício 1.9: Escreva um programa que apague o conteúdo de um arquivo texto.
// Exercício 1.10: Escreva um programa que leia nomes de um arquivo e imprima apenas os que começam com 'A'.

// 2. ALOCAÇÃO DINÂMICA (FÁCIL)
// Exercício 2.1: Alocar dinamicamente um vetor de 5 inteiros e ler seus valores.
// Exercício 2.2: Alocar dinamicamente uma matriz 3x3 de floats e preencher com valores do usuário.
// Exercício 2.3: Redimensionar um vetor de inteiros de tamanho 5 para 10 usando realloc.
// Exercício 2.4: Liberar corretamente a memória de um vetor alocado dinamicamente.
// Exercício 2.5: Criar uma struct Aluno e alocar dinamicamente um array de 3 alunos.
// Exercício 2.6: Ler uma string de tamanho desconhecido usando malloc e realloc.
// Exercício 2.7: Alocar dinamicamente um vetor de ponteiros para strings.
// Exercício 2.8: Criar uma função que recebe um ponteiro para int e aloca memória para N inteiros.
// Exercício 2.9: Escrever uma função que retorna um ponteiro para um vetor de floats alocado dinamicamente.
// Exercício 2.10: Escrever um programa que soma dois vetores alocados dinamicamente.

// 3. RECURSÃO (MÉDIO)
// Exercício 3.1: Função recursiva para calcular o fatorial de um número.
// Exercício 3.2: Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci.
// Exercício 3.3: Função recursiva para imprimir um vetor de trás para frente.
// Exercício 3.4: Função recursiva para somar os elementos de um vetor.
// Exercício 3.5: Função recursiva para inverter uma string.
// Exercício 3.6: Função recursiva para contar dígitos de um número inteiro.
// Exercício 3.7: Função recursiva para calcular a soma dos dígitos de um número.
// Exercício 3.8: Função recursiva para encontrar o maior elemento de um vetor.
// Exercício 3.9: Função recursiva para verificar se uma string é palíndromo.
// Exercício 3.10: Função recursiva para calcular a potência (base^expoente).

// 4. PONTEIROS (MÉDIO)
// Exercício 4.1: Escreva um programa que use um ponteiro para modificar o valor de uma variável.
// Exercício 4.2: Escreva uma função que recebe um ponteiro para int e dobra o valor.
// Exercício 4.3: Escreva uma função que troca o valor de dois inteiros usando ponteiros.
// Exercício 4.4: Escreva um programa que imprime o endereço de uma variável.
// Exercício 4.5: Escreva um programa que usa ponteiro para acessar elementos de um vetor.
// Exercício 4.6: Escreva uma função que recebe um ponteiro para float e atribui um valor lido do usuário.
// Exercício 4.7: Escreva um programa que usa ponteiro para ponteiro (int **).
// Exercício 4.8: Escreva uma função que recebe um ponteiro para char e conta o número de caracteres.
// Exercício 4.9: Escreva um programa que usa ponteiros para acessar campos de uma struct.
// Exercício 4.10: Escreva um programa que cria um vetor de ponteiros para inteiros e preenche com valores.

// 5. LISTA LIGADA (EXTREMO)
// Exercício 5.1: Implemente uma lista ligada simples de inteiros (inserção no início).
// Exercício 5.2: Implemente uma função para remover um elemento da lista ligada.
// Exercício 5.3: Implemente uma função para buscar um elemento na lista ligada.
// Exercício 5.4: Implemente uma função para imprimir todos os elementos da lista ligada.
// Exercício 5.5: Implemente uma função para liberar toda a memória da lista ligada.
// Exercício 5.6: Implemente uma lista ligada de structs Aluno (nome, nota).
// Exercício 5.7: Implemente uma função que retorna o tamanho da lista ligada.
// Exercício 5.8: Implemente uma função que inverte a lista ligada.
// Exercício 5.9: Implemente uma função que ordena a lista ligada.
// Exercício 5.10: Implemente uma função que remove todos os elementos pares da lista ligada.

// 6. ORDENAÇÃO (BUBBLE SORT) (DIFÍCIL)
// Exercício 6.1: Implemente o algoritmo Bubble Sort para ordenar um vetor de inteiros.
// Exercício 6.2: Implemente o Bubble Sort para ordenar um vetor de floats.
// Exercício 6.3: Implemente o Bubble Sort para ordenar um vetor de strings.
// Exercício 6.4: Implemente o Bubble Sort para ordenar um vetor de structs Aluno por nota.
// Exercicio 6.5: Implemente o Bubble Sort para ordenar um vetor de structs Aluno por nome.
// Exercício 6.6: Implemente uma função que conta o número de trocas feitas pelo Bubble Sort.
// Exercício 6.7: Implemente uma função que verifica se o vetor está ordenado após o Bubble Sort.
// Exercício 6.8: Implemente o Bubble Sort recursivo.
// Exercício 6.9: Implemente o Bubble Sort para ordenar apenas os elementos pares de um vetor.
// Exercício 6.10: Implemente o Bubble Sort para ordenar um vetor de inteiros em ordem decrescente.

// Para cada exercício, escreva o código correspondente embaixo do comentário do enunciado.

//======================================================================================================================
// 1. ARQUIVOS (FÁCIL)
// 1.1 Escreva um programa que crie um arquivo texto e grave a frase "Ola, Arquivos!".
// 1.2 Leia um arquivo texto e imprima seu conteúdo na tela.
// 1.3 Conte o número de linhas de um arquivo texto.

/*
#define MAX 50

int main() {
    FILE *arquivo = fopen("exercicio1_1.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    int linhas = 0;

    fprintf(arquivo, "Ola, Arquivos!\n");

    printf("Arquivo criado e gravado com sucesso!\n");
    fclose(arquivo);

    fopen("exercicio1_1.txt", "r");

    printf("\nPrintando conteudo do arquivo:\n");

    char texto[MAX];
    while (fgets(texto, MAX, arquivo)) {
        printf("%s", texto);
        linhas++;
    }
    printf("\nNumero de linhas no arquivo: %d\n", linhas);

    fclose(arquivo);
    return 0;
}
*/


// 1.4 Copie o conteúdo de um arquivo para outro.

/*
#define MAX 50

int main() {
    FILE *arquivo1 = fopen("Arquivos/exercicio1_4.txt", "w");
    FILE *arquivo2 = fopen("Arquivos/exercicio1_4_copia.txt", "r");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    char texto[MAX];
    printf("Digite o texto a ser copiado:\n");
    fgets(texto, MAX, stdin);
    fprintf(arquivo1, "%s", texto);
    fclose(arquivo1);

    arquivo1 = fopen("Arquivos/exercicio1_4.txt", "r");
    if (arquivo1 == NULL) {
        printf("Erro ao abrir arquivo original!\n");
        return 1;
    }

    printf("\nConteudo do arquivo original:\n");
    while (fgets(texto, MAX, arquivo1)) {
        printf("%s", texto);
        fputs(texto, arquivo2);
    }

    printf("\nConteudo do arquivo copiado:\n");
    while (fgets(texto, MAX, arquivo2)) {
        printf("%s", texto);
    }

    printf("\nArquivo copiado com sucesso!\n");
    fclose(arquivo1);
    fclose(arquivo2);

    return 0;
}
*/

// 1.5 Grave 10 números inteiros em um arquivo binário.
// 1.6 Leia 10 números inteiros de um arquivo binário e imprima-os.
/*
#define MAX 10 // Define o numero maximo de numeros

int main() {
    FILE *arquivo = fopen("Arquivos/exercicio1_5.dat", "wb"); // Cria o arquivo binario para escrita e abre
    if (arquivo == NULL) { // Verifica se o arquivo foi aberto corretamente
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    int numeros[MAX], numeros_lidos[MAX]; // Arrays para armazenar os numeros a serem escritos e lidos

    for (int i = 0; i < MAX; i++) {
        printf("Digite o %d numero inteiro: ", i + 1); // Loop para ler 10 numeros inteiros
        scanf("%d", &numeros[i]);
        while (getchar() != '\n');
    }
    // 1 - variavel, 2 - tamanho do tipo, 3 - quantidade de elementos, 4 - arquivo
    fwrite(numeros, sizeof(int), MAX, arquivo); // Funcao "fwrite" para escrever os numeros no arquivo binario
    fclose(arquivo); // Fecha o arquivo após a escrita

    arquivo = fopen("Arquivos/exercicio1_5.dat", "rb"); // Reabre o arquivo binario para leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n"); // Verificacao
        return 1;
    }

    // 1 - variavel, 2 - tamanho do tipo, 3 - quantidade de elementos, 4 - arquivo
    fread(numeros_lidos, sizeof(int), MAX, arquivo); // Funcao "fread" para ler os numeros do arquivo binario
    // Le os numeros do arquivo binario e armazena no array numeros_lidos

    printf("\nConteudo lido do arquivo binário\n");

    for (int i = 0; i < MAX; i++) {
        printf("%d ", numeros_lidos[i]); // Loop para imprimir os numeros lidos do arquivo binario
    }

    fclose(arquivo); // Fecha o arquivo após a leitura
    return 0;
}
*/

// 1.7 Escreva um programa que adicione uma linha ao final de um arquivo texto.
/*
#define MAX 50

int main() {
    FILE *arquivo = fopen("Arquivos/exercicio1_7.txt", "a"); // Abre o arquivo em modo de adição
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char texto[MAX];
    printf("Digite um texto a ser adicionado ao arquivo: ");
    fgets(texto, MAX, stdin);
    fprintf(arquivo, "%s", texto); // Adiciona o texto ao final do arquivo

    printf("\nTexto adicionado com sucesso!\n");

    fclose(arquivo);
}
*/

// 1.8 Leia um arquivo texto e conte quantas vezes a letra 'a' aparece.
/*
#define MAX 50

int main() {
    FILE *arquivo = fopen("Arquivos/exercicio1_8.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char texto[MAX];
    int contador = 0, c = 0; // C Variavel auxiliar para armazenar o caractere lido
    printf("Digite um texto para contar as letras (a) (maximo %d caracteres): ", MAX - 1);
    fgets(texto, MAX, stdin);
    fprintf(arquivo, "%s", texto); // Grava o texto no arquivo
    fclose(arquivo);

    arquivo = fopen("Arquivos/exercicio1_8.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    // File Get Character
    while ((c = fgetc(arquivo)) != EOF) { // Loop enquanto nao chegar no final do arquivo
        if (c == 'a' || c == 'A') { // Verifica se o caractere lido é 'a' ou 'A'
            contador++;
        }
    }
    printf("\nA letra 'a' aparece %d vezes no arquivo.\n", contador);
    fclose(arquivo);

    return 0;
}
*/

// 1.9 Escreva um programa que apague o conteúdo de um arquivo texto.
/*
#define MAX 100

void apagar_arquivo() {
    FILE *arquivo = fopen("Arquivos/exercicio1_9.txt", "w"); // Abre o arquivo em modo de escrita, o que apaga seu conteúdo
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para apagar!\n");
        return;
    }
    fclose(arquivo); // Fecha o arquivo após apagar o conteúdo
}


int main() {
    FILE *arquivo = fopen("Arquivos/exercicio1_9.txt", "a+"); // Abre o arquivo em modo de edicao e leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    char texto[MAX];
    char resposta = '\0';

    printf("Digite um texto para gravar no arquivo (maximo %d caracteres)\nDigite 'apagar' para limpar o arquivo\n", MAX - 1);
    fgets(texto, MAX, stdin);

    if (strcmp(texto, "apagar\n") == 0 || strcmp(texto, "APAGAR\n") == 0) { // Verifica se o texto digitado é "apagar"
        fclose(arquivo); // Fecha o arquivo antes de apagar
        apagar_arquivo(); // Chama a função para apagar o arquivo
        printf("Conteudo do arquivo apagado com sucesso!\n");
        return 1; // Encerra o programa após apagar o arquivo
    }

    fprintf(arquivo, "%s", texto); // Grava o texto no arquivo

    printf("\nTexto gravado com sucesso!\nDeseja acrescentar mais texto? (s/n)\n");
    scanf("%c", &resposta); // Lê a resposta do usuario
    while (getchar() != '\n') {} // Limpa o buffer de entrada

    if (resposta == 's' || resposta == 'S') {
        printf("\nDigite mais texto para acrescentar ao arquivo: ");
        fgets(texto, MAX, stdin);
        fprintf(arquivo, "%s", texto); // Acrescenta o texto ao arquivo
        printf("Texto acrescentado com sucesso!\n");
    } else if (resposta == 'n' || resposta == 'N') {
        printf("Saindo do programa...");
    } else {
        printf("ERRO, resposta inválida!\n");
    }

    fclose(arquivo); // Fecha o arquivo após a escrita
    return 0;
}
*/

// 1.10 Escreva um programa que leia nomes de um arquivo e imprima apenas os que começam com 'A'.
/*
#define MAX 100

int main() {
    FILE *arquivo = fopen("Arquivos/exercicio1_10.txt", "w+"); // Abre o arquivo em modo de adição e leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char nome[MAX];

    fprintf(arquivo, "%s", "Adriano Ramos\nJose da Silva\nArrombado da Desgraca\nLixo do Caralho\nAna Julia\nGiovana Kassime");
    rewind(arquivo);

    printf("Nomes que comecam com A:\n");
    while (fgets(nome, MAX, arquivo)) {
        if (nome[0] == 'A' || nome[0] == 'a') {
            printf("%s", nome);
        }
    }

    fclose(arquivo);
    return 0;
}
*/

//======================================================================================================================
// 2. ALOCAÇÃO DINÂMICA (FÁCIL)
// 2.1 Alocar dinamicamente um vetor de 5 inteiros e ler seus valores.
/*
int main() {
    int *vetor = malloc(5 * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        while (getchar() != '\n') {}
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor); // Libera a memoria alocada
}
*/

// 2.2 Alocar dinamicamente uma matriz 3x3 de floats e preencher com valores do usuário.

#define MAX 3

int main() {
    float **matriz = malloc(MAX * sizeof(float*)); // Aloca a matriz, onde cada linha e um ponteiro para float
    if (matriz == NULL) {
        printf("Erro ao alocar a memoria!\n");
        return 1;
    }

    for (int i = 0; i < MAX; i++) { // Cria um loop para alocar cada linha da matriz
        matriz[i] = malloc(MAX * sizeof(float));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar a memoria!\n");
            for (int j = 0; j < i; j++) {
                free(matriz[j]); // Libera a memoria alocada para as linhas anteriores
            }
            free(matriz);
            return 1;
        }
    }

    printf("Digite os valores da matriz 3x3:\n");

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("Digite a posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]); // Lê os valores da matriz
            while (getchar() != '\n') {}
        }
    }

    printf("\nValores da matriz 3x3:\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < MAX; i++) { // Libera a memoria alocada para cada linha da matriz
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}