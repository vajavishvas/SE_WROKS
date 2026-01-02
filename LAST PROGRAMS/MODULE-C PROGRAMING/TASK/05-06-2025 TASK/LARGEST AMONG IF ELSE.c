/* Find the largest among two numbers. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    
    printf("Enter Your Number frist :");
    scanf("%d",&num1);
    
    printf("Enter Your Number second:");
    scanf("%d",&num2);
    
    if (num1 > num2)
    {
        printf("largest Number %d",num1);
    }
    else if( num2 > num1)
    {
        printf("largest Number %d",num2);
    }
    else
    {
        printf("Number is equal");
    }

    getch();
}