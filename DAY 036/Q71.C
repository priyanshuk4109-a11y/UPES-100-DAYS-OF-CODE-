// Q71: Read and print a matrix.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int r, c, i, j;

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
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}