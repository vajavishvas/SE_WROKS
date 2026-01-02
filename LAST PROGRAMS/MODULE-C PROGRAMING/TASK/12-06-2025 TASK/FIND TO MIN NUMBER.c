// .Write a program to find out the min from given number
#include<stdio.h>
#include<conio.h>
void main() 
{
    int num,digit,min = 9;

    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("\n");

    if (num < 0) 
    {
        num = -num;
    }

    while (num > 0) 
    {
        digit = num % 10;
        
        if (digit < min) 
        {
            min = digit;       
        }
        
        num = num / 10;        
    }

    printf("Max digit is: %d\n", min);

    getch();
}
