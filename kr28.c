/* Program 28   Write a program to find the factorial of the number given using a user defined value 
   Solution 4  Using recursion
*/


#include <stdio.h>
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return(n * factorial(n-1));
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