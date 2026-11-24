// Q63: Merge two arrays (second array is appended after the first).
#include <stdio.h>

#define MAX 100

int main() {
    int a[MAX], b[MAX], merged[2 * MAX];
    int n1, n2, i, k = 0;

    printf("Enter size of first array (max %d): ", MAX);
    scanf("%d", &n1);
    printf("Enter size of second array (max %d): ", MAX);
    scanf("%d", &n2);

    if (n1 < 1 || n1 > MAX || n2 < 1 || n2 > MAX) {
        printf("Invalid size! Enter values between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements of first array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        merged[k++] = a[i];
    }

    printf("Enter %d elements of second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        merged[k++] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}