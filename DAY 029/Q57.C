// Q57: Find the sum of array elements.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i;
    long long sum = 0;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %lld\n", sum);
    return 0;
}