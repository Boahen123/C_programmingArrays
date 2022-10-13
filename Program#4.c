// Program to find the second largest of n numbers using arrays

#include <stdio.h>

main() {
    // Declare and initialize number, sum and mean variables
  int number;
  float largest = 0;
  float second = 0;

  printf("Enter number of elements: ");
  scanf("%d", &number);

  // Initialize the array to store the numbers
  float numbers[number];

  for(int i=0; i < number; ++i) 
    {
    printf("Enter number%d: ",i+1);
    scanf("%f", &numbers[i]);
    }

  // Set the first two elements as the initial values
  if (numbers[0] > numbers[1])
  {
      largest = numbers[0];
      second = numbers[1];
  }
  else 
  {
      largest = numbers[1];
      second = numbers[0];
  }
  
  // loop from the third position onwards and modify the values of largest and second accordingly
  for (int i = 2; i < number; i++)
  {
    if (numbers[i]>largest)
    {
        second = largest;
        largest = numbers[i];
    }
    else if (numbers[i]>second)
    {
        second = numbers[i];
    }

    printf("The second largest number is %.2f", second);
  }
  
}