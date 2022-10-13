/*
 * C Program to merge two sorted arrays using for loop
 */
 
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i, size1, j, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int array1[size1];
    printf("Enter the elements of the first array: \n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int array2[size2];
    printf("Enter the elements of the second array: \n");
    for (j = 0; j < size2; j++)
    {
        scanf("%d", &array2[j]);
    }


    int array3[size1 + size2];
    i = j = 0;
    int k;
    for (k = 0; k < size1 + size2; k++)
    {
        if (i < size1 && j < size2)
        {
            if (array1[i] < array2[j])
            {
                array3[k] = array1[i];
                i++;
            }
            else
            {
                array3[k] = array2[j];
                j++;
            }
        }
        else if (i < size1)
        {
            array3[k] = array1[i];
            i++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
        }
    }
    printf("The merged array is: \n");
    for (k = 0; k < size1 + size2; k++)
    {
        printf("%d ", array3[k]);
    }
    printf("\n");
}