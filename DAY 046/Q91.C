// Q91: Remove all vowels from a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX], result[MAX], ch;
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';

    printf("String without vowels: %s\n", result);
    return 0;
}