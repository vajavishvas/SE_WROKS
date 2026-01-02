/*  Find the greatest of two numbers. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    
    printf("Enter your frist number :"); 
    scanf("%d",&a);
    
    printf("Enter your second number :"); 
    scanf("%d",&b);
    
    printf("\n");
    
    if(a>b)
    {
        printf("Greatest Number is :%d ",a);
    }
    else if(a<b)
    {
        printf("Greatest Number is :%d",b);
    }
    else
    {
        printf("Your number is equal");
    }
    
    getch();
}