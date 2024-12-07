#include <stdio.h>

// Recursive function to calculate power of a number
int power(int base, int exp) {
    // Base case: if exponent is 0, return 1
    if (exp == 0) {
        return 1;
    }
    
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    
    printf("%d raised to the power %d is: %d\n", base, exp, power(base, exp));
    
    return 0;
}
