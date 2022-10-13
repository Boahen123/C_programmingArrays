// Program to read and display a 3x3 matrix

#include <stdio.h>

int main() {
  int A[3][3];
  // int row, column;
  // printf("Enter rows and columns: ");
  // scanf("%d %d", &row, &column);

  // assigning elements to the matrix
  printf("\nEnter the 9 matrix elements:\n");
  for (int i = 0; i < 3; ++i)
  for (int j = 0; j < 3; ++j) {
    printf("Enter element A%d%d: ", i + 1, j + 1);
    scanf("%d", &A[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      printf("%d  ", A[i][j]);
      // if (j == c - 1)
      // printf("\n");
    }
    printf("\n");
  }
}