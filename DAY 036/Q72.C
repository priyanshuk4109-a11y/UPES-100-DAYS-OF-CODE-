// Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int r, c, i, j;
    long long sum = 0;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &r, &c);

    if (r < 1 || r > MAX || c < 1 || c > MAX) {
        printf("Invalid size! Rows and columns must be between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements = %lld\n", sum);
    return 0;
}