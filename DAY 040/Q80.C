// Q80: Multiply two matrices.
#include <stdio.h>

#define MAX 10

int main() {
    int a[MAX][MAX], b[MAX][MAX], prod[MAX][MAX];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix (max %d): ", MAX);
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix (max %d): ", MAX);
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > MAX || c1 < 1 || c1 > MAX ||
        r2 < 1 || r2 > MAX || c2 < 1 || c2 > MAX) {
        printf("Invalid size! Rows and columns must be between 1 and %d.\n", MAX);
        return 1;
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible (columns of first != rows of second)\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}