// Q69: Find the second largest element in an array.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, first, second = 0, hasSecond = 0;

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

    first = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            hasSecond = 1;
            first = arr[i];
        } else if (arr[i] < first && (!hasSecond || arr[i] > second)) {
            second = arr[i];
            hasSecond = 1;
        }
    }

    if (hasSecond)
        printf("Second largest element = %d\n", second);
    else
        printf("There is no second largest element\n");

    return 0;
}