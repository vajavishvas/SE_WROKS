//Assign ticket price based on age (child, adult, senior).
#include<stdio.h>
#include<conio.h>
void main()
{
    int age,price;
    
    printf("Enter your Age : ");
    scanf("%d",&age);
    
    printf("\n");
    
    if(age <= 13)
    {
        price=20;
        printf("Children ticket : $%d",price);
    }
    else if (age <= 60)
    {
        price=60;
        printf("Adult ticket : $%d ",price);    
    }
    else
    {
        price=100;
        printf("Senior ticket : $%d",price);
    }
    
    getch();
}