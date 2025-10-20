//Perform diagonal traversal of a matrix.
#include <stdio.h>

void printDiagonal(int matrix[][100], int rows, int cols, int startRow, int startCol) {
    int i = startRow;
    int j = startCol;

    while (i < rows && j < cols) {
        printf("%d ", matrix[i][j]);
        i++;
        j++;
    }
    printf("\n");
}

int main() {
    int rows, cols;

    printf("Enter number of rows (max 100): ");
    scanf("%d", &rows);

    printf("Enter number of columns (max 100): ");
    scanf("%d", &cols);

    int matrix[100][100];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of matrix:\n");

    for (int col = 0; col < cols; col++) {
        printDiagonal(matrix, rows, cols, 0, col);
    }

    for (int row = 1; row < rows; row++) {
        printDiagonal(matrix, rows, cols, row, 0);
    }

    return 0;
}

