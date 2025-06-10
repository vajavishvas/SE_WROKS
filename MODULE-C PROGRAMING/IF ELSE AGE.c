#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter Your Age ");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("\n Your Eligibel to vote ");
    }
    else
    {
        printf("\n Your not Eligibel to vote ");
    }
    
    getch();
}