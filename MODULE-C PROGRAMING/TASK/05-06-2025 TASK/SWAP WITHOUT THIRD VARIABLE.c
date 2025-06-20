/* Swap two numbers using third variable */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter three integers : ");
    scanf("%d",&a);
    
    printf("Enter three integers : ");
    scanf("%d",&b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\n \n");
    printf("Swaping number : %d %d ",a,b);
    
    
    getch();
}
