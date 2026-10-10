/* 
Program 19     write a program to accept the element of the one dimensional array and calculate the sum of all its element 
solution 1  using for loop 
*/

#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter element at the index %d:",i);
        scanf("%d",& arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of all the elements of the array is %d",sum);
    return 0;

}