// Q25: Basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;
        case '-':
            printf("Result = %.2f\n", a - b);
            break;
        case '*':
            printf("Result = %.2f\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error: Division by zero\n");
            else
                printf("Result = %.2f\n", a / b);
            break;
        case '%':
            if ((int)b == 0)
                printf("Error: Modulo by zero\n");
            else
                printf("Result = %d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}