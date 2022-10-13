// Program to delete a number from a given location in an array
#include <stdio.h>

main() {
     int length, position;
     printf("Enter number of elements in the array: \n");
     scanf("%d",&length);

        // Declare array of specified length
        int array[length];

        // Enter the elements into the array
       printf("Enter %d elements:\n",length);
       for(int i=0; i < length;i++)
       scanf("%d", &array[i]); 


    // Enter the position of the value to be deleted
    printf("Enter the position of the element to be deleted in the array: \n");
    scanf("%d", &position);

    // Check whether the deletion is possible or not
    if (position >= length)
    {
        printf("Deletion is not possible.\n");
    }
    else 
    {
        // Use for loop to delete the element and update the index
        for (int i = position; i < length - 1; i++) {
            array[i] = array[i + 1]; 
        }
    }

    // Update length of array
    length -= 1;

    printf("\n The resultant array is: \n");

    // Display the elements of the updated array

    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

}
    

