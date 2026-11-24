// Q47: Print the following pattern:
// *
// **
// ***
// ****
// *****
#include <stdio.h>

int main() {
    int n = 5;   // change n to resize the pattern
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}