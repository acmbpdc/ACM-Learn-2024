#include <stdio.h>

// Function to count occurrences of a character in a string
int countOccurrences(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count occurrences: ");
    scanf(" %c", &c);
    
    printf("The character '%c' appears %d times in the string.\n", c, countOccurrences(str, c));
    
    return 0;
}
