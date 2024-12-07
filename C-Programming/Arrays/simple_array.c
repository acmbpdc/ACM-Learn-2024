#include <stdio.h>

int main() {
    // Declaring and initializing an array of 5 integers
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Printing the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
