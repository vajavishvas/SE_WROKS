// Check whether a year is a leap year.
#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    
    printf("Enter any year :"); 
    scanf("%d",&y);
    
    printf("\n");
    
    if(y % 400 == 0 || y % 4 == 0) // && y % 100 != 0
    {
        printf("Year is leapyear");
    }
    else
    {
        printf("Year is not leapyear");
    }
    
    getch();
}