#include <stdio.h>

// Function to find the larger number
int findLarger(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Larger number: %d\n", findLarger(num1, num2));
    return 0;
}
