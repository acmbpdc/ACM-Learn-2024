#include <stdio.h>

int main() {
    int arr[5] = {3, 10, 7, 15, 2};
    int largest = arr[0];

    // Finding the largest element in the array
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
