// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
    str[i] = '\0';

    printf("Modified string: %s\n", str);
    return 0;
}