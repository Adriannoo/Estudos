#include <stdio.h>

void upperCase(char *);

void upperCase(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s -= 32;
        }
        s++;
    }

}

int main(){
    char string[] = "adriano";

    printf("\nString antes da conversao %s\n", string);

    upperCase(string);


    printf("\nString apos a conversao %s\n", string);

    return 0;
}

