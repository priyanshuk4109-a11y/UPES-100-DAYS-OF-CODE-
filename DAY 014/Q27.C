// Q27: Print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, odd = 1;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum of first %d odd numbers = %lld\n", n, sum);
    return 0;
}