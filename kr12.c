// Program 12   Write a program to determine whether a given number is positive or negative or zero

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The number is positive");
    }
    else if(num<0)
    {
        printf("The number is negative");
    }
    else 
    {
        printf("the number is zero");
    }
    return 0;
}


