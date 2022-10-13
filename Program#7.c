// Program to insert a value in the middle of an array
#include <stdio.h>

main() {
     int length, position, value;
     printf("Enter number of elements in the array: \n");
     scanf("%d",&length);

        // Declare array of specified length
        int array[length];

       printf("Enter %d elements:\n",length);
       for(int i=0; i < length;i++)
       scanf("%d", &array[i]); 

    // Enter the position of the new value
    printf("Enter the position of the new element in the array: \n");
    scanf("%d", &position);

    printf("Enter the new value of the new element: \n");
    scanf("%d", &value);

    // Inserting the new value
    for (int i = length-1; i >= position; i--)
    {
        
        array[i + 1] = array[i];
    }

    array[position] = value;
    
    // Update length of array
    length += 1;

    // Display the elements of the updated array
    printf("The array after insertion of %d...\n", value);

    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

}
    
