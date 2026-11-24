// Q36: Find the HCF (GCD) of two numbers using the Euclidean algorithm.
#include <stdio.h>

int main() {
    long long a, b, temp;

    printf("Enter two numbers: ");
    scanf("%lld %lld", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0) {
        printf("HCF is not defined for 0 and 0\n");
        return 1;
    }

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) = %lld\n", a);
    return 0;
}