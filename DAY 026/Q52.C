// Q52: Print the following pattern:
// Stars are printed one per line in groups of 1, 3, 5, 3, 1
// with a blank line between the groups.
#include <stdio.h>

int main() {
    int n = 5;   // number of groups
    int i, j, count;

    for (i = 1; i <= n; i++) {
        // group size: 1, 3, 5, 3, 1
        if (i <= (n + 1) / 2)
            count = 2 * i - 1;
        else
            count = 2 * (n - i + 1) - 1;

        for (j = 0; j < count; j++) {
            printf("*\n");
        }

        if (i < n)
            printf("\n");   // blank line between groups
    }

    return 0;
}