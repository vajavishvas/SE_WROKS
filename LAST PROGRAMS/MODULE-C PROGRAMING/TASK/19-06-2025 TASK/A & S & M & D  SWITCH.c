/* Write a Program of Addition, Subtraction ,Multiplication and Division using
switch(Must Be Menu Driven) */

#include<stdio.h>
#include<conio.h>

void main()
{

	float a,b,c;
	int selection;
	
	printf(" please enter a selected number in to 1 to 4 :");
	scanf("%d",&selection);
	
	printf("enter any number : ");
	scanf("%f",&a);
	
	printf("enter any second number : ");
	scanf("%f",&b);
	
	switch(selection)
	{
	    case 1:
	    c = a + b;
	    printf("Addition = %f",c);
	    break;
	    
	    case 2:
	    c = a - b;
	    printf("Subtraction = %f",c);
	    break;
	    
	    case 3:
	    c = a * b;
	    printf("Multiplication = %f",c);
	    break;
	    
	    case 4:
	    c = a / b;
	    printf("Division = %f",c);
	    break;
	    
	    default:
	    printf("Invalid choice = \n ");
	}
	getch();
}