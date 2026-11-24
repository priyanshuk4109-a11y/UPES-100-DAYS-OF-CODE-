// Q44: Find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
// 1st term = 1, then the i-th term (i >= 2) = (2i - 1) / (2i)
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
        if (i == 1)
            sum += 1;
        else
            sum += (2.0 * i - 1) / (2.0 * i);
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}