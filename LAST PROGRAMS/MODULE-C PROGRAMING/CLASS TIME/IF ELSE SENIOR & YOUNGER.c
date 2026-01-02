#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter your age:");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("\n eligibal to vote ");
        
        if (age>60)
        {
            printf(" \n your senior citizen ");
        }
        else
        {
            printf("\n your youger");
        }
    }
    else
    {
        printf("\n your not eligibal to vote");
    }
    getch();
}
