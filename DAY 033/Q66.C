// Q66: Insert an element in a sorted array at the appropriate position.
// The array must be entered in ascending order.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX + 1];
    int n, i, x, pos;

    printf("Enter number of elements (max %d): ", MAX - 1);
    scanf("%d", &n);

    if (n < 1 || n > MAX - 1) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX - 1);
        return 1;
    }

    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Find the position where x should go
    pos = 0;
    while (pos < n && arr[pos] < x) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}