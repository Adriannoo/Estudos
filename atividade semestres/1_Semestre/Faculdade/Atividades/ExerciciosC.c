#include <stdio.h>
#include <math.h>

/* // Exercicio 5
int main() {
    int ano;

    printf("Digite um ano para verificar se e bissexto: ");
    scanf("%d", &ano);

    if(ano % 4 == 0) {
        if(ano % 400 == 0) {
            printf("%d E um ano bissexto. \n", ano);
        } else if(ano % 100 == 0) {
            printf("%d Nao e um ano bissexto. \n", ano);
        } else {
            printf("%d E um ano bissexto. \n", ano);
        }
    } else {
        printf("%d Nao e um ano bissexto. \n", ano);
    }

    return 0;
}
*/

/*
int main() {
    int matriz1[3][3], matriz2[3][3], somaMatriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nDigite o valor da linha %d e coluna %d da primeira matriz\n", i+1, j+1);
            printf("Valor: ");
            scanf("%d", &matriz1[i][j]);
        }    
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nDigite o valor da linha %d e coluna %d da segunda matriz\n", i+1, j+1);
            printf("Valor: ");
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\n A soma das matrizes e:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0 ; j < 3; j++) {
            somaMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", somaMatriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
int main() {
    float M = 0, r = 0.12, t = 10, P = 1000;

    M = P * pow((1 + r), t);

    printf("O montante final e: %.2f\n", M);

    return 0;
}
*/
int main() {
    int notaA = 0, notaB = 0, notaC = 0, notaD = 0, notaF = 0;
    char entrada;

    
    while (entrada != 'Q') {
        printf("\nDigite a nota para somar (A, B, C, D ou F), Q para sair: \n");
        entrada = getchar();
        switch(entrada) {
            case 'A':
                notaA++;
                printf("Nota A: %d\n", notaA);
                printf("%c\n", entrada);
                break;
            case 'B':
                notaB++;
                printf("Nota B: %d\n", notaB);
                break;
            case 'C':
                notaC ++;
                printf("Nota C: %d\n", notaC);
                break;
            case 'D':
                notaD++;
                printf("Nota D: %d\n", notaD);
                break;
            case 'F':
                notaF++;
                printf("Nota F: %d\n", notaF);
                break;
            default:
                printf("Nota invalida. Tente novamente.\n");
                entrada = '0';
                break;
        }
    }

    printf("\nTotal das notas:\n");
    printf("Nota A: %d\n", notaA);
    printf("Nota B: %d\n", notaB);
    printf("Nota C: %d\n", notaC);
    printf("Nota D: %d\n", notaD);
    printf("Nota F: %d\n", notaF);

    return 0;
}