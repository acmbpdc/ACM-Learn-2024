#include <stdio.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    // Base case: if the start index is greater or equal to end index
    if (start >= end) {
        return;
    }
    
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    reverseString(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    
    return 0;
}
