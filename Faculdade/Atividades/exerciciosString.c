# include <stdio.h>
# include <string.h>

int main() {
    char str[100], strInvertida[100], palavra1[20], palavra2[20];
    int quantidade = 0, vogais[5] = {0, 0, 0, 0, 0};
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Quantidade da string
    quantidade = strlen(str) - 1;
    printf("\nA quantidade de caracteres e: %d\n", quantidade);
    
    // String Invertida
    strInvertida[quantidade] = '\0';
    for (int i = 0; i < quantidade; i++) {
        strInvertida[i] = str[quantidade - i - 1];
    }
    printf("\nA string invertida e: %s\n", strInvertida);
    
    // Verifica Vogais
    for (int i = 0; i < quantidade; i++) {
        if(str[i] == 'a' || str[i] == 'A') {
            vogais[0]++;
        } else if(str[i] == 'e' || str[i] == 'E') {
            vogais[1]++;
        } else if(str[i] == 'i' || str[i] == 'I') {
            vogais[2]++;
        } else if(str[i] == 'o' || str[i] == 'O') {
            vogais[3]++;
        } else if(str[i] == 'u' || str[i] == 'U') {
            vogais[4]++;
        }
    }

    printf("\nA string tem essa quantidade de vogais:\n");
    printf("\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);
    
    // Retira o espaço da string
    printf("\nA string sem espacos e: ");
    // Verifica se sao iguais
    for (int i = 0; i < quantidade; i++) {
        if(str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    
    printf("\n\nSao iguais ou diferentes?\n\nDigite uma palavra:\n");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("\nDigite outra palavra: \n");
    fgets(palavra2, sizeof(palavra2), stdin);
    
    if (strcmp(palavra1, palavra2) == 0) {
        printf("\nAs palavras sao iguais.\n");
    } else {
        printf("\nAs palavras sao diferentes.\n");
    }

    
    return 0;
}