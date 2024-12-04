#include <stdio.h>

int main() {
    int arr[10], n;

    // Taking input for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input from the user to populate the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array in reverse order
    printf("\nReversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
