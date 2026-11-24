// Q83: Count vowels and consonants in a string.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX], ch;
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}