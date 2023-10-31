#include <stdio.h>

int main() {
    int row, col;

    printf("Enter number of rows in matrix: ");
    scanf("%d", &row);
    printf("Enter number of columns in matrix: ");
    scanf("%d", &col);

    int matrix[row][col];
    int trans[col][row];
    int multi[row][row];

    // Input matrix elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element at row %d column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
    //Display original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    //Matrix multiuplication
    printf("Multiplication of matrix and transpose of matrix is: ");
    
      for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            multi[i][j] = 0;
            for (int k = 0; k < col; k++) {
                multi[i][j] += matrix[i][k] * trans[k][j];
            }
        }
    }

    printf("\nMatrix multiplication is \n");
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<row;j++)
    {
      printf("%d\t",multi[i][j]);
    }
    printf("\n");
  }
    

    return 0;
}
