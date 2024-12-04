#include <stdio.h>

#define MAX 10

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int i, j, row, col;

    // Input for first matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding two matrices
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result matrix
    printf("\nResultant Matrix after addition:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
