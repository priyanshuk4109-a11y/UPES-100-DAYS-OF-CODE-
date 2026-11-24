// Q31: Take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    long long n;
    long long p = 1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    // Find the highest power of 2 that is <= n
    while (p * 2 <= n) {
        p *= 2;
    }

    printf("Binary = ");
    while (p > 0) {
        if (n >= p) {
            printf("1");
            n -= p;
        } else {
            printf("0");
        }
        p /= 2;
    }
    printf("\n");

    return 0;
}