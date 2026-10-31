/*
Program 25   Write a program to write to find the factorial of a given number using user defined function 
Solutin 1   Using for loop 
 */


#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main ()
{
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
