// find the Factorial number

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i,f = 1;

    printf("Enter a number ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Factorial is not possible for negative no \n");
    } 
    else 
    {
        for(i = 1; i <= num; i++) 
    	{
            f = f * i;
        }
        printf("Factorial of %d is %d\n", num, f);
    }

    getch();
}