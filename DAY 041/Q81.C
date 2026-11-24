// Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters = %d\n", count);
    return 0;
}