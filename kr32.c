/*
Program32   Write a program to calculate the area of a triangle
Solution 4  Argument , Return a value 
*/



#include<stdio.h>
float areaTriangle(float base, float height)
{
    return 0.5 * base * height;
}
int main()
{
    float base, height, area;
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);
    area = areaTriangle(base, height);
    printf("Area of triangle is: %.2f\n", area);
    return 0;
}