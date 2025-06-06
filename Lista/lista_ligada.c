#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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
        printf("Nome: %s\nNota: %.1f\n\n", lista -> nome, lista -> nota);
        lista = lista -> proximo;
    }
}

void buscar_aluno(const aluno *lista, const char *nome_aluno) {
    bool encontrado = false;
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    while (lista != NULL) {
        if (strcmp(lista->nome, nome_aluno) == 0) {
            printf("Aluno encontrado:\n");
            printf("ID: %d\nNome: %s\nNota: %.1f\n\n", lista->id, lista->nome, lista->nota);
            encontrado = true;
            break;
        }
        lista = lista->proximo;
    }
    if (!encontrado) {
        printf("Aluno nao encontrado.\n");
    }
}

float calcular_media(const aluno *lista) {
    float soma_notas = 0, contador = 0;

    while (lista != NULL) {
        soma_notas += lista -> nota;
        contador++;
        lista = lista -> proximo;
    }

    if (contador <= 0) {
        printf("Nenhum aluno na lista para calcular a media!\n");
        return 0;
    }

    return soma_notas / contador;
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
        nome[strlen(nome) - 1] = '\0'; // Remove o "\n" do final da string outra forma
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        while (getchar() != '\n') {}
        printf("\n");
        lista = criar_aluno(lista, i + 1, nome, nota);
    }

    do {
        printf("\nSelecione uma opcao:\n");
        printf("1 - Buscar aluno\n2 - Imprimir Lista\n3 - Calcular Media\n4 - Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao_usuario);
        while (getchar() != '\n') {}

        switch(opcao_usuario) {
            case 1:
                char nome_aluno[MAX];
                printf("\nDigite o nome do aluno a ser buscado: ");
                fgets(nome_aluno, MAX, stdin);
                nome_aluno[strcspn(nome_aluno, "\n")] = '\0'; // Remove o "\n" do final da string
                buscar_aluno(lista, nome_aluno);
                break;

            case 2:
                printf("\n--- Lista de Alunos --- \n");
                imprimir_lista(lista);
                break;

            case 3 :
                printf("\n--- Media das Notas ---\n");
                printf("Media: %.1f\n", calcular_media(lista));
                break;

            default:
                break;
        }
    } while (opcao_usuario != 4);
    liberar_lista(lista);
}
