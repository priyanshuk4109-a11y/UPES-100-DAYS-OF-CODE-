// Q2: Input two numbers and display sum, difference, product and quotient.
// Division by zero is handled.
#include <stdio.h>

int main() {
    double a, b;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Sum        = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product    = %.2f\n", a * b);

    if (b == 0)
        printf("Quotient   = Undefined (division by zero)\n");
    else
        printf("Quotient   = %.2f\n", a / b);

    return 0;
}