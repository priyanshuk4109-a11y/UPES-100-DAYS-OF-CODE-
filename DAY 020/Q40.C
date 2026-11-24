// Q40: Find the 1's complement of a binary number and print it.
// Input is a binary number made of 0s and 1s (max 18 digits).
// The output keeps the same number of digits as the input.
#include <stdio.h>

int main() {
    long long num, temp, divisor = 1;
    int digits = 0, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    if (num < 0) {
        printf("Invalid binary number!\n");
        return 1;
    }

    // Validate digits and count them
    temp = num;
    do {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number! Only 0 and 1 are allowed.\n");
            return 1;
        }
        digits++;
        temp /= 10;
    } while (temp > 0);

    // divisor = 10^(digits-1), so we can read digits from the left
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }

    printf("1's complement = ");
    while (divisor > 0) {
        digit = (num / divisor) % 10;
        printf("%d", digit == 0 ? 1 : 0);
        divisor /= 10;
    }
    printf("\n");

    return 0;
}