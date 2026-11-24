// Q140: Define a struct with an enum Gender and print the person's gender.
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;
    int g;

    printf("Enter name: ");
    scanf(" %49[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &g);

    if (g < MALE || g > OTHER) {
        printf("Invalid gender value!\n");
        return 1;
    }
    p.gender = (enum Gender)g;

    printf("\nName   : %s\n", p.name);
    printf("Age    : %d\n", p.age);
    printf("Gender : ");
    switch (p.gender) {
        case MALE:   printf("Male\n");   break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n");  break;
    }

    return 0;
}