// Write a program to print the number in reverse order 
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rvs = 0,digit;
    
    printf("\n Enter of number : ");
    scanf("%d",&num);
    
    while(num > 0)
    {
    digit = num % 10;
    rvs = rvs * 10 + digit;
    num = num / 10;
    }
    
    printf("%d",rvs);
    
    getch();
}
