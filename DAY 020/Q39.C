// Q39: Find the product of odd digits of a number.
#include <stdio.h>

int main() {
    long long num, temp;
    long long product = 1;
    int found = 0, digit;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        temp /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found in the number\n");

    return 0;
}