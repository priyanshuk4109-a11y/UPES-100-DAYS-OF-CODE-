// Q67: Insert an element in an array at a given position.
// Position is 1-based (1 = first position).
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

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}