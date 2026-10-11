/*
Programm 23    write a program to two matrices of the same order , matrix addition , and display the resultant matrix
solution 2  using while loop 
*/


#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
   int i,j;
   printf("Enter element of matrix A:\n");
   i=0;
    while(i<3)
    {
        scanf("%d", & a[i][j]);
        j++;
    } 
    printf("Enter the element of matrix B:\n");
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            scanf("%d", & b[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            c[i][j] = a[i][j] + b[i][j];
            j++;
        }
        i++;
    }
    printf("\nThe resultant matrix is:\n");
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            printf("%d ", c[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}