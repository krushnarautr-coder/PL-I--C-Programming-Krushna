/*
Program    write a program to read 2 matrices of the same order perform matrice addition and display the resultant matrix 
solution 3    using do while loop 
*/



#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i,j;
    printf("Enter element of matrix A:\n");
    i=0;
    do
    {
        j=0;
        do
        {
            scanf("%d", & a[i][j]);
            j++;
        }while(j<3);
        i++;
    }while(i<3);
    printf("Enter the element of matrix B:\n");
    i=0;
    do
    {
        j=0;
        do
        {
            scanf("%d", & b[i][j]);
            j++;
        }while(j<3);
        i++;
    }
    while(i<3);
    i=0;
    do
    {
        j=0;
        do
        {
            c[i][j] = a[i][j] + b[i][j];
            j++;
        }while(j<3);
        i++;
    }while(i<3);
    printf("\nThe resultant matrix is:\n");
    i=0;
    do
    {
        j=0;
        do
        {
            printf("%d ", c[i][j]);
            j++;
        }while(j<3);
        printf("\n");
        i++;
    }while(i<3);
    return 0;

}