// Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX], rowSum[MAX];
    int r, c, i, j;

    printf("Enter number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &r, &c);

    if (r < 1 || r > MAX || c < 1 || c > MAX) {
        printf("Invalid size! Rows and columns must be between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    for (i = 0; i < r; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}