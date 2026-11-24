// Q145: Return a structure containing the top student's details from a function.
#include <stdio.h>

#define MAX 50

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Returns a copy of the student with the highest marks
struct Student getTopStudent(struct Student students[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks)
            top = i;
    }
    return students[top];
}

int main() {
    struct Student students[MAX], top;
    int n, i;

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
    }

    top = getTopStudent(students, n);

    printf("\nTop Student\n");
    printf("Name    : %s\n", top.name);
    printf("Roll No : %d\n", top.roll_no);
    printf("Marks   : %.2f\n", top.marks);

    return 0;
}