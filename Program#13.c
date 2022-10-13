// Program to print the position of the smallest number in an array

#include <stdio.h>

main() {
    // declare variable to store the number of elements n
    int number;
    float smallest;

    printf("Enter the number of elements(n)/numbers:\n ");
    scanf("%d", &number);

      // Initialize the array to store the numbers
  float numbers[number];

  for(int i=0; i < number; ++i) {
    printf("Enter number%d: ", i+1);
    scanf("%f", &numbers[i]);
}
    smallest = numbers[0];

for (int i = 0; i < number; ++i)
{
    if (numbers[i] < smallest)
    {
        smallest = numbers[i];
    }
        
    }

    printf("The smallest number is %.2f.", smallest);
}
    