#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 50

typedef struct aluno { // Definindo a estrutura aluno
    int id;
    char nome[MAX];
    float nota;
    struct aluno *proximo;
} aluno;

// Funcao do tipo aluno(struct) criar_aluno que recebe uma lista de alunos e retorna um novo aluno.
aluno *criar_aluno(aluno *lista, const int id_aluno, const char *nome_aluno, const float nota_aluno) {

    aluno *novo_aluno = malloc(sizeof(aluno)); // Alocando memoria para o novo aluno
    if (novo_aluno == NULL) { // Condicao se nao conseguir alocar memoria
        printf("Erro ao alocar memória para novo aluno.\n");
        return NULL;
    }

    // Parametros da lista
    novo_aluno -> id = id_aluno;
    strcpy(novo_aluno -> nome, nome_aluno);
    novo_aluno -> nota = nota_aluno;
    novo_aluno -> proximo = lista; // O proximo aluno da lista aponta para o novo aluno

    return novo_aluno;
}

// Funcao do tipo aluno(struct) remover_aluno que recebe uma lista de alunos e o id do aluno a ser removido.
aluno *remover_aluno(aluno *lista, const int id_aluno) {
    aluno *atual = lista; // Inicializando o ponteiro atual para percorrer a lista
    aluno *anterior = NULL; // Ponteiro para o aluno anterior

    while (atual != NULL) { // Enquanto nao chega ao final da lista
        if (atual -> id == id_aluno) { // Verifica se o id e igual ao id do aluno a ser removido
            if (anterior == NULL) { // Se o aluno a ser removido for o primeiro da lista
                lista = atual -> proximo; // Atualiza a lista para o proximo aluno
            } else {
                anterior -> proximo = atual -> proximo; // Se nao for o primeiro, o anterior aponta para o proximo do atual
            }
            free(atual); // Se encontrar o ID, libera a memoria do aluno atual, removendo-o da lista
            printf("Aluno %d removido com sucesso!\n", id_aluno);
            return lista; // Retorna a lista atualizada
        }
        anterior = atual; // Atualiza o ponteiro anterior para o atual
        atual = atual -> proximo; // Avanca para o proximo aluno
    }
    printf("Aluno %d nao encontrado!\n", id_aluno); // Se nao encontar o aluno, sai do loop
    return lista; // Retorna a mesma lista sem alteracoes
}

// Funcao para liberar a memoria alocada  da lista no final do programa
void liberar_lista(aluno *lista) {
    while (lista != NULL) { // Enquanto a lista nao for nula, no caso, o loop ate achar o inicio
        aluno *temp = lista; // temporario para liberar a memoria
        lista = lista -> proximo; // Avanca para o proximo aluno
        free(temp); // Libera o temporario, no caso seria o anterior
    }
}

// Funcao para imprimir a lista de alunos
void imprimir_lista(aluno *lista) {
    while (lista != NULL) { // Enquanto nao chega no final da lista
        printf("Aluno: %d\n", lista -> id);
        printf("Nome: %s\nNota: %.1f\n\n", lista -> nome, lista -> nota); // Printa os dados do aluno
        lista = lista -> proximo; // Avanca para o proximo aluno, apontando para o proximo da lista
    }
}

// Funcao para buscar um aluno pelo nome
void buscar_aluno(const aluno *lista, const char *nome_aluno) {
    bool encontrado = false; // Utilizei uma variavel booleana para verificar se o aluno foi encontrado, por enquanto falso

    while (lista != NULL) {
        // Utilizando ponteiro, sempre presica passar string como copia, por isso utilizando a funcao strcmp
        if (strcmp(lista->nome, nome_aluno) == 0) { //strcmp para comparar o nome do aluno, se for igual ele retorna 0
            printf("Aluno encontrado:\n");
            printf("ID: %d\nNome: %s\nNota: %.1f\n\n", lista->id, lista->nome, lista->nota); // Printa os dados do aluno encontrado
            encontrado = true; // Marca que o aluno foi encontrado
            break; // Sai do loop se encontrar o aluno
        }
        lista = lista->proximo; // Avanca para o proximo aluno
    }
    if (!encontrado) {
        printf("Aluno nao encontrado.\n"); // Se nao encontrar o aluno, printa que nao foi encontrado
    }
}

