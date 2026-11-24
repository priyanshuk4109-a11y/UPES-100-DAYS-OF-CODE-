// Q30: Reverse a given number.
#include <stdio.h>

int main() {
    long long num, temp, reversed = 0;
    int negative = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num;
    if (temp < 0) {
        negative = 1;
        temp = -temp;
    }

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (negative)
        reversed = -reversed;

    printf("Reversed number = %lld\n", reversed);
    return 0;
}