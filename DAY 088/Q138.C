// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW, ORANGE, COLOR_COUNT };   // COLOR_COUNT = number of colors

int main() {
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW", "ORANGE" };
    int i;

    for (i = RED; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}