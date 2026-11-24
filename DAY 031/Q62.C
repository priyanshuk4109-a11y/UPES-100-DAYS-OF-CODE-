// Q62: Reverse an array without taking extra space (in-place swapping).
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, j, temp;

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

    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
