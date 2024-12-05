#include <stdio.h>

// Function to calculate the length of a string without using strlen
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Length of the string: %d\n", stringLength(str));
    
    return 0;
}
