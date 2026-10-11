/* 
Program22    Write a program to read two matrices of the same order, perform matrix adddition ,and display the resultant matrix using a two dimension array
solution 1  using for loop
*/



#include<stdio.h>   
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i,j,k;

    printf("ENter the element of the matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENter the element of the matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Resultant matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    } 
    return 0;
}