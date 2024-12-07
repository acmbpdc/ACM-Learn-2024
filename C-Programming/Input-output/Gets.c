#include <stdio.h>

int main() {
    char name[100];

    // Taking input using gets (deprecated)
    printf("Enter your name: ");
    gets(name); // Avoid using in practice; use fgets instead

    // Displaying output using puts
    printf("Hello, ");
    puts(name);  // Automatically adds a newline at the end

    return 0;
}
