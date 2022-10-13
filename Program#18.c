//In a small company there are five salesmen. Each salesman is supposed to sell three products. 
// Write a program using a 2D array to print (i) the total sales by each salesman and 
// total sales of each item.

#include <stdio.h>

main()
{

    int sales[3][5];
    int i, j, total_salesman, total_items;

    printf("Enter sales for each salesman");
    for (i = 0; i < 5; ++i)
    {
        printf("\nEnter the sales for salesman #%d: \n", i+1);
        for (j = 0; j < 3; ++j)
        {
            printf("Enter his sale for item #%d: ", j + 1);
            scanf("%d", &sales[j][i]);
        }
    }

    for (i = 0; i < 5; ++i)
    {
        total_salesman = 0;
        for (j = 0; j < 3; ++j) 
        {
            total_salesman += sales[j][i];
        }
        printf("\nTotal sales for salesman #%d is %d", i+1, total_salesman);
    }

    printf("\n\n");

    for (i = 0; i < 3; ++i){
        total_items = 0;
        for (j = 0; j < 5; ++j) {
            total_items += sales[i][j];
        }
        printf("\nTotal sales for item #%d is %d", i+1, total_items);
    }


   
}