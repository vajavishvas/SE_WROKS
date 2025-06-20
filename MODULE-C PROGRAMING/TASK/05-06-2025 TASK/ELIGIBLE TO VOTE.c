/* Determine if a person is eligible to vote (age ≥ 18) */
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("\n Enter Your Age :");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf(" \n your eligible to vote");
    }
    else
    {
        printf(" \n your not eligible to vote");
    }

    getch();
}