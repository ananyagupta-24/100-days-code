//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows];  

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        int sum = 0;  
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        rowSums[i] = sum;  
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSums[i]);
    }

    return 0;
}
