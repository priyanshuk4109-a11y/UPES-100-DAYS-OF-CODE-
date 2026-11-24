// Q38: Find the sum of digits of a number.
#include <stdio.h>

int main() {
    long long num, temp;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}