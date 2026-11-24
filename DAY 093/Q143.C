// Q143: Find and print the student with the highest marks.
#include <stdio.h>

#define MAX 50

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX];
    int n, i, top = 0;

    printf("Enter number of students (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid number! Enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("  Name: ");
        scanf(" %49[^\n]", students[i].name);
        printf("  Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("  Marks: ");
        scanf("%f", &students[i].marks);

        if (students[i].marks > students[top].marks)
            top = i;
    }

    printf("\nStudent with the highest marks\n");
    printf("Name    : %s\n", students[top].name);
    printf("Roll No : %d\n", students[top].roll_no);
    printf("Marks   : %.2f\n", students[top].marks);

    return 0;
}