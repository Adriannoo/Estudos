#include <stdio.h>
#include <stdbool.h>

int main() {
    int quantidade = 0;
    float notas[quantidade], soma = 0;
    int posicaoNota = 0;
    bool recebeu = false;

    printf("Digite a quantidade de notas que deseja: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", (i + 1));
        scanf("%f", &notas[i]);
        soma += notas[i];
        if (notas[i] == 10) {
            recebeu = true;
            int posicaoNota = i;
        }
    }

    printf ("Notas digitadas: ");

    for (int i = 0; i < quantidade; i++) {
        printf("%.2f, ", notas[i]);

    }
    printf(" acabou.\n");
    printf("A media das notas ficou: %.2f", (soma/quantidade));

    if (recebeu == true) {
        printf("\nO aluno recebeu a nota 10 na posicao %d", posicaoNota);
    }
}