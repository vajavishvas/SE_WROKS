//Check if a number is a multiple of 7.
#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	
	printf("Enter any number:");
	scanf("%d",&number);
	
	printf("\n");
	
	if(number % 7 == 0)
	{
		printf("%d your number is multiple of 7",number);
	}
	else
	{
		printf("%d your number is not multiple of 7",number);
	}
	getch();
}