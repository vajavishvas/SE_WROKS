#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        isPrime = 0;  // Numbers <= 1 are not prime
    }
    else 
    {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is Not a Prime number.\n", num);

    return 0;
}
