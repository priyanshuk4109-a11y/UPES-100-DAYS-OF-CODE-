// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
// (SUCCESS = 0, FAILURE = 1, TIMEOUT = 2)
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    int value;
    enum Status status;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &value);

    if (value < SUCCESS || value > TIMEOUT) {
        printf("Invalid status value!\n");
        return 1;
    }
    status = (enum Status)value;

    switch (status) {
        case SUCCESS: printf("Operation completed successfully\n"); break;
        case FAILURE: printf("Operation failed\n");                 break;
        case TIMEOUT: printf("Operation timed out\n");              break;
    }

    return 0;
}