/* 
Program 31    Write a program to calculate the area of triangle
solution 3    no argument , return value 
*/


#include <stdio.h>
float areaTriangle()
{
    float base, height;
    printf("Enter the base :");
    scanf("%f", &base);
    printf("Enter the height :");
    scanf("%f", &height);
    return 0.5 * base * height;
}
int main()
{
    float area;
    area = areaTriangle();
    printf("Area of triangle is: %f\n", area);
    return 0;

}