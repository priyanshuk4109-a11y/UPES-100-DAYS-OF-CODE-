// Q45: Find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
// The i-th term = (2i) / (4i - 1)
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1);
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}// Q46: Print the following pattern:
// *****
// *****
// *****
// *****
// *****
#include <stdio.h>

int main() {
    int n = 5;   // change n to resize the pattern
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}