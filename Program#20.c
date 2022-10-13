// Program to read and display 3*3 matrix

#include <stdio.h>
int main()
{
  // Declare two 3by3 matrices A and B as 2d arrays
  float A[3][3], B[3][3];



  // Taking input using nested for loop, matrix A
  printf("");
  for (int row = 0; row < 3; ++row) {
    for (int column = 0; column < 3; ++column)
    {
      printf("Enter A%.0f%.0f: ", row + 1.0, column + 1.0);
      scanf("%f", &A[row][column]);
    }
  }

  // Displaying the 3by3 matrix
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; ++j)
    {
      printf("%.1f\t", A[i][j]);
    }
    printf("\n");
  }

}