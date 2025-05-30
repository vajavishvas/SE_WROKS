#include<stdio.h>
#include<conio.h>
void main()
{
    float totalamount,rate,year;
    float simpleinterest;
    
    printf("Enter total amount :");
    scanf("%f",&totalamount);
    
    printf("Enter interest of rate:");
    scanf("%f",&rate);
    
    printf("Enter year of interest:");
    scanf("%f",&year);
    
    simpleinterest = (totalamount * rate * year)/100;
    
    printf("Area of simpleinterest is %f",simpleinterest);
    
    
    getch();
}