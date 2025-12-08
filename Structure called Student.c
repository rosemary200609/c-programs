#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char className[20];
    int year;
    float totalMarks;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  // reads full name with spaces

    printf("Enter Class: ");
    scanf("%s", s.className);

    printf("Enter Year: ");
    scanf("%d", &s.year);

    printf("Enter Total Marks: ");
    scanf("%f", &s.totalMarks);

    printf("\n----- Student Details -----\n");
    printf("Roll No.: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Class: %s\n", s.className);
    printf("Year: %d\n", s.year);
    printf("Total Marks: %.2f\n", s.totalMarks);

    return 0;
}

