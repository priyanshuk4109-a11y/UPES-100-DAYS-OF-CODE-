// Q37: Find the LCM of two numbers.
// LCM = (a * b) / HCF
#include <stdio.h>

int main() {
    long long a, b, x, y, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%lld %lld", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers.\n");
        return 1;
    }

    // Find HCF using the Euclidean algorithm
    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    lcm = (a / hcf) * b;

    printf("LCM = %lld\n", lcm);
    return 0;
}