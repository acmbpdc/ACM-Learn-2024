#include <stdio.h>
#include <string.h>

int main() {
    char firstname[100];
    char lastname[100];
    char firstname_copy[100];
    char lastname_copy[100];

    char full_name[200];

    printf("Enter your first name: ");
    gets(firstname);
    strcpy(firstname_copy, firstname);
    printf("Enter Last name: ");
    gets(lastname);
    strcpy(lastname_copy, lastname);
    strcat(firstname, "-");
    strcat(firstname, lastname);
    strcpy(full_name, firstname);

    int length = strlen(full_name);

    printf("First name: %s\n", firstname);
    printf("First name copy: %s\n", firstname_copy);
    printf("Last name: %s\n", lastname);
    printf("Last name copy: %s\n", lastname_copy);
    printf("Full name: %s\n", full_name);
    printf("Length of full name: %d\n", length);
    
    return 0;
}
