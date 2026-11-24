// Q17: Find the roots of a quadratic equation (ax^2 + bx + c = 0) and categorize them.
// Compile with: gcc Q17_quadratic_roots.c -o q17 -lm
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0)\n");
        return 1;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are Real and Distinct\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are Real and Equal\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are Complex (Imaginary)\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}