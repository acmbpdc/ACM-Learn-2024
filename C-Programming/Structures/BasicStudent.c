#include <stdio.h>

// Defining a structure to store student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
