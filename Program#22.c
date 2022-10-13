// C program to find the sum of two matrices of order 2*2(2 by 2 matrices)

#include <stdio.h>
int main()
{
  int row, column;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &row, &column);

  float a[row][column];

  float b[row][column];

  // initialize the two arrays
  float result[row][column];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
        result[i][j] = 0.0;
    }
  }
  


  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }
  }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }
  }


  // adding corresponding elements of two arrays
  for (int  i = 0; i < row; ++i) 
  {
    for (int j = 0; j < column; ++j) 
    {
      result[i][j] = a[i][j] + b[i][j];
    }
  } 
 

  // Displaying the sum
  printf("\nSum Of Matrix:\n");

  for (int  i = 0; i < row; ++i) {
    for (int  j = 0; j < column; ++j)
    {
      printf("%.1f\t", result[i][j]);
    }
    printf("\n");
  }
   return 0;
}