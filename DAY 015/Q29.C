// Q29: Calculate the factorial of a number.
// Note: unsigned long long can hold factorials only up to 20!.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (n > 20) {
        printf("Number too large! This program supports n up to 20.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}