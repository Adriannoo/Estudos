#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct stackNode {
    int data;
    struct stackNode * prox;
};

typedef struct stackNode stack_node;
typedef stack_node * stack_node_ptr;

void push(stack_node_ptr *, int);
int pop(stack_node_ptr *);
int is_empty(stack_node_ptr);
void print_stack(stack_node_ptr);
void show_menu(void);

void show_menu(void) {
    printf("\n-- Menu Pilhas --\n1. Push\n2. Pop\n3. Print Stack\n4. Exit\nOpcao:");
}

void push(stack_node_ptr *top_ptr, const int value) {
    stack_node_ptr new_node_ptr = malloc(sizeof(stack_node));
    if (new_node_ptr != NULL) {
        new_node_ptr->data = value;
        new_node_ptr->prox = *top_ptr;
        *top_ptr = new_node_ptr;
    } else {
        printf("Erro ao alocar memoria para novo elemento.\n");
    }
}

int pop(stack_node_ptr *top_ptr) { // Funcao pop para remover o elemento do topo da pilha
    if (is_empty(*top_ptr)) { // Verifica se a pilha esta vazia
        printf("A pilha esta vazia. Nao e possivel remover elementos.\n");
        return -1; // Retorna 1 para indicar erro
    }
    stack_node_ptr temp_ptr = *top_ptr; // Cria um ponteiro temporario para o topo da pilha
    const int value = temp_ptr->data; // Armazena o valor do topo da pilha
    *top_ptr = temp_ptr->prox; // Atualiza o topo da pilha para o proximo elemento
    free(temp_ptr); // Libera a memoria para o elemento removido
    return value; // Retorna o valor do elemento removido
}

int is_empty(stack_node_ptr top_ptr) {
    return top_ptr == NULL; // Se for NULL, a pilha esta vazia, vai retornar 1 (true) ou 0 (false)
}

void print_stack(stack_node_ptr top_ptr) {
    if (is_empty(top_ptr)) {
        printf("\nA pilha esta vazia!\n");
        return;
    }
    printf("\nElementos da pilha:\n");
    stack_node_ptr current_ptr = top_ptr; // Cria um ponteiro para percorrer a pilha
    while (current_ptr != NULL) {
        printf("%d ", current_ptr->data); // Imprime o valor do elemento atual
        current_ptr = current_ptr->prox; // Avanca para o proximo elemento
        printf("\n");
    }
}

int main() {
    stack_node_ptr top_ptr = NULL; // Inicializa o topo da pilha como NULL
    int value = 0, user_option = 0, pop_temp = 0;

    do {
        show_menu();
        scanf("%d", &user_option); // Lê a opção do usuario
        while (getchar() != '\n') {} // Limpa o buffer de entrada
        switch (user_option) {
            case 1: // Push
                printf("Quantos valores deseja inserir na pilha?\n");
                scanf("%d", &user_option);
                for (int i = 0; i < user_option; i++) {
                    printf("Digite o valor %d da pilha: ", i + 1);
                    scanf("%d", &value);
                    while (getchar() != '\n') {} // Limpa o buffer de entrada
                    push(&top_ptr, value); // Chama a funcao push para adicionar o valor na pilha, passando o endereco do topo da pilha
                }
                user_option = 0; // Reseta a opcao do usuario
                break;

            case 2: // Pop
                printf("\nRemovendo elemento do topo da pilha...\n");
                sleep(1);
                pop_temp = pop(&top_ptr); // Chama a funcao pop para remover o elemento do topo da pilha
                printf("\nValor %d removido com sucesso!\n", pop_temp);
                sleep(1);
                break;

            case 3: // Print Stack
                print_stack(top_ptr);
                sleep(1);
                break;

            default:
                break;
        }

    } while (user_option != 4); // Loop para o menu, enquanto a opcao do usuario for diferente de 4 (sair)

    printf("\nSaindo do Programa...\n");
    sleep(1);

    return 0;
}
