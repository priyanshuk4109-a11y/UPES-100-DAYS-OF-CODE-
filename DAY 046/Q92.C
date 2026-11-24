// Q92: Find the first repeating lowercase alphabet in a string.
// Scanning left to right, the first lowercase letter that has already been seen is reported.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int seen[26] = {0};
    int i = 0, found = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                printf("First repeating lowercase alphabet = %c\n", str[i]);
                found = 1;
                break;
            }
            seen[str[i] - 'a'] = 1;
        }
        i++;
    }

    if (!found)
        printf("No repeating lowercase alphabet found\n");

    return 0;
}