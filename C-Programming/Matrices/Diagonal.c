#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int i, j, row, col;

    // Input for matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Input for matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Displaying diagonal elements
    printf("\nDiagonal Elements of the Matrix are:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
