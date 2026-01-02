// Identify the largest among three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    
    printf("Enter Your Number frist :");
    scanf("%d",&num1);
    
    printf("Enter Your Number second:");
    scanf("%d",&num2);
    
    printf("Enter Your Number third:");
    scanf("%d",&num3);
    
    printf("\n");
    
    if (num1 > num2)
    {
        if(num1 > num3)
        {
            printf("\n largest Number is : %d",num1);
        }
        else
        {
            printf("\n largest Number is : %d",num3);
        }
    }
    else if (num2 > num3)
    {
        printf("\n largest Number is : %d",num2);
    }
    else
    {
        printf("\n The Number is equal");
    }
    
    
    
    getch();
}