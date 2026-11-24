// Q82: Print each character of a string on a new line.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
