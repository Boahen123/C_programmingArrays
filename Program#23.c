// Program to compute the matrix multiplication where possible for two matrices

#include <stdio.h>

main() {
    // Declare variable to store the row and column for matrix A and B respectively
    int rowA, columnA, rowB, columnB;

    // Specify rows and columns for matrix A and B
    printf("Enter the number of rows and columns for matrix A(First matrix): ");
    scanf("%d%d", &rowA, &columnA);

    printf("Enter the number of rows and columns for matrix B(Second matrix): ");
    scanf("%d%d", &rowB, &columnB);


    // Declare matrix A and B as 2D arrays
    int A[rowA][columnA], B[rowB][columnB];

    // Accept elements of matrix A
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnA; j++)
        {
            printf("Enter A%d%d: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
        
    }

     // Accept elements of matrix B
    printf("\n\nEnter the elements of matrix B");
    for (int i = 0; i < rowB; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            printf("\nEnter B%d%d: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
        
    }

    // Check if multiplication is possible, do not continue unless columnA == rowB

  while (columnA != rowB) {
    printf("\nMatrix multiplication is not possible.");
    printf("Error! Enter rows and columns again.\n");
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &rowA, &columnA);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &rowB, &columnB);
  }
  

    int result[rowA][columnB];
    // initialize rowA by columnB matrix to all zeros which is the result
    for (int i = 0; i < rowA; ++i) 
    {
        for (int j = 0; j < columnB; ++j) 
        {
            result[i][j] = 0;
        }
    }

    // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < rowA; ++i) {
      for (int j = 0; j < columnB; ++j) 
      {
         for (int k = 0; k < columnA; ++k) 
         {
            result[i][j] = result[i][j] + A[i][k] * B[k][j];
          }
      }
   }

   // Display the result
   printf("The result of the matrix multiplication: \n");
   for (int i = 0; i < rowA; i++)
   {
    for (int j = 0; j < columnB; j++)
    {
    printf("%d\t", result[i][j]);
    }
    printf("\n");
  }

}
   
    
    
    

    

