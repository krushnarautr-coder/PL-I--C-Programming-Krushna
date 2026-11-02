/*
Program 30    Write a program to calculate the area of triangle 
Solution 2    Argument, no return value 
*/


#include <stdio.h>
void areaTriangle(float base, float height)
{
    float area;
    area = 0.5 * base * height;
    printf("Area of triangle is: %.2f\n", area);
}
int main()
{
    float b, h;
    printf("Enter base of triangle: ");
    scanf("%f", &b);
    printf("Enter height of triangle: ");
    scanf("%f", &h);
    areaTriangle(b, h);
    return 0;
}