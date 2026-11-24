// Q74: Find the transpose of a matrix.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX], trans[MAX][MAX];
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
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
