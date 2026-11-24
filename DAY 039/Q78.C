// Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int n, i, j;
    long long sum = 0;

    printf("Enter order of the square matrix (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += mat[i][i];
    }

    printf("Sum of main diagonal elements = %lld\n", sum);
    return 0;
}