// Q54: Print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
#include <stdio.h>

int main() {
    int n = 4;   // rows in the upper half (the widest row has 2n-1 stars)
    int i, j;

    // Upper half (including the widest row)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}