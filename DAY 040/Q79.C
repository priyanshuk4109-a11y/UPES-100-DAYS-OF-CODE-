// Q79: Perform diagonal traversal of a matrix.
// Each diagonal (running from top-right to bottom-left) is printed on its own line.
// Example: 1 2 3 / 4 5 6 / 7 8 9  ->  1 | 2 4 | 3 5 7 | 6 8 | 9
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int r, c, i, j, s;

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

    printf("Diagonal traversal:\n");
    for (s = 0; s <= r + c - 2; s++) {       // s = i + j for each diagonal
        for (i = 0; i < r; i++) {
            j = s - i;
            if (j >= 0 && j < c) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}