// Q34: Check if a number is prime.
#include <stdio.h>

int main() {
    long long n, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%lld is a Prime Number\n", n);
    else
        printf("%lld is Not a Prime Number\n", n);

    return 0;
}