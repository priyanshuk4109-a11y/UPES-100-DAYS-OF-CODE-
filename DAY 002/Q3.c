// Q3: Calculate the area and perimeter of a rectangle.
#include <stdio.h>

int main() {
    double length, breadth;

    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter breadth: ");
    scanf("%lf", &breadth);

    printf("Area      = %.2f\n", length * breadth);
    printf("Perimeter = %.2f\n", 2 * (length + breadth));
    return 0;
}