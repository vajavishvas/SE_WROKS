// Check if a number is divisible by both 3 and 5.
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    
    printf("Enter Your number :");
    scanf("%d",&number);
    
    if(number % 3 == 0 && number % 5 == 0)
    {
        printf(" \n %d divisible by both 3 and 5 ",number);
    }
    else
    {
        printf("\n %d not divisible by both 3 and 5",number);
    }
    
    getch();
}