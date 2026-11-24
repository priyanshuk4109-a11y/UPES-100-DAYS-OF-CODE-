// Q89: Count frequency of a given character in a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX], target;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &target);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", target, count);
    return 0;
}