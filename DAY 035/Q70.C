// Q70: Rotate an array to the right by k positions (in place, using reversal).
#include <stdio.h>

#define MAX 100

void reverse(int arr[], int left, int right) {
    int temp;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[MAX];
    int n, k, i;

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

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 0) {
        printf("k must be non-negative.\n");
        return 1;
    }

    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    printf("Array after rotating right by %d: ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}