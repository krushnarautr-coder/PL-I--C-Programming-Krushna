/*
Program 20   write a program to accept a element a dimensional array 
Solution 2   Using while loop 
*/


#include<stdio.h>
int main()
{
    int arr[5],i=0,sum=0;
    do
    {
        printf("Enter element at the index %d:",i);
        scanf("%d",& arr[i]);
        sum = sum + arr[i];
        i++;
    }while(i<5);
    i=0;
    do
    {
        sum= sum + arr[i];
        i++;
    }while(i<5);
    printf("Sum of all elements is: %d",sum);
    return 0;
}