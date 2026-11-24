// Q1: Input two numbers and display their sum.
#include <stdio.h>

int main() {
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Sum = %.2f\n", a + b);
    return 0;
}