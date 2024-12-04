// operator_calculator.c
#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero!\n");
            return 1;
        }
    } else {
        printf("Invalid operator!\n");
        return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
