// Q61: Search for an element in an array using linear search.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, key, found = 0;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found\n", key);

    return 0;
}