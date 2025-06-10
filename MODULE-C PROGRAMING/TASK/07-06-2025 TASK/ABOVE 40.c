// Check whether a year is a leap year.
#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your marks :"); 
    scanf("%d",&marks);
    
    printf("\n");
    
    if(marks >= 40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
    getch();
}