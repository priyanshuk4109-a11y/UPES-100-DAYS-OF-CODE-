// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Size { SMALL = 1, MEDIUM = 5, LARGE = 10 };

int main() {
    enum Size s = MEDIUM;

    printf("SMALL  = %d\n", SMALL);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("LARGE  = %d\n", LARGE);

    // Enum values behave like integers, so arithmetic works on them
    printf("SMALL + MEDIUM + LARGE = %d\n", SMALL + MEDIUM + LARGE);
    printf("Variable s holds the integer %d\n", s);
    printf("Size of an enum variable = %zu bytes\n", sizeof(s));

    return 0;
}