#include<stdio.h>
#include<conio.h>

int main() 
{
    int num, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;


    firstDigit = num;
    
    while (firstDigit >= 10) 
    {
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
