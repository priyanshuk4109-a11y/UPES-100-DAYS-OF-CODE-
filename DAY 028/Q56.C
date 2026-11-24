// Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}