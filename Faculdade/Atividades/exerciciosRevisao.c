#include <stdio.h>

#define MAX 10

int contaT = 0, contaP = 0, contaC = 0;

void contaPeixeColuna(char matriz[MAX][MAX], int linha, int coluna) {
    int i, j;     
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            if (matriz[i][j] == 'T') {
                contaT++;
            } else if (matriz[i][j] == 'P') {
                contaP++;
            } else if (matriz[i][j] == 'C') {
                contaC++;
            }
        }
    }
    
}

int main() {
    int linha, coluna, i, j;
    char matriz[MAX][MAX];
    
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &coluna);

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite o tanque [%d][%d]: ", i+1, j+1);
            scanf(" %c", &matriz[i][j]);
        }
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    contaPeixe(matriz, linha, coluna);

    printf("Quantidade de T: %d\n", contaT);
    printf("Quantidade de P: %d\n", contaP);
    printf("Quantidade de C: %d\n", contaC);
}


