// Q77: Check if the elements on the (main) diagonal of a matrix are distinct.
#include <stdio.h>

#define MAX 10

int main() {
    int mat[MAX][MAX];
    int r, c, i, j, d, distinct = 1;

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

    d = (r < c) ? r : c;   // number of diagonal elements

    for (i = 0; i < d && distinct; i++) {
        for (j = i + 1; j < d; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("Diagonal elements are Distinct\n");
    else
        printf("Diagonal elements are Not Distinct\n");

    return 0;
}