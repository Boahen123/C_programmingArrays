// Program to display the elements in an array

#include <stdio.h>

main() {
    int element_number;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &element_number);
 
    // Accepting array values
    int numbers[element_number];
    for (int i = 0; i < element_number; i++)
    {
        printf("Enter element #%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Displaying array values
    printf("The elements of the array are: \n");
    for (int i = 0; i < element_number; i++)
    {
        printf("%d\t", numbers[i]);

    }
}