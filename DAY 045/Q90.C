// Q90: Toggle case of each character in a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    str[i] = '\0';

    printf("Toggled string: %s\n", str);
    return 0;
}