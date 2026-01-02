// A
// BB
// CCC
// DDDD
// EEEEE


#include <stdio.h>
#include <conio.h>

void main()
{
	char i,j;
	
	for(i=65;i<=69;i++) //ASCII VALUE A = 65 TO E = 69 
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);	
		}
		printf("\n");
	}
	
	getch();
}