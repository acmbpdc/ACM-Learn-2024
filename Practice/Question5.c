#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if the string is a palindrome using recursion
int isPalindrome(char str[], int start, int end) {
    // Base case: If start index crosses or equals the end index
    if (start >= end) {
        return 1;
    }
    
    // If the characters don't match, it's not a palindrome
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }
    
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
