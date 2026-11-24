// Q10: Input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    long total, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &total);

    if (total < 0) {
        printf("Time cannot be negative.\n");
        return 1;
    }

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%ld seconds = %02ld:%02ld:%02ld\n", total, hours, minutes, seconds);
    return 0;
}