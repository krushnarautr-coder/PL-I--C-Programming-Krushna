/* 
Program 18    write a program to accept the element of integer float and character arrays from the user and display the value and corresponding memory addresses of each array
solution 2    User defined 
*/

#include<stdio.h>
int main()
{
    int var1[5];
    float var2[5];
    char var3[5];
    int i,j,k;

    for(i=0;i<=4;i++);
    {
        printf("Enter your integer value :");
        scanf("%d",&var1[i]);
    }
    for (i=0 ;i<=4;i++);
    {
        printf("At the index %d",i);
        printf("The value of var1 is %d",var1[i]);
        printf("and address of var1 is %d",&var1[i]);
    }
    printf("\n\n");
    j=0;
    while(j<=4)
    {
        printf("Enter your float value :");
        scanf("%f",&var2[j]);
        j++;
    }
    j=0;
    while(j<=4)
    {
        printf("At the index %d",j);
        printf("The value of var2 is %f",var2[j]);
        printf("and address of var2 is %d",&var2[j]);
        j++;
    }
    printf("\n\n");
    k=0;
    do
    {
        printf("Enter your character value :");
        scanf(" %c",&var3[k]);
        k++;
    }
    while(k<=4);
    k=0;
    do
    {
        printf("enter your character value :");
        scanf(" %c",&var3[k]);
        k++;
    }
    while(k<=4);
    k=0;
    {
        printf("At the index %d",k);
        printf("The value of var3 is %c",var3[k]);
        printf("and address of var3 is %d",&var3[k]);
        k++;
    }while(k<=4);
    return 0;
}   