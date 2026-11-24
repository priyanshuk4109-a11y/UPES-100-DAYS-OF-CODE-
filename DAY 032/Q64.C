// Q64: Find the digit that occurs the most times in an integer number.
// If two digits tie, the smaller digit is reported.
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int d, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    do {
        count[num % 10]++;
        num /= 10;
    } while (num > 0);

    for (d = 1; d < 10; d++) {
        if (count[d] > count[maxDigit]) {
            maxDigit = d;
        }
    }

    printf("Digit %d occurs the most times (%d times)\n", maxDigit, count[maxDigit]);
    return 0;
}
