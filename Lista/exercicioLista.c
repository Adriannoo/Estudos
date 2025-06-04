#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

typedef struct aluno {
    int id;
    char nome[MAX];
    float nota;
    struct aluno *proximo;
} aluno;

aluno *criar_aluno(aluno *lista, const int id_aluno, const char *nome_aluno, const float nota_aluno) {

    aluno *novo_aluno = malloc(sizeof(aluno));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória para novo aluno.\n");
        return NULL;
    }

    novo_aluno -> id = id_aluno;
    strcpy(novo_aluno -> nome, nome_aluno);
    novo_aluno -> nota = nota_aluno;
    novo_aluno -> proximo = lista;

    return novo_aluno;
}

void liberar_lista(aluno *lista) {
    while (lista != NULL) {
        aluno *temp = lista;
        lista = lista -> proximo;
        free(temp);

    }
}

void imprimir_lista(aluno *lista) {
    while (lista != NULL) {
        printf("Aluno: %d\n", lista -> id);
        printf("Nome: %s\nNota: %.2f\n\n", lista -> nome, lista -> nota);
        lista = lista -> proximo;
    }
}

void buscar_aluno(aluno *lista, const char *nome_aluno) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    while (lista != NULL) {
        
    }
    printf("Aluno nao encontrado.\n");
}

int main() {
    aluno *lista = NULL;
    int quantidade_alunos = 0, opcao_usuario = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);
    while (getchar() != '\n') {}

    for (int i = 0; i < quantidade_alunos; i++) {
        char nome[MAX];
        float nota = 0;

        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nome, MAX, stdin);
        nome[strlen(nome) - 1] = '\0';
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        while (getchar() != '\n') {}
        printf("\n");
        lista = criar_aluno(lista, i + 1, nome, nota);
    }

    printf("Selecione uma opcao:\n");

    printf("1 - Buscar aluno\n2 - Imprimir Lista\n3 - Calcular Media\n");
    printf("Opcao: ");

    scanf("%d", &opcao_usuario);
    while (getchar() != '\n') {}

    switch(opcao_usuario) {
        case 1:
            char nome_aluno[MAX];
            printf("\nDigite o nome do aluno a ser buscado: ");
            fgets(nome_aluno, MAX, stdin);
            nome_aluno[strlen(nome_aluno)] = '\0';
            buscar_aluno(lista, nome_aluno);
            break;

        case 2:
            printf("\n--- Lista de Alunos --- \n");
            imprimir_lista(lista);
            break;

        case 3 :

        default:
            printf("Opcao invalida.\n");
            break;
    }
    liberar_lista(lista);
}
