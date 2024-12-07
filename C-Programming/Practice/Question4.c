#include <stdio.h>

// Function to calculate sum of elements in an array using pointers
int sumOfArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); // Using pointer to access elements
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sum of elements in the array: %d\n", sumOfArray(arr, n));
    
    return 0;
}
