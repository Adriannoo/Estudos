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


// Atividade 1
int main() {
    struct Person {
    char name[MAX];
    int age;
    float height;
  };

  struct Person person;

  struct Person *ptr_person = &person;

  printf("\nSay my name: ");
  fgets(ptr_person->name, MAX, stdin);
  printf("\nSay my age: ");
  scanf("%d", &ptr_person->age);
  printf("\nSay my height: ");
  scanf("%f", &ptr_person->height);

  printf("\nShowing the infos whit pointer: \n");

  printf("\nName: %s", ptr_person->name);
  printf("Age: %d\n", ptr_person->age);
  printf("Height: %.2f\n", ptr_person->height);

  return 0;
}


int main() {
  struct Product {
    char name[MAX];
    float price[MAX];
    int quantity[MAX];
  };

  struct Product product;

  float sum = 0, mean = 0, expensive_value = 0;

  for (int i = 0 ; i < 2 ; i++) {
    printf("\nDigit the (%d) product name: ", i + 1);
    fgets(product.name, MAX, stdin);
    product.name[strcspn(product.name, "\n")] = '\0';

    printf("Digit the (%d) product price: ", i + 1);
    scanf("%f", &product.price[i]);
    getchar();

    sum += product.price[i];

    if (product.price[i] > expensive_value) {
      expensive_value = product.price[i];
    }

    printf("Digit the (%d) product quantity: ", i + 1);
    scanf("%d", &product.quantity[i]);
    getchar();
  }

  mean = sum / 2;

  printf("The most expensive price value is: %.2f\n", expensive_value);
  printf("The mean of the digited numbers is: %.2f\n", mean);

  return 0;
}
*/

typedef struct {
  char name[MAX];
  float grade1[MAX];
  float grade2[MAX];
}Student;

int mean_student(struct *student) {
  float mean = 0;

  return mean;
}

int main() {



  Student student;

  for (int i = 0; i < 3 ; i++) {
    printf("Digit your name: ");
    fgets(student.name, MAX, stdin);

    printf("Digit your firts grade: ");
    scanf("%f", &student.grade1[i]);

    printf("Digit your second grade: ");
    scanf("%f", &student.grade2[i]);
  }



  return 0;
}