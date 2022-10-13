// Program to insert a number in an already sorted array in ascending order

#include <stdio.h>

main(){

  int i, j, a, size, sorted[30];
  int index = 0;
  int number;
  printf("Enter the number of elements in the array:");
  scanf("%d", &size);

  printf("Enter the numbers: \n");
  for (i = 0; i < size; ++i) {
      printf("array element #%d = ", i+1);
      scanf("%d", &sorted[i]);
  }
  for (i = 0; i < size; ++i) { 
      for (j = i + 1; j < size; ++j){
          if (sorted[i] > sorted[j]){
              a =  sorted[i];
              sorted[i] = sorted[j];
              sorted[j] = a;
          }
      }
  }

  printf("The numbers are arranged in ascending order below \n");
  for (i = 0; i < size; ++i)
      printf("%d\t", sorted[i]);

  printf("\nEnter the element to be inserted: ");
  scanf("%d", &number);

  // Find index where element should be inserted.
  for(i=0; i<size; i++){
      if(sorted[i] < number)
      {
        index++;
      }
      else
      {
          break;
      }
  }
  printf("%d should be entered at position %d", number, index);

  // Use a  loop structure to move all elements right by 1 position having
  // index greater than position where to insert element 

  for(i=size-1;i >= index; i--){
      sorted[i+1] = sorted[i];
  }

  // Insert element at given position
  sorted[index] = number;

  // Finally, print new array after insertion of new element
  printf("\nThe new array is : ");
  for(i=0; i <= size; i++) {
      printf("%d\t ", sorted[i]);
  }

}

