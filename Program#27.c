///A program which illustrates the use of a pointer to a three-dimensional array
#include <stdio.h>

main()
{
    int *ptr;

    int array[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    ptr = &array[0][0][0];

    // Displaying the elements of the pointer by dereferencing
    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    
 
}