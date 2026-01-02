//  Write a Program to check the given number is prime or not prime.
#include<stdio.h>
#include<conio.h>

void main() 
{
    int num,i,count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("%d is not a prime number.\n", num);
    } 
    else 
    {
        for (i = 1; i <= num; i++) 
        {
            if (num % i == 0) 
            {
                count++;
            }
        }

        if (count == 2) 
        {
            printf("%d is a prime number.\n", num);
        } 
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    getch();
}
