// Program to print the elements of the 2D array

#include <stdio.h>

int main() {
    int i, j;

    int matrix[2][3] = {{2,3,4}, {7,8,9}};
    for(i=0;i<2; i++){
        for(j=0;j<3;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
