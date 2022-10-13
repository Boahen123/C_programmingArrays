// Program to find the transpose of a 3*3 matrix

#include <stdio.h>

main() {
  int A[10][10], transpose[10][10], row, column;
  printf("Enter rows and columns: ");
  scanf("%d %d", &row, &column);

  // assigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    printf("Enter element A%d%d: ", i + 1, j + 1);
    scanf("%d", &A[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < row; ++i) {
  for (int j = 0; j < column; ++j) {
    printf("%d  ", A[i][j]);
  }
  printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < row; ++i)
  for (int j = 0; j < column; ++j) {
    transpose[j][i] = A[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < column; ++i) {
    
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
  }
    printf("\n");
  }
  // return 0;
}
