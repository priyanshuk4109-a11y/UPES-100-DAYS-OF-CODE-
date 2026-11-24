// Q41: Swap the first and last digit of a number.
#include <stdio.h>

int main() {
    long long num, temp, power = 1, first, last, middle, result;
    int digits = 0, negative = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        negative = 1;
        num = -num;
    }

    // Count digits and find 10^(digits-1)
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
        digits++;
    }
    digits++;

    if (digits == 1) {
        result = num;   // single digit: nothing to swap
    } else {
        first = num / power;
        last = num % 10;
        middle = (num % power) - last;   // middle digits (already shifted by one place)
        result = last * power + middle + first;
    }

    if (negative)
        result = -result;

    printf("Number after swapping first and last digit = %lld\n", result);
    return 0;
}