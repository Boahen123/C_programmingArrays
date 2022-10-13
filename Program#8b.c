/* C Program to to insert a number in an array that is already stored in ascending order */

#include  <stdio.h>
// Recheck
main( )
{
int  a[20], i, n, size, pos, element;

printf("Enter the Numbers of elements: ") ;
scanf("%d",&size);

printf("\n Enter the element of array in Ascending Order : \n") ;
for (i = 1;i <= size;i++)
scanf("%d ", &a[i]) ;

printf("\n Array enter by user is :\n") ;
for ( i = 1 ;i <= size; i++)
printf("%d \t", a[i]) ;

printf("\n Enter the element you want to insert :") ;
scanf("%d ", &element) ;

for ( i = size;i > 0;i--)
{
    if ( a[i] >= element)
    {
        a[i+1] = a[i] ;
        pos = i ;
    }
}

a[pos] = element ;
printf("\n Array After Inserting element :\n") ;

for (i = 1 ; i <= size+1 ; i++)
        printf("%d \t",a[i]) ;

}
