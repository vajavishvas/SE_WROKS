//Check if a number is within a given range (e.g., 10–50).
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter your Number : ");
    scanf("%d",&num);
    
    printf("\n");
    
    if(num >= 10 && num <= 50)
    {
        printf("Your Number is give to range");
    }
    else
    {
        printf("Your Number is not in to give to range");
    }
    
    getch();
}