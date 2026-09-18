/* 
Program 14    Write a program to genrate the multiplication table of any number using while loop , do while loop and for loop 
solution 1  using while loop 
*/

#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter a number");
    scanf("%d",&num);

    printf("\n Multiplication table of %d \n",num);

    while(i<= 10)
    {
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }
    return 0;   
}