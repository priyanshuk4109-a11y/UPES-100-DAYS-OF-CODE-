// Q18: Accept a percentage (0-100) and assign a grade.
// 90-100: A | 80-89: B | 70-79: C | 60-69: D | below 60: F
#include <stdio.h>

int main() {
    double percentage;

    printf("Enter percentage (0-100): ");
    scanf("%lf", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Enter a value between 0 and 100.\n");
        return 1;
    }

    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}