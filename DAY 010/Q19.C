// Q19: Classify a triangle as Equilateral, Isosceles, or Scalene based on side lengths.
#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle\n");
        return 1;
    }

    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");

    return 0;
}