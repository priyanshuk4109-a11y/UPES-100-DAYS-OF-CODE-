// Q43: Check if a number is a strong number.
// A strong number equals the sum of factorials of its digits (e.g. 145 = 1! + 4! + 5!).
#include <stdio.h>

int main() {
    int num, temp, digit, i;
    long long sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is Not a Strong Number\n", num);
        return 0;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 2; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number\n", num);
    else
        printf("%d is Not a Strong Number\n", num);

    return 0;
}