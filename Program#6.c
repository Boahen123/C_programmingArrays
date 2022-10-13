// Program to find whether the array of integers contains a duplicate number
#include <stdio.h>

main() {
    int size;
    // Initialize flag = 0;(no duplicate), flag = 1(duplicate)
    int flag = 0;

    // Accept the size of the array
    printf("Enter the size of the integer array:\n");
    scanf("%d", &size);
    
    // Declare the array with the specified size
    int int_array[size];

    // Enter the elements of the array
    for (int i = 0; i < size; i++)
    {
        printf("Interger Array[%d] = ", i);
        scanf("%d", &int_array[i]);
    }

    // Statements to find the duplicate
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++)
        {
            if (int_array[i] == int_array[j] && i != j)
            {
                flag = 1;
                printf("Duplicate found at positions %d and %d!\n", i, j);
            }
            
        }
        
    }

    if (flag == 0)
    {
        printf("No duplicates found!");
    }
    
}