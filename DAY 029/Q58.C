// Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, max, min;

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

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}