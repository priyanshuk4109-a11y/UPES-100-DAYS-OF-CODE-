// Q8: Find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %lld\n", n, sum);
    return 0;
}