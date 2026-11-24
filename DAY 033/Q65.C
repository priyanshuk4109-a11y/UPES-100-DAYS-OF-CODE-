// Q65: Search in a sorted array using binary search.
// The array must be entered in ascending order.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, key, low, high, mid, found = 0;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element %d not found\n", key);

    return 0;
}
