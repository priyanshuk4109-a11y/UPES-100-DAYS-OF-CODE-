// Q32: Check if a number is a palindrome.
#include <stdio.h>

int main() {
    long long num, temp, reversed = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("%lld is Not a Palindrome\n", num);
        return 0;
    }

    temp = num;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (reversed == num)
        printf("%lld is a Palindrome\n", num);
    else
        printf("%lld is Not a Palindrome\n", num);

    return 0;
}