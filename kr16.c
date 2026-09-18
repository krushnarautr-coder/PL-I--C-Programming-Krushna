/*
Program16   Write a program to generate the multiplication table of any number using for loop ,do while loop and for loop
solution 3 Using for loop
*/

#include<stdio.h>
int main()
{
    int num , i;
    printf("Enter a number");
    scanf("%d",&num);

    printf("\n Multiplication table of %d \n",num);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}