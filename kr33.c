/*
Program 33    Write a program using a structure to store the details of student including , roll no. name and marks in the subject . Accept 
the input from the usser , calculate the total and average of the marks and display the students detail total marks and average 

Solution  Using structure 
*/
#include<stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    float marks1,marks2,marks3;
    float total,average;
};
int main()
{
    struct Student s;
    printf("Enter the roll number :");
    scanf("%d",&s.roll_no);
    printf("Enter the name of student :");
    scanf("%s",s.name);
    printf("Enter the marks for subject 1 :");
    scanf("%f",&s.marks1);
    printf("Enter the marks for subject 2 :");  
    scanf("%f",&s.marks2);
    printf("Enter the marks for subject 3 :");
    scanf("%f",&s.marks3);
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.average = s.total / 3;
    printf("Student Details:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", s.total);
    printf("Average Marks: %.2f\n", s.average);
    return 0;
}