// Funcao para calcular a media das notas dos alunos
float calcular_media(const aluno *lista) {
    float soma_notas = 0, contador = 0; // Variaveis para armazenar a soma das notas e o contador de alunos

    while (lista != NULL) { // Verifica se a lista nao esta vazia
        soma_notas += lista -> nota; // Soma as notas dos alunos
        contador++;
        lista = lista -> proximo; // Avanca para o proximo aluno
    }

    if (contador <= 0) { // Se o contador for menor ou igual a zero, significa que nao ha alunos na lista
        printf("Nenhum aluno na lista para calcular a media!\n");
        return 0;
    }

    return soma_notas / contador; // Retorna a media das notas
}

// Funcao principal do programa
int main() {
    aluno *lista = NULL;
    int quantidade_alunos = 0, opcao_usuario;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);
    while (getchar() != '\n') {}

    for (int i = 0; i < quantidade_alunos; i++) { // Loop para cadastrar os alunos
        char nome[MAX];
        float nota = 0;

        printf("Digite o nome do aluno %d: ", i + 1); // Nome do aluno
        fgets(nome, MAX, stdin);
        nome[strcspn(nome,"\n")] = '\0'; // Funcao para remover o \n do final da string

        printf("Digite a nota do aluno %d: ", i + 1); // Nota do aluno
        scanf("%f", &nota);
        while (getchar() != '\n') {}

        printf("\n");

        lista = criar_aluno(lista, i + 1, nome, nota); // Chama a funcao criar_aluno para adicionar o aluno na lista, i + 1 para o ID do aluno
    }

    do { // do while para o menu de opcoes do usuario
        printf("\n - Selecione uma opcao - \n");
        printf("1 - Buscar aluno\n2 - Imprimir Lista\n3 - Calcular Media\n4 - Remover Aluno\n5 - Adicionar Aluno\n0 - Sair\n"); // Printa as opcoes do menu
        printf("Opcao: ");

        scanf("%d", &opcao_usuario);
        while (getchar() != '\n') {}

        switch(opcao_usuario) {
            case 1: // Buscar Aluno
                char nome_aluno[MAX];
                printf("\nDigite o nome do aluno a ser buscado: ");
                fgets(nome_aluno, MAX, stdin);
                nome_aluno[strcspn(nome_aluno,"\n")] = '\0'; // Funcao para remover o \n do final da string
                buscar_aluno(lista, nome_aluno); // Chama a funcao buscar_aluno
                break;

            case 2: // Imprimir Lista
                printf("\n--- Lista de Alunos --- \n");
                imprimir_lista(lista); // Chama a funcao imprimir_lista
                break;

            case 3: // Calcular Media
                printf("\n--- Media das Notas ---\n");
                printf("Media: %.1f\n", calcular_media(lista)); // Ja chama a funcao calcular_media dentro do printf
                break;

            case 4: // Remover Aluno
                int id_aluno = 0;
                printf("\nDigite o ID do aluno para remocao: ");
                scanf("%d", &id_aluno);
                while (getchar() != '\n') {}

                remover_aluno(lista, id_aluno); // Chama a funcao remover_aluno

            case 5:
                char novo_aluno[MAX];
                int quantidade_adicionar = 0, novo_id = 0; // Variaveis para o novo aluno
                float nova_nota = 0;

                if (lista != NULL) {
                    novo_id = lista->id;
                } else {
                    printf("Lista vazia!\n"); // Verifica se a lista esta vazia, para pegar o valor do ID
                    break;
                }

                printf("\n- Adicionar Aluno -\n");

                printf("Digite a quantidade de alunos a serem adicionados: ");
                scanf("%d", &quantidade_adicionar);
                while (getchar() != '\n') {}

                for (int i = 0; i < quantidade_adicionar; i++) { // Loop para incrementar, igual no main
                    printf("\nDigite o nome do aluno %d: ", i + 1);
                    fgets(novo_aluno, MAX, stdin);
                    novo_aluno[strcspn(novo_aluno, "\n")] = '\0';

                    printf("Digite a nota do aluno %d: ", i + 1);
                    scanf("%f", &nova_nota);
                    while (getchar() != '\n') {}

                    novo_id += 1; // Incrementador do ID, para nao repetir e pegar o novo

                    lista = criar_aluno(lista, novo_id, novo_aluno, nova_nota);
                }

                printf("\nAlunos criados com sucesso!\n");
                break;

            default:
                break;
        }
    } while (opcao_usuario != 0);

    liberar_lista(lista); // Libera a memoria alocada da lista no final do programa
}

