#include <stdio.h>

// Defining a structure to store employee details
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee details
    printf("\nEmployee Database:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
