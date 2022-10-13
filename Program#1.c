// Program to read and display n numbers using an array
#include <stdio.h>

main() {
    // declare variable to store the number of elements n
    int number;

    printf("Enter the number of elements(n)/numbers:\n ");
    scanf("%d", &number);

    // initialization of required array
    int arr[number];

    // reading input and storing it in an array
    for (int i = 0; i < number; ++i)
    {
        scanf("%d", &arr[i]);
  }

  printf("Displaying numbers: \n");

  // printing elements of an array
for(int i = 0; i < number; ++i) {
     printf("%d\n", arr[i]);
  }
}