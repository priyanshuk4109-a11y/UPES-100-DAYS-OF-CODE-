// Q22: Find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    double cp, sp;

    printf("Enter cost price: ");
    scanf("%lf", &cp);
    printf("Enter selling price: ");
    scanf("%lf", &sp);

    if (cp <= 0 || sp < 0) {
        printf("Invalid input! Cost price must be positive.\n");
        return 1;
    }

    if (sp > cp) {
        printf("Profit = %.2f\n", sp - cp);
        printf("Profit Percentage = %.2f%%\n", (sp - cp) / cp * 100);
    } else if (cp > sp) {
        printf("Loss = %.2f\n", cp - sp);
        printf("Loss Percentage = %.2f%%\n", (cp - sp) / cp * 100);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}