// Q9: Calculate simple and compound interest.
// Compile with: gcc Q09_simple_and_compound_interest.c -o q9 -lm
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest (%%): ");
    scanf("%lf", &rate);
    printf("Enter time (years): ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow(1 + rate / 100, time) - principal;

    printf("Simple Interest   = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
    return 0;
}