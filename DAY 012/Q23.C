// Q23: Calculate library fine based on late days.
// First 5 days late: Rs.2/day | Next 5 days late: Rs.4/day
// Next 20 days late: Rs.6/day | More than 30 days: Membership Cancelled
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid number of days!\n");
        return 1;
    }

    if (days > 30) {
        printf("Membership Cancelled\n");
    } else {
        if (days <= 5) {
            fine = days * 2;
        } else if (days <= 10) {
            fine = 5 * 2 + (days - 5) * 4;
        } else {
            fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        }
        printf("Library Fine = Rs.%d\n", fine);
    }

    return 0;
}