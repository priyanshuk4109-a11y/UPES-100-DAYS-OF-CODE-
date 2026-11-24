// Q33: Check if a number is an Armstrong number.
// Sum of each digit raised to the power of the number of digits equals the number.
#include <stdio.h>

int main() {
    long long num, temp, sum = 0, power;
    int digits = 0, i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    // Count digits
    temp = num;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    // Sum of digits raised to the power of 'digits'
    temp = num;
    while (temp > 0) {
        long long digit = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == num)
        printf("%lld is an Armstrong Number\n", num);
    else
        printf("%lld is Not an Armstrong Number\n", num);

    return 0;
}