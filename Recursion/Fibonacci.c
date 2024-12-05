#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)  // Base case
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive calls
}

int main() {
    int n = 7;
    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}
