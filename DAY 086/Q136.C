// Q136: Use an enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
// and perform the operations using switch.
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice;
    double a, b;

    printf("Menu:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (choice) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}