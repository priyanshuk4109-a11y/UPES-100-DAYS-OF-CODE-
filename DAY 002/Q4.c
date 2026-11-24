// Q4: Calculate the area and circumference of a circle.
#include <stdio.h>

#define PI 3.14159265358979

int main() {
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Area          = %.2f\n", PI * radius * radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);
    return 0;
}