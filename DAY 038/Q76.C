// Q76: Check if a matrix is symmetric (a[i][j] == a[j][i] for all i, j).
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int r, c, i, j, symmetric = 1;

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

    if (r != c) {
        printf("Matrix is Not Symmetric (it is not a square matrix)\n");
        return 0;
    }

    for (i = 0; i < r && symmetric; i++) {
        for (j = 0; j < i; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}