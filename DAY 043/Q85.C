// Q85: Reverse a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX], temp;
    int len = 0, i, j;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}