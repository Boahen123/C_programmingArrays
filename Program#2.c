// Program to find the average of n numbers using arrays

#include <stdio.h>

main() {
    // Declare and initialize number, sum and mean variables
  int number;
  float sum = 0;
  float mean = 0;

  printf("Enter number of elements: ");
  scanf("%d", &number);

  // Initialize the array to store the numbers
  float numbers[number];

  for(int i=0; i < number; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%f", &numbers[i]);
}

    // Calculate the sum
    for (int i = 0; i < number; i++)
    {
        sum += numbers[i];
    }

    // number = (float)number;
    mean = sum / (float)number;
    printf("The mean = %.2f", mean);
}
