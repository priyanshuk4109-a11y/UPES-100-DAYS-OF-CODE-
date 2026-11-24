// Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

#define N 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("  Name: ");
        scanf(" %49[^\n]", students[i].name);
        printf("  Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("  Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nAll Student Details\n");
    for (i = 0; i < N; i++) {
        printf("%d. Name: %s | Roll No: %d | Marks: %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}