// program to read a 2D array marks which stores the marks of five students in three subjects. 
// Display the highest marks in each subject

#include <stdio.h>

main() {
       float marks[3][5];

       // Read the marks
       for (int i = 0; i < 3; i++)
       {
           printf("\nEnter the results of each student in %s", (i == 0) ? ("Maths") : ((i == 1) ? ("English") : ("IT")));
           for (int j = 0; j < 5; j++)
           {
               printf("\nEnter the result for student #%d: ", j + 1);
               scanf("%f", &marks[i][j]);
           }
        
       }

       // initializing variables to store highest values
       float math_high = 0.0, eng_high=0.0, it_high=0.0;

       // Traverse through the array and find the highest mark in math
       for (int i = 0; i < 3; i++)
       {
        if (i == 0)
        {
            math_high = marks[0][0];
            for (int j = 0; j < 5; j++)
            {
                if (marks[0][j] > math_high)
                {
                    math_high = marks[0][j];
                }
                
            }
            
        }

        // Traverse through the array and find the highest mark in English
        if (i == 1)
        {
            eng_high = marks[1][0];
            for (int j = 0; j < 5; j++)
            {
                if (marks[1][j] > eng_high)
                {
                    eng_high = marks[1][j];
                }
                
            }
            
        }

        // Traverse through the array and find the highest mark in IT
        if (i == 2)
        {
            for (int j = 0; j < 5; j++)
            {
                it_high = marks[2][0];
                if (marks[2][j] > it_high)
                {
                    it_high = marks[2][j];
                }
                
            }
            
        }
        
       }

       printf("\n\n");
       printf("The highest mark in Math: %.1f\n", math_high);
       printf("The highest mark in English: %.1f\n", eng_high);
       printf("The highest mark in IT: %.1f", it_high);

}