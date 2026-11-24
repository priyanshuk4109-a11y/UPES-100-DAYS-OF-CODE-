// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX], ch;
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
            special++;
        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);
    return 0;
}