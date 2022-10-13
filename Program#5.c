// Program to form a number using n digits in an array

#include <stdio.h>
// re-check
main() {
    
  unsigned long long int number = 0;
  int size;

  printf("Enter number of digits: ");
  scanf("%d", &size);

  // Initialize the array to store the digits
  int digits[size];

  for(int i=0; i < size; ++i) 
  {
    printf("Enter digit%d: ",i+1);
    scanf("%d", &digits[i]);
  }

  for (int j = 0; j < size; j++)
  {
    number = number * 10 + digits[j];
  }

  printf("The number formed is %llu.", number);
}