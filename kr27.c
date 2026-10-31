/* 
Program 27   Write a program to find the factorial of the number given using a user defined value 
Solution 3  Using do while loop
*/


#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    int i = 1;
    do
    {
        fact *= i;
        i++;
    } while(i <= n);
    return fact;
}
int main()
{
    int n, result;  
    printf("Enter a number: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial of %d = %d\n", n, result);
    return 0;
}