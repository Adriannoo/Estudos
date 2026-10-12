#include <stdio.h>
#include <conio.h>

/*
int main(void){
    int valor = 10;
    
    int *ptr = &valor;

    printf("Utilizando Ponteiro\n\n");
    printf("Conteudo da variavel: %d\n", valor);
    printf("Endereco da variavel: %x \n", &valor);
    printf("Conteudo da variavel ponteiro ptr: %x", ptr);

    getch();
    return 0;
}
*/

int main() {

    struct dados_pessoa {
        char nome[20];
        int idade;
        float altura;
    };

    struct dados_pessoa pessoa;

    printf("--------- Cadastro de pessoa ---------\n");

    printf("Digite o nome do pessoa .....: ");
    fgets(pessoa.nome, 20, stdin);

    printf("Digite a idade da pessoa .....: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura do pessoa .....: ");
    scanf("%f", &pessoa.altura);

    printf("--------- Exibindo os dados da struct ---------\n\n");
    printf("Nome.....: %s", pessoa.nome);
    printf("Idade...: %d\n", pessoa.idade);
    printf("Altura...: %.2f\n", pessoa.altura);

    return 0;
}


/*
int main() {
    const char *menuItems[] = {
        "Material de Limpeza",
        "Alimentos",
        "Padaria",
        "Pagamento",
        "Sair"
    };

    int numItems = sizeof(menuItems) / sizeof(menuItems[0]);
    int choice;

    do {
        printf("\n   <Menu Principal>\n");
        printf("\n %d \n", numItems);
        for (int i = 0; i < numItems; i++) {
            printf("%d. %s\n", i + 1, menuItems[i]);
        }

        printf("Escolha uma opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Opcao 1 selecionada: %s\n", menuItems[0]);
            break;
            case 2:
                printf("Opcao 2 selecionada: %s\n", menuItems[1]);
            break;
            case 3:
                printf("Opcao 3 selecionada: %s\n", menuItems[2]);
            break;
            case 4:
                printf("Opcao 4 selecionada: %s\n", menuItems[3]);
            break;
            case 5:
                printf("Saindo do programa...\n");
            break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (choice != 5);

    return 0;
}
*/

