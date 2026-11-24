// Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
             JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    const char *names[] = { "", "January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December" };
    enum Month m;
    int days;

    for (m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case FEBRUARY:
                days = 28;
                break;
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                days = 30;
                break;
            default:
                days = 31;
        }
        printf("%s has %d days\n", names[m], days);
    }

    return 0;
}