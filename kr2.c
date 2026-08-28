/*
Program 1  Write a program to make use of basic i/o function using different data type
solution 2  user defined value 
*/

#include<stdio.h>

int main()
{
    int rollnum ;
    float per ;
    char grade ;

    printf("\n Enter student Roll number :");
    scanf ("%d",& rollnum);
    printf("\n Enter student Percentage:");
    scanf("%f",& per);
    printf("\n Enter student grade:");
    scanf("%c", & grade);

    printf("\n    Student information   \n");
    printf("\n Roll number is :%d", rollnum);
    printf("\n Percentage is :%f", per);
    printf("\n Grade : %c", grade);

    return 0;
}