#include <stdio.h>

// Function to swap two values using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value at address a in temp
    *a = *b;        // Copy the value at address b to address a
    *b = temp;      // Copy the value stored in temp to address b
}

int main() {
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Passing addresses of x and y
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
