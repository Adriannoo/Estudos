#include <stdio.h>

#define MAX 50

int main() {
	int n = 0, i = 0, opcao = 0;
	float notas[MAX], aprovadas[MAX];
	float soma = 0, media = 0;

	printf("\nDigite uma quantidade de notas: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("\nDigite a nota %d: ", i+1);
		scanf("%f", &notas[i]);
	}

	while (opcao != 4) {
		printf("\n\nSelecione uma opcao:\n");
		printf("1 - Exibir notas inseridas\n");
		printf("2 - Exibir media das notas\n");
		printf("3 - Alunos aprovados (MEDIA >= 6)\n");
		printf("4 - Encerrar\n");
		scanf("%d", &opcao);

		switch(opcao) {
			case 1:
				printf("\nNotas inseridas:\n");
				for (i = 0; i < n; i++) {
					printf("%.2f ", notas[i]);
				}
				break;
			case 2:
				printf("\nMedia das notas:\n");
				for (i = 0; i < n; i++) {
					soma += notas[i];
				}
				media = soma / n;
				printf("\nA media das notas e: %.2f\n", media);
				break;
			case 3:
				printf("\nNotas Aprovadas (MEDIA >= 6):\n");
				for (i = 0; i < n; i++) {
					if(notas[i] >= 6) {
						aprovadas[i] = notas[i];
					}
				}
				printf("Aprovadas:");
				for (i = 0; i < n; i++) {
					printf(" %.2f", aprovadas[i]);
				}
				break;
			default:
				printf("\n!! Digite uma opcao valida !!\n");

		}
	}
	printf("\nEncerrando");
	return 0;
}
