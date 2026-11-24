// Q86: Check if a string is a palindrome.
#include <stdio.h>

#define MAX 200

int main() {
    char str[MAX];
    int len = 0, i, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\"%s\" is a Palindrome\n", str);
    else
        printf("\"%s\" is Not a Palindrome\n", str);

    return 0;
}