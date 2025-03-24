#include <stdio.h>

int main(){
  char string1[7];

  printf("Entre um nome ate 7 characters: ");
  scanf("%6s", string1);

  printf("%s", string1);
}