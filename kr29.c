/*
Program 29    Write a program to calculate the area of triangle 
Solution 1    No Arguments, No Return Value 
*/

void area()
{
    float base, height , area;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Area of triangle = %f\n", area);
}
int main()
{
    area();
    return 0;
}