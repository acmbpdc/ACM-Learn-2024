#include <stdio.h>

int main() {
    int var = 42;
    int *ptr;  // Declare a pointer to an integer

    ptr = &var;  // Store the address of var in ptr

    printf("Address of var: %p\n", &var);  // Print the address of var
    printf("Address stored in ptr: %p\n", ptr);  // Print the address stored in ptr
    printf("Value of var using ptr: %d\n", *ptr);  // Dereference ptr to access the value of var

    return 0;
}
