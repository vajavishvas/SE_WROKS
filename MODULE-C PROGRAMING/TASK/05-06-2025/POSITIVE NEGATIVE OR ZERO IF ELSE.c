/* Check if a number is positive, negative, or zeron */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter Your Number :");
    scanf("%d",&num);
    
    if(num > 0)
    {
        printf(" Your Number is positive ");
    }
    else if (num < 0)
    {
        printf(" Your Number is negative");
    }
    else
    {
        printf(" Your Number is zero");   
    }
    

    getch();
}