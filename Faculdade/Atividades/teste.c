#include <stdio.h>
#include <string.h>

#define MAX 100

/*
int main() {
  int a, b, soma = 0;
  int *p1 = &a, *p2 = &b;

  printf("Soma com ponteiros\nDigite dois numeros inteiros: ");
  scanf("%d %d", &a, &b);

  printf("Valores digitados: %d e %d\n", *p1, *p2);

  soma = *p1 + *p2;

  printf("Soma dos valores = %d", soma);

  return 0;
}
*/


/*
int main() {
  FILE *file;
  char name[MAX], linha[MAX];
  int age = 0;

  file = fopen("file.txt", "a+");

  if (file == NULL) {
    printf("\nError!\nNULL FILE!");
  }

  printf("Name: ");
  fgets(name, MAX, stdin);
  name[strcspn(name, "\n")] = '\0'; // Remove o \n do fgets
  printf("\nAge: ");
  scanf("%d", &age);

  fprintf(file, "%s %d\n", name, age);
  fclose(file);

  fopen("file.txt", "r");

  printf("Conteudo do arquivo:\n");
  while (fgets(linha, MAX, file)) {
    printf("%s", linha);
  }


  return 0;
}


int main() {
  FILE *file;

  int index[MAX];

  file = fopen("file.txt", "a+");

  typedef struct {
    char name[MAX];
    int age;
    float height;
  } Person;
  Person person;

  printf("Type a name: ");
  fgets (person.name, MAX, stdin);
  person.name[strcspn(person.name, "\n")] = '\0';
  printf("Type a age: ");
  scanf("%d", &person.age);
  printf("Type a height: ");
  scanf("%f", &person.height);

  if (file == NULL) {
    printf("\nError!\nNULL FILE!");
  }

  fprintf(file, "%s %d %.2f\n", person.name, person.age, person.height);

  printf("Teste:\n%s\n %d\n %.2f\n\n", person.name, person.age, person.height);

  fclose(file);

  fopen("file.txt", "r");

  while (fgets(index, MAX, file)) {
    printf("%s", index);
  }

  fclose(file);

  return 0;
}
*/

int main() {


  return 0;
}