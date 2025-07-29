#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 30
#define MAX_ADDRESS 15

void menu_principal(void);
void cadastro(void);
void vendas(void);
void abertura_caixa(void);
void fechamento_caixa(void);
void relatorios(void);


struct cadastro_cliente {
    int codigo;
    char nome[MAX_NAME];
    char nome_social[MAX_NAME];
    char cpf[12];
    char bairro[MAX_ADDRESS];
    char rua[MAX_ADDRESS];
    char num[8];
    char cep[9];
    char telefone[12];
};

struct cadastro_categoria_produto {
    int codigo;
    char nome[MAX_NAME];
};

struct cadastro_produto {
    int codigo;
    char nome[MAX_NAME];
    struct cadastro_categoria_produto categoria;
    float preco_compra;
    float preco_venda;
    float margem_lucro;
    int estoque;
    int estoque_minimo;
};

int input_user;

void cadastro() {
    printf("_________________________________\n");
    printf("|\t\t\t\t|\n");
    printf("|\t CADASTROS\t\t|\n");
    printf("|\t\b\b1. Cadastro de Clientes\t|\n");
    printf("|\t\b\b2. Cadastro de Produtos\t|\n");;
    printf("|\t\b\b6. Retornar\t\t|\n");
    printf("|\t\t\t\t|");
    printf("\n=================================");
}

void menu_principal() {
    printf("_________________________________\n");
    printf("|\t\t\t\t|\n");
    printf("|\t MENU PRINCIPAL\t\t|\n");
    printf("|\t\b\b1. Cadastros\t\t|\n");
    printf("|\t\b\b2. Vendas\t\t\t|\n");
    printf("|\t\b\b3. Abertura de Caixa\t|\n");
    printf("|\t\b\b4. Fechamento de Caixa\t|\n");
    printf("|\t\b\b5. Relatorios\t\t|\n");
    printf("|\t\b\b6. Sair\t\t\t|\n");
    printf("|\t\t\t\t|");
    printf("\n=================================\n");

    input_user = getchar() - 48; // Subtrai o valor ASCII de '0' para obter o número real
    printf("Voce escolheu: %d\n", input_user);
    switch (input_user) {
        case 1:
            cadastro();
            break;

        default:
            printf("ERROR!\n");
            break;
    }
}

int main() {
    menu_principal();
    return 0;
}