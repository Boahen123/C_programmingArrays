// Program to fill the lower fill a square matrix with value zero on the diagonals, 
// 1 on the upper right triangle, and –1 on the lower left triangle

#include <stdio.h>

main() {
    // Get order of the square matrix from the user
    int order;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &order);

    int square[order][order];

    // Doing the filling
    for (int row = 0; row < order; row++)
    {
        for (int column = 0; column < order; column++)
        {
            if (row == column)
            {
                square[row][column] = 0;
            }
            else if (row > column)
            {
                square[row][column] = -1;
            }
            else 
            {
                square[row][column] = 1;
            }
            
        }
        
    }
    
    // Printing the square matrix
    for (int row = 0; row < order; row++)
    {
        for (int column = 0; column < order; column++)
        {
            printf("%3d", square[row][column]);
        }
        printf("\n");
        }
    
}