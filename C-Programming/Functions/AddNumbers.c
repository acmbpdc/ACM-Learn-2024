#include <stdio.h>

// Function to add two numbers
void addNumbers(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    addNumbers(num1, num2);
    return 0;
}
