// Program to merge two unsorted arrays
#include <stdio.h>

#define MAX 40

main() { 

  int array1[MAX], array2[MAX], array3[MAX], size1, size2, size3, i, j;
  int k = 0;
  printf("Enter the number of elements for 1st array:");
  scanf("%d", &size1);


  // Read elements for array 1
  printf("\nEnter elements for first array:\n");
  for (i = 0; i < size1; ++i)
  {
  printf("array element #%d = ", i+1);
  scanf("%d", &array1[i]);
  }

  // Display the elements in the first array
  printf("\nElements in array1:");
  for (i = 0; i < size1; ++i) {
  printf("\t%d\t", array1[i]);
  }

  printf("\nEnter the number of elements for 2nd array:");
  scanf("%d", &size2);

  // // Read elements for array 2
  printf("\nEnter elements for second array:\n");
  for (j = 0; j < size2; ++j) 
  {
  printf("array element #%d = ", j+1);
  scanf("%d", &array2[j]);
  }

  // Display the elements in the  second array
  printf("\nElements in the 2nd array are:");
  for (j = 0; j < size2; ++j) 
  {
  printf("\t%d\t", array2[j]);
  }

  // Set the size of the resultant merged array
  size3 = size1 + size2;
  for(i=0; i < size1; i++)
  {
  array3[k] = array1[i];
  k++;
  }

  for(i=0;i < size2;i++)
  {
  array3[k] = array2[i];
  k++;
  }

  printf("\n\n The merged array is");
  for(i=0;i < size3;i++)
  printf("\n merged array[%d] = %d", i, array3[i]);

}
