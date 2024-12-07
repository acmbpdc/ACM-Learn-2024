#include <stdio.h>

int main() {
    int studentId;
    char name[100];
    float marks;
    char grade;

    // Taking input from user
    printf("Enter student ID: ");
    scanf("%d", &studentId);
    
    printf("Enter student name: ");
    scanf("%s", name);
    
    printf("Enter marks: ");
    scanf("%f", &marks);
    
    printf("Enter grade: ");
    scanf(" %c", &grade);  // Note the space before %c to consume the leftover newline character
    
    // Displaying output
    printf("\nStudent Details:\n");
    printf("ID: %d\n", studentId);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}

