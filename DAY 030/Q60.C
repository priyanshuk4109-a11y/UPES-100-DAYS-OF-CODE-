// Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, i, positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements     = %d\n", zero);
    return 0;
}