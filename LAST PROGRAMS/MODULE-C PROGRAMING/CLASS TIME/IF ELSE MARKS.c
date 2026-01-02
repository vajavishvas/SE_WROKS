#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your Marks :");
    scanf("%d",&marks);
    
    if(marks>55)
    {
        printf("\n Your pass");
    }
    else
    {
        printf("\n Your fail");
    }
    
    getch();
    
}